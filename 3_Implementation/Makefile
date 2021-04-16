# Name of the project
PROJECT_NAME = Calendar

# Output directory
BUILD = build

# All source code files
SRC = project_main.c\
src/Adddays.c\
src/Addmonth.c\
src/Addyear.c\
src/Cmpdate.c\
src/Datefmt.c\
src/Diffdays.c\
src/Diffymd.c\
src/Julian.c\
src/Leap.c\
src/Subdays.c\
src/Submonth.c\
src/Subyear.c\
src/Valid.c\
src/Weekday.c\

# All test source files
TEST_SRC = ${SRC}\
test/test_calendar_operations.c\
unity/unity.c\

TEST_OUTPUT = $(BUILD)/Test_$(PROJECT_NAME).out

# All include folders with header files
INC = -Iinc\
-Iunity\

#Library Inlcudes
#INCLUDE_LIBS = 
INCLUDE_LIBS = -lcunit

# Project Output name
PROJECT_OUTPUT = $(BUILD)/$(PROJECT_NAME).out

# Document files
DOCUMENTATION_OUTPUT = documentation/html

# Default target built
$(PROJECT_NAME):all

# Run the target even if the matching name exists
.PHONY: run clean test doc all

all: $(SRC) $(BUILD)
	gcc $(SRC) $(INC) -o $(PROJECT_OUTPUT).exe

# Call `make run` to run the application
run:$(PROJECT_NAME)
	./$(PROJECT_OUTPUT).exe

# Document the code using Doxygen
doc:
	make -C ./documentation

# Build and run the unit tests
test:$(BUILD)
	gcc $(TEST_SRC) $(INC) -o $(TEST_OUTPUT) $(INCLUDE_LIBS)
	./$(TEST_OUTPUT)

# Remove all the built files, invoke by `make clean`
clean:
	rm -rf $(BUILD) $(DOCUMENTATION_OUTPUT)

# Create new build folder if not present
$(BUILD):
	mkdir build
