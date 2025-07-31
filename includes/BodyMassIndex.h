/**
 * @file BodyMassIndex.h
 * @author Ali Hussain Abid
 * @brief Calcualte Body Mass Index.
 * @version 1.0
 * @date 2025-07-31
 *
 * @copyright Copyright (c) 2025
 *
 */

#pragma once

/**
 * @brief Function to Calculate Body Mass Index (BMI).
 *
 * @param age The age of the person in years.
 * @param weight The weight of the person in kilograms.
 * @param height The height of the person in centimeters.
 */

/**
 * @note The height is divided by 100.0f to convert it from centimeters to meters.
 * This is necessary because BMI is calculated using height in meters.
 */

/**
 * @note The BMI formula is weight divided by the square of height in meters.
 * This is the standard formula used to calculate BMI.
 */
double CalculateBmiByAge(const int age, const float weight, const int height)
{

	double heightInMeters = height / 100.0f;

	/**
	 * @return Returns the Calculated BMI
	 */
	return (double)(weight / (heightInMeters * heightInMeters));
}