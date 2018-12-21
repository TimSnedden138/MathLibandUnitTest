#pragma once
#include"vec3.h"
struct mat3
{
	union
	{
		struct
		{
			vec3 xAxis;
			vec3 yAxis;
			vec3 zAxis;
		};
		vec3 axis[3];
		struct
		{
			float m1, m2, m3,
				m4, m5, m6,
				m7, m8, m9;
		};
		struct
		{
			float m[9];
		};
		struct
		{
			float mm[3][3];
		};
	};

	mat3();
	mat3(float *ptr);
	mat3(float mm1, float mm2, float mm3,
		float mm4, float mm5, float mm6,
		float mm7, float mm8, float mm9);
	void transpond();
	mat3 getTranspose() const;
	// implicit operator to convert mat3 into a float array
	operator float *();

	// returns vec3 objects when accessing by subscript operator
	vec3 &operator[](const int index);

	// concatenates two matrices together and returns the result
	mat3  operator*(const mat3 &rhs) const;
	//concatenates and assigns the result to the matrix
	mat3 &operator*=(const mat3 &rhs);

	// returns true if the matrices are equal
	bool operator==(const mat3 &rhs) const;
	// returns true if the matrices are inequal
	bool operator!=(const mat3 &rhs) const;
	// returns a 3x3 identity matrix
    static mat3 identity();

    // updates the matrix elements with the given values
    void set(float mm1, float mm2, float mm3,
             float mm4, float mm5, float mm6,
             float mm7, float mm8, float mm9);

    // updates the matrix elements with the given values from the given array
    void set(float *ptr);

};