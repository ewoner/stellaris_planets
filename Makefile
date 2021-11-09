# Thanks to Job Vranish (https://spin.atomicobject.com/2016/08/26/makefile-c-projects/)
TARGET_EXEC := ptrack.exe
BUILD_DIR := Build
SRC_DIRS := Sources
DATA_DIR := DATA
EXE := $(BUILD_DIR)/$(TARGET_EXEC)

# Find all the C and C++ files we want to compile
# Note the single quotes around the * expressions. Make will incorrectly expand these otherwise.
SRCS := $(shell find $(SRC_DIRS) -name '*.cpp')

# String substitution for every C/C++ file.
# As an example, hello.cpp turns into ./build/hello.cpp.o
OBJS := $(SRCS:%.cpp=$(BUILD_DIR)/%.o)

# String substitution (suffix version without %).
# As an example, ./build/hello.cpp.o turns into ./build/hello.cpp.d
DEPS := $(OBJS:.o=.d)

# Every folder in ./src will need to be passed to GCC so that it can find header files
INC_DIRS := $(shell find $(SRC_DIRS) -type d)

# Add a prefix to INC_DIRS. So moduleA would become -ImoduleA. GCC understands this -I flag
INC_FLAGS := $(addprefix -I,$(INC_DIRS))

# The -MMD and -MP flags together generate Makefiles for us!
# These files will have .d instead of .o as the output.
CPPFLAGS := $(INC_FLAGS) -MMD -MP -std=c++17 -g

# The final build step.
.PHONY: main
main:  $(BUILD_DIR)/$(SRC_DIRS)/main.o $(OBJS)
	@echo -e "\nCreating...." $(BUILD_DIR)/$(TARGET_EXEC) "\n"
	$(CXX) $(OBJS) -o $(BUILD_DIR)/$(TARGET_EXEC) $(LDFLAGS) $(CPPFLAGS)
	@echo -e "\ncoping data files over...."
	mkdir -p $(BUILD_DIR)/$(DATA_DIR)
	cp $(DATA_DIR)/*.* $(BUILD_DIR)/$(DATA_DIR)
	@echo "Done!!"

#~$(BUILD_DIR)/$(TARGET_EXEC): $(OBJS)
#~	@echo -e "\Creating...." $@ "\n"
#~	$(CXX) $(OBJS) -o $@ $(LDFLAGS)
#~	@echo -e "\ncoping data files over...."
#~	cp Data/*.* $(DATA_DIR)

# Build step for C++ source
$(BUILD_DIR)/%.o: %.cpp
	@echo -e "\nCompiling...." $@ "\n"
	mkdir -p $(dir $@)
	$(CXX) $(CPPFLAGS) $(CXXFLAGS) -c $< -o $@


.PHONY: clean
clean:
	@echo -e "\nCLean and removing Build files....\n"
	$(RM) $(BUILD_DIR) -r

.PHONY: build

build: clean main

.PHONY: run
run: main
	$(EXE)

# Include the .d makefiles. The - at the front suppresses the errors of missing
# Makefiles. Initially, all the .d files will be missing, and we don't want those
# errors to show up.
-include $(DEPS)
