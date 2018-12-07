#include<iostream>
#include"mathutil.h"
#include"vec2.h"
int main() 
{
	int Min = min(2,3);
	int Max = max(44,23);
	int Clamp = clamp (47,20,85);
	double rad = RAD_TO_DEG(0.523599);
	double deg = DEG_TO_RAD(30.0f);
	int power = pow(10,6);
	int abspos = abs(10);
	int absneg = abs(-40);
	bool powoftwo = isPowerOfTwo(16);
	vec2 v2aa(13, 5), v2ba(5, 14), v2ca;
	v2ca = v2aa + v2ba;
	vec2 v2as(5, 13), v2bs(14, 5), v2cs;
	v2cs = v2as - v2bs;
	std::cout << "Min:" << Min << std::endl;
	std::cout << "Max:" << Max << std::endl;
	std::cout << "Clamp:" << Clamp << std::endl;
	std::cout << "RAD:" << rad << std::endl;
	std::cout << "DEG:" << deg << std::endl;
	std::cout << "Absolute positive:" << abspos << std::endl;
	std::cout << "Absolute negative:" << absneg << std::endl;
	std::cout << "Power:" << power << std::endl;
	std::cout << "Vector 2 Addition:" << v2ca.x <<","<< v2ca.y << std::endl;
	std::cout << "Vector 2 Subtraction:" << v2cs.x << "," << v2cs.y << std::endl;
	return 0;
}