#include<iostream>
#include"mathutil.h"
#include"vec2.h"
#include"vec3.h"
#include"vec4.h"
#include"Matrices.h"
int main() 
{
	//vector addition
	vec2 v2a(13.5f, -48.23f), v2b(5, 3.99f), v2c;
	v2c = v2a + v2b;
	std::cout << v2c.x << "," << v2c.y << std::endl;
	vec3 v3a(13.5f, -48.23f, 862), v3b(5, 3.99f, -12), v3c;
	v3c = v3a + v3b;
	vec4 v4a(13.5f, -48.23f, 862, 0), v4b(5, 3.99f, -12, 1), v4c;
	v4c = v4a + v4b;

	assert("vec2 addition", v2c, vec2(18.5f, -44.24f));
	assert("vec3 addition", v3c, vec3(18.5f, -44.24f, 850));
	assert("vec4 addition", v4c, vec4(18.5f, -44.24f, 850, 1));

	// vector subtraction
	v2a = vec2(13.5f, -48.23f);
	v2b = vec2(5, 3.99f);
	v2c = v2a - v2b;
	v3a = vec3(13.5f, -48.23f, 862);
	v3b = vec3(5, 3.99f, -12);
	v3c = v3a - v3b;
	v4a = vec4(13.5f, -48.23f, 862, 0);
	v4b = vec4(5, 3.99f, -12, 1);
	v4c = v4a - v4b;

	assert("vec2 subtraction", v2c, vec2(8.5f, -52.22f));
	assert("vec3 subtraction", v3c, vec3(8.5f, -52.22f, 874));
	assert("vec4 subtraction", v4c, vec4(8.5f, -52.22f, 874, -1));

	// vector post-scale
	v2a = vec2(13.5f, -48.23f);
	v2c = v2a * 2.482f;
	v3a = vec3(13.5f, -48.23f, 862);
	v3c = v3a * 0.256f;
	v4a = vec4(13.5f, -48.23f, 862, 0);
	v4c = v4a * 4.89f;

	assert("vec2 post-scale", v2c, vec2(33.5069999695f, -119.706863403f));
	assert("vec3 post-scale", v3c, vec3(3.45600008965f, -12.3468809128f, 220.672012329f));
	assert("vec4 post-scale", v4c, vec4(66.0149993896f, -235.844696045f, 4215.1796875f, 0));

	// vector pre-scale
	v2a = vec2(13.5f, -48.23f);
	v2c = 2.482f * v2a;
	v3a = vec3(13.5f, -48.23f, 862);
	v3c = 0.256f * v3a;
	v4a = vec4(13.5f, -48.23f, 862, 0);
	v4c = 4.89f * v4a;

	assert("vec2 pre-scale", v2c, vec2(33.5069999695f, -119.706863403f));
	assert("vec3 pre-scale", v3c, vec3(3.45600008965f, -12.3468809128f, 220.672012329f));
	assert("vec4 pre-scale", v4c, vec4(66.0149993896f, -235.844696045f, 4215.1796875f, 0));

	// vector dot product
	v2a = vec2(13.5f, -48.23f);
	v2b = vec2(5, 3.99f);
	float dot2 = v2a.dot(v2b);
	v3a = vec3(13.5f, -48.23f, 862);
	v3b = vec3(5, 3.99f, -12);
	float dot3 = v3a.dot(v3b);
	v4a = vec4(13.5f, -48.23f, 862, 0);
	v4b = vec4(5, 3.99f, -12, 1);
	float dot4 = v4a.dot(v4b);

	assert("vec2 dot", dot2, -124.937698364f);
	assert("vec3 dot", dot3, -10468.9375f);
	assert("vec4 dot", dot4, -10468.9375f);

	// vector cross product
	v3a = vec3(13.5f, -48.23f, 862);
	v3b = vec3(5, 3.99f, -12);
	v3c = v3a.cross(v3b);
	v4a = vec4(13.5f, -48.23f, 862, 0);
	v4b = vec4(5, 3.99f, -12, 1);
	v4c = v4a.cross(v4b);

	assert("vec3 cross", v3c, vec3(-2860.62011719f, 4472.00000000f, 295.01498413f));
	assert("vec4 cross", v4c, vec4(-2860.62011719f, 4472.00000000f, 295.01498413f, 0));

	// vector magnitude
	v2a = vec2(13.5f, -48.23f);
	float mag2 = v2a.magnitude();
	v3a = vec3(13.5f, -48.23f, 862);
	float mag3 = v3a.magnitude();
	v4a = vec4(13.5f, -48.23f, 862, 0);
	float mag4 = v4a.magnitude();

	assert("vec2 magnitude", mag2, 50.0837593079f);
	assert("vec3 magnitude", mag3, 863.453735352f);
	assert("vec4 magnitude", mag4, 863.453735352f);

	// vector normalize
	v2a = vec2(-13.5f, -48.23f);
	v2a.normalize();
	v3a = vec3(13.5f, -48.23f, 862);
	v3a.normalize();
	v4a = vec4(243, -48.23f, 862, 0);
	v4a.normalize();

	assert(" vec2 normalize", v2a, vec2(-0.269548f, -0.962987f));
	assert("vec3 normalize", v3a, vec3(0.0156349f, -0.0558571f, 0.998316f));
	assert("vec4 normalize", v4a, vec4(0.270935f, -0.0537745f, 0.961094f, 0));
	return 0;

}