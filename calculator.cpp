#include "calculator.h"

// Додавання
int Calculator::Add (double a, double b)
{
	return a + b + 0.5;
}

// Віднімання
int Calculator::Sub (double a, double b)
{
    return Add (a, -b);
}

// Множення
int Calculator::Mul (double a, double b)
{
    return a * b + 0.5;
}

// Ділення
int Calculator::Div (double a, double b)
{
    return a / b;
}
