#pragma once
/**
 * @headerfile BodyMassIndex.h
 * @brief Header file for Body Mass Index (BMI) calculations.
 */

/**
 * @brief Function to Calculate Body Mass Index (BMI).
 * 
 * @param age The age of the person in years.
 * @param weight The weight of the person in kilograms.
 * @param height The height of the person in centimeters.
 */
double CalculateBmiByAge(int age, float weight, int height) {
	/**
	 * @note The height is divided by 100.0f to convert it from centimeters to meters.
	 * This is necessary because BMI is calculated using height in meters.
	 */
	double heightInMeters = height / 100.0f;

	/**
	 * @note The BMI formula is weight divided by the square of height in meters.
	 * This is the standard formula used to calculate BMI.
	 */
	return (double)(weight / (heightInMeters * heightInMeters));
}