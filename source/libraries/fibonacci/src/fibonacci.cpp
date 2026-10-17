#include "fibonacci.hpp"


int fibonacci_recursive(const int value)
{
    if (value <= 1)
    {
        return value;
    }
    else
    {
        return fibonacci_recursive(value - 1) + fibonacci_recursive(value - 2);
    }
}
int fibonacci_iterative(const int value)
{
    int a = 0, b = 1;

    for (int i = 0; i < value; ++i)
    {
        int c = a; 
        a = b;
        b = c + b;
    }
    return a;
}