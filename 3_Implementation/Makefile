# Name of the project
PROJECT_NAME = MAHAVIRA_TEAM1_CALCULATOR

# Output directory
BUILD = build
SRC =  src/basic_calculation.c src/advanced_calculation.c src/addition.c src/calculate_power.c src/multiplication.c src/subtraction.c src/division.c src/factorial.c src/square.c src/prime.c src/dates.c main.c 

TEST = unity/unity.c\
		test/test_prime_main.c\
		test/test_prime.c\
		src/prime.c\
		test/test_division_main.c\
		test/test_divison.c\
		src/division.c
		

		

# All source code files
#unity/unity.h\ 
#test/test.c

#src/calculate_power.c main.c


#src/factorial.c src/square.c main.c


INC = -Iinc\
	  -Iunity\
	  -Itest	

# Project Output name
#PROJECT_OUTPUT = $(BUILD)/$(PROJECT_NAME)

# Document files
DOCUMENTATION_OUTPUT = documentation/html

# Default target built
$(PROJECT_NAME):all

# Run the target even if the matching name exists
.PHONY: run clean test doc all

all: $(SRC) $(BUILD)
	gcc $(SRC) $(INC)-o $(BUILD)/Hello.out

$(BUILD)/test.out: $(SRC) $(TEST) $(BUILD)
	gcc $(TEST) $(INC)-o $(BUILD)/test.out

test: $(BUILD)/test.out
	$(BUILD)/test.out

# Call `make run` to run the application
run:$(PROJECT_NAME)
	./$(BUILD)/Hello.out

# Document the code using Doxygen
doc:
	make -C ./documentation


# Remove all the built files, invoke by `make clean`
clean:
	rm -rf $(BUILD) $(DOCUMENTATION_OUTPUT)

# Create new build folder if not present
$(BUILD):
	mkdir build
