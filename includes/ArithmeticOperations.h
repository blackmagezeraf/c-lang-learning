#pragma once

#include <math.h>

/**
 * @headerfile ArithmeticOperations.h
 * @brief Header file for basic arithmetic operations.
 */

/**
 * @brief Adds two integers.
 * 
 * @param a First integer.
 * @param b Second integer.
 * @return The sum of a and b.
 */
int IntAdd(int a, int b) {
	/**
	 * @brief Adds two integers.
	 * 
	 * @param a First integer.
	 * @param b Second integer.
	 * @return The sum of a and b.
	 */
	return a + b;
}

/**
 * @brief Adds two floating-point numbers.
 * 
 * @param a First floating-point number.
 * @param b Second floating-point number.
 * @return The sum of a and b.
 */
float FloatAdd(float a, float b) {
	/**
	 * @brief Adds two floating-point numbers.
	 * 
	 * @param a First floating-point number.
	 * @param b Second floating-point number.
	 * @return The sum of a and b.
	 */
	return a + b;
}

/**
 * @brief Adds two double-precision floating-point numbers.
 * 
 * @param a First double-precision number.
 * @param b Second double-precision number.
 * @return The sum of a and b.
 */
double DoubleAdd(double a, double b) {
	/**
	 * @brief Adds two double-precision floating-point numbers.
	 * 
	 * @param a First double-precision number.
	 * @param b Second double-precision number.
	 * @return The sum of a and b.
	 */
	return a + b;
}

/**
 * @brief Subtracts two integers.
 * 
 * @param a First integer.
 * @param b Second integer.
 * @return The result of a minus b.
 */
int IntSubtract(int a, int b) {
	/**
	 * @brief Subtracts two integers.
	 * 
	 * @param a First integer.
	 * @param b Second integer.
	 * @return The result of a minus b.
	 */
	return a - b;
}

/**
 * @brief Subtracts two floating-point numbers.
 * 
 * @param a First floating-point number.
 * @param b Second floating-point number.
 * @return The result of a minus b.
 */
float FloatSubtract(float a, float b) {
	/**
	 * @brief Subtracts two floating-point numbers.
	 * 
	 * @param a First floating-point number.
	 * @param b Second floating-point number.
	 * @return The result of a minus b.
	 */
	return a - b;
}

/**
 * @brief Subtracts two double-precision floating-point numbers.
 * 
 * @param a First double-precision number.
 * @param b Second double-precision number.
 * @return The result of a minus b.
 */
double DoubleSubtract(double a, double b) {
	/**
	 * @brief Subtracts two double-precision floating-point numbers.
	 * 
	 * @param a First double-precision number.
	 * @param b Second double-precision number.
	 * @return The result of a minus b.
	 */
	return a - b;
}

/**
 * @brief Multiplies two integers.
 * 
 * @param a First integer.
 * @param b Second integer.
 * @return The product of a and b.
 */
int IntMultiply(int a, int b) {
	/**
	 * @brief Multiplies two integers.
	 * 
	 * @param a First integer.
	 * @param b Second integer.
	 * @return The product of a and b.
	 */
	return a * b;
}

/**
 * @brief Multiplies two floating-point numbers.
 * 
 * @param a First floating-point number.
 * @param b Second floating-point number.
 * @return The product of a and b.
 */
float FloatMultiply(float a, float b) {
	/**
	 * @brief Multiplies two floating-point numbers.
	 * 
	 * @param a First floating-point number.
	 * @param b Second floating-point number.
	 * @return The product of a and b.
	 */
	return a * b;
}

/**
 * @brief Multiplies two double-precision floating-point numbers.
 * 
 * @param a First double-precision number.
 * @param b Second double-precision number.
 * @return The product of a and b.
 */
double DoubleMultiply(double a, double b) {
	/**
	 * @brief Multiplies two double-precision floating-point numbers.
	 * 
	 * @param a First double-precision number.
	 * @param b Second double-precision number.
	 * @return The product of a and b.
	 */
	return a * b;
}

/**
 * @brief Divides two integers.
 * 
 * @param a Dividend.
 * @param b Divisor.
 * @return The quotient of a divided by b.
 */
int IntDivide(int a, int b) {
	/**
	 * @brief Divides two integers.
	 * 
	 * @param a Dividend.
	 * @param b Divisor.
	 * @return The quotient of a divided by b.
	 */
	if (b == 0) {
		return 0; // Handle division by zero
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
float FloatDivide(float a, float b) {
	/**
	 * @brief Divides two floating-point numbers.
	 * 
	 * @param a Dividend.
	 * @param b Divisor.
	 * @return The quotient of a divided by b.
	 */
	if (b == 0.0f) {
		return 0.0f; // Handle division by zero
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
double DoubleDivide(double a, double b) {
	/**
	 * @brief Divides two double-precision floating-point numbers.
	 * 
	 * @param a Dividend.
	 * @param b Divisor.
	 * @return The quotient of a divided by b.
	 */
	if (b == 0.0) {
		return 0.0; // Handle division by zero
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
int IntModulus(int a, int b) {
	if (b == 0) {
		return 0; // Handle division by zero
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
float FloatModulus(float a, float b) {
	if (b == 0.0f) {
		return 0.0f; // Handle division by zero
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
double DoubleModulus(double a, double b) {
	if (b == 0.0) {
		return 0.0; // Handle division by zero
	}
	return fmod(a, b);
}