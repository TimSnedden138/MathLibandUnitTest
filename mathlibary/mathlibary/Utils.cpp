#include"mathutil.h"
int min(int valA, int valB) {

	return valA < valB ? valA : valB;
}
int max(int valA, int valB) {

	return valA > valB ? valA : valB;
}
int clamp(int val, int min, int max) {
	if (val > min & val < max) {
		return val;
	}
	else if (val > min & val > max) {
		return max;
	}
	else if (val < min & val < max) {
		return min;
	}
}
double RAD_TO_DEG(float rad)
{
	double deg = (rad / (PI / 180));

	return deg;
}

double DEG_TO_RAD(float deg)
{
	double rad = (deg * (PI / 180));

	return rad;
}

int abs(int val)
{
	if (val >= 0) {
		return val;
	}
	if (val <= 0) {
		return -val;
	}
}

int pow(int base, int power)
{
	int start = base;
	for (int i = 1; i < power; i++) {
		base = base * start;
	}
	return base;
}

bool isPowerOfTwo(int val)
{
	if (val == 0)
		return 0;
	
	while (val != 1)
	{
		//checks whether a number is divisible by 2
		if (val % 2 != 0)
			return 0;
		val /= 2;
	}
	return 1;
}

int nextPowerOfTwo(int val)
{
	if (isPowerOfTwo(val)) {
		return val * 2;
}
	return 0;

}

float moveTowards(float current, float target, float maxDelta)
{
	return 0.0f;
}
