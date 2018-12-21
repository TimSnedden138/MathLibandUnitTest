#include"mathutil.h"
int seed = 542365;
int sum(int a, int b)
{
	return a + b;
}
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

unsigned long long int pow(int base, int power)
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

bool assert(const char * testName, bool expression)
{
	if (expression == true) {
		std::cout << "[PASS BOI] " << testName << std::endl;
		return true;
	}
	else if (expression == false) {
		std::cout << "[FAIL BOI] " << testName << std::endl;
		return false;
	}
}

bool assert(const char * testName, int expected, int actual)
{
	if (actual == expected) {
		std::cout << "[PASS BOI] " << testName << std::endl;
		return true;
	}
	else{
		std::cout << "[FAIL BOI] " << testName << std::endl;
		return false;
	}
}

bool assert(const char * testName, float expected, float actual, float tolerance)
{
	if (expected >= (actual - tolerance) && expected <= (actual + tolerance)) {
		std::cout << "[PASS BOI] " << testName << std::endl;
		return true;
	}
	else{
		std::cout << "[FAIL BOI] " << testName << std::endl;
		return false;
	}
}

bool assert(const char * testName, mat3 expected, mat3 actual)
{
	if (expected == actual) {
		std::cout << "[PASS BOI] " << testName << std::endl;
		return true;
	}
	std::cout << "[FAIL BOI] " << testName << std::endl;
	return false;
}
int rand(int min, int max)
{
	int rSeed = seed * seed;
	std::string sSeed = std::to_string(rSeed);
	std::string nrSeed = "111111";

	for (int i = 1; i < 7; i++) {
		nrSeed[i] = sSeed[i];
	}
	seed = std::stoi(nrSeed);
	int n = max - min + 1;
	return seed % n;
}

float randDecimal(float min, float max)
{
	int rSeed = seed * seed;
	std::string sSeed = std::to_string(rSeed);
	std::string nrSeed = "000000";
	for (int i = 1; i < 7; i++) {
		nrSeed[i] = sSeed[i];
	}
	float r = max - min + 1;
	float m = fmod(seed,r);
	if (m > max) {
		return max;							
	}
	if (m < min) {
		return min;
	}
	return m;
}

void seedRand(int seedValue)
{
	seed = seedValue;
}

int getRandSeed()
{
	return seed;
}
template <typename T>
T lerp(const T& a, const T& b, float t)
{
	return a * (1 - t) + b * t;
}
