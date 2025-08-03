#include "ArithmeticOperations.h"

int IntAdd(const int a, const int b){
	return a + b;
}

int IntSubtract(const int a, const int b){
	return a - b;
}

int IntMultiply(const int a, const int b){
	return a * b;
}

int IntDivide(const int a, const int b){
	if (b == 0) {
		return 0;
	}
	return a / b;
}

int IntModulus(const int a, const int b){
	if (b == 0) {
		return 0;
	}
	return a % b;
}

float FloatAdd(const float a, const float b){
	return a + b;
}

float FloatSubtract(const float a, const float b){
	return a - b;
}

float FloatMultiply(const float a, const float b){
	return a * b;
}

float FloatDivide(const float a, const float b){
	if (b == 0.0f) {
		return 0.0f;
	}
	return a / b;
}

float FloatModulus(const float a, const float b){
	if (b == 0.0f) {
		return 0.0f;
	}
	return fmodf(a, b);
}

double DoubleAdd(const double a, const double b){
	return a + b;
}

double DoubleSubtract(const double a, const double b){
	return a - b;
}

double DoubleMultiply(const double a, const double b){
	return a * b;
}

double DoubleDivide(const double a, const double b){
	if (b == 0.0) {
		return 0.0;
	}
	return a / b;
}

double DoubleModulus(const double a, const double b){
	if (b == 0.0) {
		return 0.0;
	}
	return fmod(a, b);
}