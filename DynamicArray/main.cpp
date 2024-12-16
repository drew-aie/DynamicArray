#include <iostream>
#include "DynamicArray.h"

int main()
{
    class Actor {};
    class Component {};

    DynamicArray<int> x;
    DynamicArray<int> y;

    y = x;

    return 0;
}