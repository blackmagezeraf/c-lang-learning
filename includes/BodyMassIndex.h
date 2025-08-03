/**
 * @file BodyMassIndex.h
 * @author https://github.com/blackmagezeraf
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
 *
 * @return returns the calculated BMI
 */

/**
 * @note
 * The BMI formula is weight divided by the square of height in meters.
 * The height is divided by 100.0f to convert it from centimeters to meters.
 * This is necessary because BMI is calculated using height in meters.
 * This is the standard formula used to calculate BMI.
 */
double CalculateBmiByAge(const int age, const float weight, const int height);