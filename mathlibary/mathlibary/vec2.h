#pragma once
struct vec2
{
	float x, y;

	vec2();
	vec2(float x, float y);
	// Adding Vectors
	vec2 operator+(const vec2 &rhs) const;
	// Subtracting Vectors
	vec2 operator-(const vec2 &rhs) const;
	vec2 &operator+=(const vec2 &rhs);
	vec2 &operator-=(const vec2 &rhs);
	bool operator==(const vec2 &rhs) const;
	bool operator!=(const vec2 &rhs) const;
};