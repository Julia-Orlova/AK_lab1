#include "calculator.h"

int Calculator::Add (double a, double b)
{
 HEAD
	return a + b + 0.5;
}

int Calculator::Sub (double a, double b)
{
	return Add (a, -b);

 HEAD
    return a + b;

	return a + b + 0.5;
 4ad40a3 (fix truncation error)
 78f9c6e (fix truncation error)
}

int Calculator::Sub (double a, double b)
{
    return Add (a, -b);
}
