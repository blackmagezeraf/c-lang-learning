#include "BodyMassIndex.h"

double CalculateBmiByAge(const int age, const float weight, const int height){
	double heightInMeters = height / 100.0f;
	return (double)(weight / (heightInMeters * heightInMeters));
}