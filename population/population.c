#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Prompt for start size
    int startPopulation;
    do {
        startPopulation = get_int("Enter the starting population size: ");
    }
    while (startPopulation < 9);
    printf("\n");

    // Prompt for end size
    int endPopulation;
    do {
        endPopulation = get_int("Enter the ending population size: ");
    }
    while (endPopulation < startPopulation);

    // Calculate number of years until we reach threshold

    int yearCounter = 0;

    while(startPopulation < endPopulation) {
        int populationBirths = startPopulation / 3;
        int populationDeaths = startPopulation / 4;
        startPopulation = startPopulation + populationBirths - populationDeaths; 
        yearCounter++;
    }

    // Print number of years
    printf("Years: %i\n", yearCounter);
}