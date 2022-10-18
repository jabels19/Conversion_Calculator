#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>


int main()
{
    char unit; //variables and units needed
    int temp;
    int inputMass;
    int currency;
    int inputF;
    int inputC;
    int inputK;
    int f_to_c; //fahrenheit to celsius
    int c_to_f; //clesius to fahrenheit
    float t_to_k; //temp in fahrenheit to kelvin
    float inputUSD;
    float inputEuro;
    float e_to_u; // euros to usd
    float u_to_e; //usd to euros
    int earth_to_moon;


    printf("Welcome to the unit conversion calculator!\n");
    printf("Choose the first letter from the following list you want converted.\n");
    printf("Temperature (T), MoonMass(M), Currency(C): \n");
    scanf_s("%c", &unit); //scanf used to get input

    if (unit == 'T' || unit == 't')
    {
        printf("Hello, welcome the the temperature conversion calculator!\n");
        printf("Choose from the following: \n");

        printf("Enter the number 1 for Fahrenheit to Celsius.\n");
        printf("Enter the number 2 for Celsius to Fahrenheit.\n");
        printf("Enter the number 3 for Fahrenheit to Kelvin.\n");
        scanf_s("%d", &temp);

        if (temp == 1)
        {
            printf("Please enter a temperature in Fahrenheit: \n");
            scanf_s("%d", &inputF);
            f_to_c = ((inputF - 32) * (5.0 / 9.0));
            printf("Degrees in Celsius: %d\n", f_to_c);

        }
        else if (temp == 2)
        {
            printf("Please enter a temperature in Celsius: \n");
            scanf_s("%d", &inputC);
            c_to_f = ((9.0 / 5.0) * inputC + 32);
            printf("Degrees in Fahrenheit: %d\n", c_to_f);

        }
        else if (temp == 3)
        {
            printf("Please enter a temperature in Fahrenheit: \n");
            scanf_s("%d", &inputK);
            t_to_k = ((inputK + 459.67) * 5.0 / 9.0);
            printf("Degrees in Kelvin: %.2f\n", t_to_k); //%.2f rounds to 2 deciimal places

        }

        else
        {
            printf("Please enter either 1, 2, or 3.\n");
        }
    }

    else if (unit == 'C' || unit == 'c')
    {
        printf("Welcome the currency conversion calculator!\n");
        printf("Choose from the followng: \n");

        printf("Enter the number 1 to convert (as of 2022) USD to Euros.\n");
        printf("Enter the number 2 to convert (as of 2022) Euros to USD.\n");
        scanf_s("%d", &currency);

        if (currency == 1)
        {
            printf("Please enter an amount in USD: \n");
            scanf_s("%f", &inputUSD);
            u_to_e = inputUSD * 1.01;
            printf("Euro equivalency: %.2f\n", u_to_e);
        }

        else if (currency == 2)
        {
            printf("Please enter an amount in Euros: \n");
            scanf_s("%f", &inputEuro);
            e_to_u = inputEuro * 0.99;
            printf("USD equivalency: %.2f\n", e_to_u);

        }

        else
        {
            printf("Please enter either 1 or 2.\n");
        }

    }

    else if (unit == 'M' || unit == 'm')
    {
        printf("Welcome to the moon mass calulator!\n");

        printf("Enter your wieght in pounds on Earth: \n");
        scanf_s("%d", &inputMass);
        earth_to_moon = inputMass / 6.0;
        printf("Your weight in pounds on the moon: %d\n", earth_to_moon);

    }

    else
    {
        printf("What are you doing!! Not a choice, try again.");
    }


    return 0;

}