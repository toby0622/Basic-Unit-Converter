#include <stdio.h>

int main() {
    // Variable declarations
    char category;
    int tempChoice, massChoice;
    int userinputF, userinputC; // fahrenheit and celsius
    int userinputOunce, userinputGram; // ounce & gram
    float fahrenheitToCelsius, celsiusToFahrenheit;
    float ounceToPounds, gramsToPounds;

    printf("Welcome to Unit Converter!\n");
    printf("Here is a list of conversions to choose from:\n");
    printf("Temperature(T), Mass(M)\n");
    printf("Please enter the letter you want to convert.\n");
    scanf(" %c", &category);

    // temperature conversion
    if (category == 'T' || category == 't') {
        printf("Welcome to Temperature Converter!\n");
        printf("Here is a list of conversions to choose from:\n");
        printf("Enter 1 for Fahrenheit to Celsius.\n");
        printf("Enter 2 for Celsius to Fahrenheit.\n");
        scanf("%d", &tempChoice);

        if (tempChoice == 1) {
            printf("Please enter the Fahrenheit degree:\n");
            scanf("%d", &userinputF);
            fahrenheitToCelsius = ((userinputF - 32) * 5.0 / 9.0);
            printf("Celsius: %.2f\n", fahrenheitToCelsius);
        } else if (tempChoice == 2) {
            printf("Please enter the Celsius degree:\n");
            scanf("%d", &userinputC);
            celsiusToFahrenheit = ((9.0 / 5.0) * userinputC + 32);
            printf("Fahrenheit: %.2f\n", celsiusToFahrenheit);
        } else {
            printf("Please enter the correct choice.\n");
        }
    }
        // mass conversion
    else if (category == 'M' || category == 'm') {
        printf("Welcome to Mass Converter!\n");
        printf("Here is a list of conversions to choose from:\n");
        printf("Enter 1 for ounces to pounds.\n");
        printf("Enter 2 for grams to pounds.\n");
        scanf("%d", &massChoice);

        if (massChoice == 1) {
            printf("Please enter the ounce amount:\n");
            scanf("%d", &userinputOunce);
            ounceToPounds = userinputOunce * 0.0625; // 1 ounce = 0.0625 pounds
            printf("Pounds: %.2f\n", ounceToPounds);
        } else if (massChoice == 2) {
            printf("Please enter the gram amount:\n");
            scanf("%d", &userinputGram);
            gramsToPounds = userinputGram * 0.00220462; // 1 gram = 0.00220462 pounds
            printf("Pounds: %.2f\n", gramsToPounds);
        } else {
            printf("Please enter the correct choice.\n");
        }
    } else {
        printf("Invalid category selected.\n");
    }

    return 0;
}
