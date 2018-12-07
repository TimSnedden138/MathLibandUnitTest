#pragma once
#include<iostream>
//Returns the smaller of the two values
int min(int valA, int valB);
//Returns the larger of the two values
int max(int valA, int valB);
//Returns a value no smaller than min and no larger than max
int clamp(int val, int min, int max);
//Multiply this with a angle measure expressed in radians to get its equivalent in degrees.
double RAD_TO_DEG(float rad);
//Multiply this with a angle measure expressed in degrees to get its equivalent in radians.
double DEG_TO_RAD(float deg);
//Defined as PI or π.
const double PI =3.141592653589793238;
//Returns the absolute value of val.
int abs(int val);
//Returns base to the power of exp (i.e. basepower).
int pow(int base, int power);
//Returns true if the value is a power of two, otherwise returns false.
bool isPowerOfTwo(int val);
//Returns the next power of two after the given value.
int nextPowerOfTwo(int val);
//Moves the current value towards the target value. The maximum change should not exceed maxDelta.
float moveTowards(float current, float target, float maxDelta);