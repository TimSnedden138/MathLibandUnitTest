#include "vec2.h"

vec2::vec2()
{
}

vec2::vec2(float x, float y)
{
	this->x = x;
	this->y = y;
}

vec2 vec2::operator+(const vec2 & rhs) const
{
	vec2 v2;
	v2.x = x + rhs.x;
	v2.y = y + rhs.y;
	
	return v2;
}

vec2 vec2::operator-(const vec2 & rhs) const
{
	vec2 v2;
	v2.x = x - rhs.x;
	v2.y = y - rhs.y;

	return v2;
}

vec2 & vec2::operator+=(const vec2 & rhs)
{
	
	x += rhs.x;
	y += rhs.y;

	return *this;
}

vec2 & vec2::operator-=(const vec2 & rhs)
{
	
	x -= rhs.x;
	y -= rhs.y;

	return *this;
}

bool vec2::operator==(const vec2 & rhs) const
{
	return false;
}

bool vec2::operator!=(const vec2 & rhs) const
{
	return false;
}
