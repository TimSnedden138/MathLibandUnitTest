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
	if ((x >= (rhs.x - FLT_EPSILON) and x <= (rhs.x + FLT_EPSILON)) and
		(y >= (rhs.y - FLT_EPSILON) and y <= (rhs.y + FLT_EPSILON))) {
		return true;
	}
	return false;
}

bool vec2::operator!=(const vec2 & rhs) const
{
	if ((x >= (rhs.x - FLT_EPSILON) and x <= (rhs.x + FLT_EPSILON)) and
		(y >= (rhs.y - FLT_EPSILON) and y <= (rhs.y + FLT_EPSILON))) {
		return false;
	}
	return true;
}

vec2 vec2::operator-() const
{
	vec2 neg2;
	neg2.x = -x;
	neg2.y = -y;
	return neg2;
}

float vec2::magnitude() const
{
	float magnitude;
	magnitude = sqrt(pow(x - x, 2) + pow(y - y, 2));
	return magnitude;
}

vec2 & vec2::normalize()
{
	if (magnitude() == 0)
	{
		return *this;
	}
	else
	{
		*this *= magnitude();
		return *this;
	}
}

vec2 vec2::getNormalized() const
{
	vec2 n;
	n.x = x;
	n.y = y;
	if (magnitude() == 0)
	{
		return n;
	}
	n.x /= magnitude();
	n.y /= magnitude();

	return n;

}

vec2 & vec2::scale(const vec2 & rhs)
{
	x *= rhs.x;
	y *= rhs.y;

	return *this;

}

vec2 vec2::getScaled(const vec2 & rhs) const
{
	return rhs;
}

vec2 vec2::operator*(const float rhs) const
{
	vec2 v2;
	v2.x = x * rhs;
	v2.y = y * rhs;
	return v2;
}

vec2 & vec2::operator*=(const float rhs)
{
	x *= rhs;
	y *= rhs;
	return *this;
}

vec2 & vec2::operator/=(const float rhs)
{
	x /= rhs;
	y /= rhs;
	return *this;
}

float vec2::dot(const vec2 & rhs) const
{
	vec2 temp;
	temp.x = x * rhs.x;
	temp.y = y * rhs.y;
	float dotProduct = temp.x + temp.y;
	return dotProduct;
}

vec2 operator*(const float lhs, const vec2 & rhs)
{
	vec2 bo;
	bo.x = lhs * rhs.x;
	bo.y = lhs * rhs.y;
	return bo;
}
