#include <stdio.h>
#include "../includes/BodyMassIndex.h"
#include "../includes/ArithmeticOperations.h"

/**@brief
 *
 * This is a simple C program that demonstrates the use of comments,
 * variable declarations, input/output operations, and basic calculations.
 * It includes a function to calculate BMI based on age, weight, and height.
 * The program uses the C23 language standard version.
 *
 * @author: github.com/BlackMageZeraf
 */
int main(int argc, char const *argv[])
{
    // This is a simple single line C comment. This will not be executed.

    /*
     * This is a multi-line C comment.
     * It can span multiple lines.
     * This will also not be executed.
     */

    int age;  // Variable declaration
    age = 25; // Assigning a value to the variable

    int height = 180; // Variable declaration and initialization

    char name[] = "Ali Hussain Abid";

    char currencySymbol = '$'; // Variable declaration and initialization

    printf("Hello, World!\n");

    // Let's print the age and height
    // use %d format specifier for integers
    // format specifiers are used to format the output
    printf("Age: %d years\n", age);
    printf("Height: %d cm\n", height);

    /**
     * Use %f format specifier for floating-point numbers
     * The 'f' in %f indicates that the number is a float.
     * This is used for printing decimal numbers.
     */
    float weight = 0.0f;                 // Variable declaration and initialization
    printf("Weight: %.2f kg\n", weight); // Print weight with two decimal

    // Get BMI age from user input
    printf("Enter your age: ");
    scanf("%d", &age); // Read age from user input

    printf("Enter your weight in kg: ");
    scanf("%f", &weight); // Read weight from user input

    printf("Enter your height in cm: ");
    scanf("%d", &height); // Read height from user input

    /**
     * Calculate BMI based on age, weight, and height
     */
    // float bmi = calculateBmiByAge(age, weight, height);
    // printf("Your BMI is: %.2f\n", bmi); // Print the calculated BMI

    double pi = 3.141592653589793;      // Declare a constant for Pi
    printf("Value of Pi: %.15f\n", pi); // Print the value of Pi with 15 decimal places

    double e = 2.718281828459045;     // Declare a constant for Euler's number
    printf("Value of e: %.15f\n", e); // Print the value of e with 15 decimal places

    printf("Scintific notation of Pi: %e\n", pi); // Print Pi in scientific notation

    printf("BMI: %.15f\n", CalculateBmiByAge(age, weight, height)); // Call the BMI calculation function
    
    /**
     * @note Let's work on format specifiers.
     * Format specifiers are used to format the output in C.
     * They allow you to control how the output is displayed.
     * Common format specifiers include:
     * %d for integers, %f for floating-point numbers, %c for characters,
     * %s for strings, and %e for scientific notation.
     * You can also specify the number of decimal places for floating-point numbers.
     * For example, %.2f will display a floating-point number with two decimal places.
     * This is useful for displaying values like weight, height, and BMI.
     */
    printf("%d\n", age); // Print age using %d format specifier
    printf("%+3d\n", age); // Print age with a sign and minimum width of 3
    printf("%f\n", weight); // Print weight using %f format specifier
    printf("%+7.2f\n", weight); // Print weight with a sign, minimum width of 7, and 2 decimal places
    printf("%7.2f\n", weight); // Print weight with right alignment, minimum width of 7, and 2 decimal places
    printf("%s\n", name); // Print name using %s format specifier
    printf("%-20s\n", name); // Print name left-aligned in a field of 20 characters
    printf("%c\n", 'A'); // Print character 'A' using %c format specifier
    printf("%+c\n", currencySymbol); // Print currency symbol with a sign
    printf("%-5c\n", currencySymbol); // Print currency symbol left-aligned in a field of 5 characters
    printf("%c\n", currencySymbol); // Print currency symbol using %c format specifier


    printf("%d\n", IntAdd(10, 20));
    printf("%f\n", FloatAdd(10.5f, 20.5f));
    printf("%lf\n", DoubleAdd(10.5, 20.5));

    printf("%d\n", IntDivide(100, 20));
    printf("%f\n", FloatDivide(100.0f, 20.0f));
    printf("%lf\n", DoubleDivide(100.0, 20.0));

    printf("%d\n", IntModulus(100, 20));
    printf("%f\n", FloatModulus(100.0f, 20.0f));
    printf("%lf\n", DoubleModulus(100.0, 20.0));

    // Return 0 to indicate successful execution
    return 0;
}