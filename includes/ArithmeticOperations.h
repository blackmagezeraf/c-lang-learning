/**
 * @file ArithmeticOperations.h
 * @author Ali Hussain Abid
 * @brief Provies basic Arithmetic functions.
 * @version 1.0
 * @date 2025-07-31
 * 
 * @copyright Copyright (c) 2025
 * 
 */

#pragma once

#include <math.h>

/**
 * @brief Addes Two Integers and returns their results.
 * 
 * @param a First Integer (Is first in the equation as well)
 * @param b Second Integer (Is second in the equation as well)
 * @return int 
 */
int IntAdd(const int a, const int b) {
	return a + b;
}

/**
 * @brief Adds two float variables and returns their results.
 * 
 * @param a First floating-point number.
 * @param b Second floating-point number.
 * @return The sum of a and b.
 */
float FloatAdd(const float a, const float b) {
	return a + b;
}

/**
 * @brief Adds two double variables.
 * 
 * @param a First double-precision number.
 * @param b Second double-precision number.
 * @return The sum of a and b.
 */
double DoubleAdd(const double a, const double b) {
	return a + b;
}

/**
 * @brief Subtracts two integers.
 * 
 * @param a First integer.
 * @param b Second integer.
 * @return The result of a minus b.
 */
int IntSubtract(const int a, const int b) {
	return a - b;
}

/**
 * @brief Subtracts two floating-point numbers.
 * 
 * @param a First floating-point number.
 * @param b Second floating-point number.
 * @return The result of a minus b.
 */
float FloatSubtract(const float a, const float b) {
	return a - b;
}

/**
 * @brief Subtracts two double-precision floating-point numbers.
 * 
 * @param a First double-precision number.
 * @param b Second double-precision number.
 * @return The result of a minus b.
 */
double DoubleSubtract(const double a, const double b) {
	return a - b;
}

/**
 * @brief Multiplies two integers.
 * 
 * @param a First integer.
 * @param b Second integer.
 * @return The product of a and b.
 */
int IntMultiply(const int a, const int b) {
	return a * b;
}

/**
 * @brief Multiplies two floating-point numbers.
 * 
 * @param a First floating-point number.
 * @param b Second floating-point number.
 * @return The product of a and b.
 */
float FloatMultiply(const float a, const float b) {
	return a * b;
}

/**
 * @brief Multiplies two double-precision floating-point numbers.
 * 
 * @param a First double-precision number.
 * @param b Second double-precision number.
 * @return The product of a and b.
 */
double DoubleMultiply(const double a, const double b) {
	return a * b;
}

/**
 * @brief Divides two integers.
 * 
 * @param a Dividend.
 * @param b Divisor.
 * @return The quotient of a divided by b.
 */
int IntDivide(const int a, const int b) {
	if (b == 0) {
		return 0;
	}
	return a / b;
}

/**
 * @brief Divides two floating-point numbers.
 * 
 * @param a Dividend.
 * @param b Divisor.
 * @return The quotient of a divided by b.
 */
float FloatDivide(const float a, const float b) {
	if (b == 0.0f) {
		return 0.0f;
	}
	return a / b;
}

/**
 * @brief Divides two double-precision floating-point numbers.
 * 
 * @param a Dividend.
 * @param b Divisor.
 * @return The quotient of a divided by b.
 */
double DoubleDivide(const double a, const double b) {
	if (b == 0.0) {
		return 0.0;
	}
	return a / b;
}

/**
 * @brief Calculates the modulus of two integers.
 * 
 * @param a Dividend.
 * @param b Divisor.
 * @return The remainder of a divided by b.
 */
int IntModulus(const int a, const int b) {
	if (b == 0) {
		return 0;
	}
	return a % b;
}

/**
 * @brief Calculates the modulus of two floating-point numbers.
 * 
 * @param a Dividend.
 * @param b Divisor.
 * @return The remainder of a divided by b.
 */
float FloatModulus(const float a, const float b) {
	if (b == 0.0f) {
		return 0.0f;
	}
	return fmodf(a, b);
}

/**
 * @brief Calculates the modulus of two double-precision floating-point numbers.
 * 
 * @param a Dividend.
 * @param b Divisor.
 * @return The remainder of a divided by b.
 */
double DoubleModulus(const double a, const double b) {
	if (b == 0.0) {
		return 0.0;
	}
	return fmod(a, b);
}