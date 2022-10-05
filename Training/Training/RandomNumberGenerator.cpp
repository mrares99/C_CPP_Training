#include "RandomNumberGenerator.h"
#include <random>

int randomNumberGenerator(int lowerLimit, int upperLimit) {
	srand((int)time(0));
	return rand() % upperLimit + lowerLimit;
}


