#include "calculator.h"

// Створення власного виправлення:
// ???
// ***
// +++
// &&&

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

int Calculator::Mul (double a, double b)
{
    return a * b + 0.5;
}
