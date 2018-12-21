#include "Matrices.h"

mat3::mat3()
{
}

mat3::mat3(float * ptr)
{
	for (int i = 0; i < 9; i++) {

		m[i] = ptr[i];
		for (int j = 0; j < 3; j++) {

		}

	}
}

mat3::mat3(float mm1, float mm2, float mm3, float mm4, float mm5, float mm6, float mm7, float mm8, float mm9)
{
	m1 = mm1;
	m2 = mm2;
	m3 = mm3;
	m4 = mm4;
	m5 = mm5;
	m6 = mm6;
	m7 = mm7;
	m8 = mm8;
	m9 = mm9;
}

void mat3::transpond()
{
	//for (int i = 0; i < 9; i++) {
	//	float temp;
	//	temp = m[i];
	//	m[i] = m[i * 2];
	//	m[i * 3] = temp;
	//}
	//float temp;
	//temp = m[5];
	//m[5] = m[7];
	//m[7] = temp;
	float temp1;
	temp1 = m[1];
	m[1] = m[3];
	m[3] = temp1;
	float temp2;
	temp2 = m[2];
	m[2] = m[6];
	m[6] = temp2;
	float temp3;
	temp3 = m[5];
	m[5] = m[7];
	m[7] = temp3;
}

mat3 mat3::getTranspose() const
{
	mat3 alpha;
	for (int i = 0; i < 9; i++) {
		alpha.m[i] = m[i];
	}
	float temp;
	temp = alpha.m[1];
	alpha.m[1] = alpha.m[3];
	alpha.m[3] = temp;
	temp = alpha.m[2];
	alpha.m[2] = alpha.m[6];
	alpha.m[6] = temp;
	temp = alpha.m[5];
	alpha.m[5] = alpha.m[7];
	alpha.m[7] = temp;

	return alpha;
}

mat3::operator float*()
{
	return m;
}

vec3 & mat3::operator[](const int index)
{
	return axis[index];
}

mat3 mat3::operator*(const mat3 & rhs) const
{
	mat3 tA;
	mat3 tB = rhs.getTranspose();
	tA.m[0] = xAxis.dot(tB.xAxis);
	tA.m[1] = xAxis.dot(tB.xAxis);
	tA.m[2] = xAxis.dot(tB.xAxis);
	tA.m[3] = xAxis.dot(tB.yAxis);
	tA.m[4] = xAxis.dot(tB.yAxis);
	tA.m[5] = xAxis.dot(tB.yAxis);
	tA.m[6] = xAxis.dot(tB.zAxis);
	tA.m[7] = xAxis.dot(tB.zAxis);
	tA.m[8] = xAxis.dot(tB.zAxis);
	return tA;
}

mat3 & mat3::operator*=(const mat3 & rhs)
{
	(*this) = (*this) *rhs;
	return *this;
}

bool mat3::operator==(const mat3 & rhs) const
{
	for(int i = 0; i < 9; i++)
	{
		m[i] == rhs.m[i];
		if(m[i] != rhs.m[i]){
			return false;
		}
	}
	return true;
}

bool mat3::operator!=(const mat3 & rhs) const
{
	for (int i = 0; i < 9; i++)
	{
		m[i] == rhs.m[i];
		if (m[i] != rhs.m[i]) {
			return true;
		}
	}
	return false;
}

mat3 mat3::identity()
{
	mat3 r;
	mat3 e;
	for (int i = 0; i < 9; i++) {
		r.m[i] = 0;
		if (i == 0 || i == 5 || i == 9) {
			r.m[i] = 1;

		}
		else {
			r.m[i] = 0;
		}
	}
	e *= r;
	return e;
}

void mat3::set(float mm1, float mm2, float mm3,	float mm4, float mm5, float mm6,float mm7, float mm8, float mm9)
{
	m1 = mm1;
	m2 = mm2;
	m3 = mm3;
	m4 = mm4;
	m5 = mm5;
	m6 = mm6;
	m7 = mm7;
	m8 = mm8;
	m9 = mm9;
}

void mat3::set(float * ptr)
{
	for (int i = 0; i < 9; i++) {

		m[i] = ptr[i];
		for (int j = 0; j < 3; j++) {

		}
	}
}
