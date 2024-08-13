#include <iostream>

int add(int x, int y) // integer version
{
    return x + y;
}

double add(double x, double y) // floating point version
{
    return x + y;
}

int main()
{
    std::cout << add(1.5, 2.0) << "\n";
    return 0;
}