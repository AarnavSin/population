# Population Growth Calculator

This C script, population.c, is designed to calculate the number of years required for a population to grow from a given start size to an end size.

## Dependencies

This script depends on the cs50.h header file, which provides some useful functions for reading input from the user. Before running the script, please ensure you have the cs50.h header file installed. You can find the header file on the [CS50 GitHub repository](https://github.com/cs50/libcs50).

To install cs50.h, you can follow the instructions provided in the repository's README.

## How to Use

1. Clone this repository to your local machine or download the population.c file directly.

2. Compile the C script using a C compiler of your choice. For example, you can use gcc:

```bash
gcc -o population population.c
```

3. Run the executable:

```bash
./population
```

4. Follow the prompts to input the starting population size and the desired ending population size:

```bash
Enter the starting population size: [starting_size]
Enter the ending population size: [ending_size]
```

5. The program will handle invalid input values and keep prompting until valid values are provided.

6. After providing valid input, the program will calculate the number of years required for the population to reach the desired end size and display the result:

```bash
Years: [number_of_years]
```

## Requirements

To ensure accurate and meaningful results, please adhere to the following requirements:

- The starting population size should be greater than or equal to 9, as starting with fewer than 9 entities will lead to stagnant population growth.

- The ending population size should be greater than or equal to the starting population size, as the goal is to have the population of entities grow.
