#include <iostream>

int main()
{
    int* ptr{ nullptr }; // Create a null pointer
    std::cout << *ptr << '\n'; // Dereference the null pointer

    return 0;
}