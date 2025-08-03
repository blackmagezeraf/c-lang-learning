#include <stdio.h>

int main(int argc, char const *argv[]) {
  // Weight Converter Program

  int choice = 0;
  float pounds = 0.0f;
  float kilograms = 0.0f;

  while (choice != 3) {
    printf("Weight Conversion Calculator\n");
    printf("1. Kilograms to Pounds\n");
    printf("2. Pounds to Kilograms\n");
    printf("Enter your Choice 1 or 2: ");
    scanf_s("%d", &choice);

    if (choice == 1) {
      // Kilograms to Pounds
      printf("Enter weight in Kilograms (kg): ");
      scanf_s("%f", &kilograms);
      pounds = kilograms * 2.20462;
      printf("%.2f kilograms is equal to %.2f pounds.\n", kilograms, pounds);
    } else if (choice == 2) {
      // Pounds to Kilograms
      printf("Enter weight in Pounds (lb): ");
      scanf_s("%f", &pounds);
      kilograms = pounds / 2.20462;
      printf("%.2f pounds is equal to %.2f kilograms.\n", pounds, kilograms);
    } else {
      printf("Invalid Choice! please enter 1 or 2\n");
    }
  }

  return 0;
}