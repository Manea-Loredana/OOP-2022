#define _CRT_SECURE_NO_WARNINGS
#include "Math.h"
#include <iostream>
#include "Math.h"
#include <cstdarg>

int Math::Add(int a, int b)
{
	return( a + b);
}

int Math::Add(int x, int y, int z)
{
	return( x + y + z);
}

double Math::Add(double a, double b)
{
	return( a + b);

}

double Math::Add(double x, double y, double z)
{
	return( x + y + z);
}

int Math::Mul(int a , int b)
{
	return( a * b);
}

int Math::Mul(int x, int y, int z)
{
	return( x * y * z);
}

double Math::Mul(double a , double b)
{
	return( a * b);
}

double Math::Mul(double x, double y, double z)
{
	return( x * y * z);
}

int Math::Add(int count, ...)
{
	int s = 0;
	va_list lista;
	va_start(lista, count);
	for (int i = 0; i < count; i++)
		s = s + va_arg(lista, int);
	va_end(lista);
	return s;
}

char* Math::Add(const char* x, const char* y)
{
	if (x == nullptr || y == nullptr) {
		return nullptr;
	}
	else
	{
		char* ptr = new char(strlen(x) + strlen(y) + 1);
		strcpy(ptr, x);
		strcat(ptr, y);
		return ptr;
		delete[] ptr;
		
	}

}
