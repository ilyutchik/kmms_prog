#include "task3.hpp"

#include <cstdlib>
#include <ctime>
#include <iostream>

namespace iv {

void fill_random(int* array, int size)
{
    for (int i = 0; i < size; i++) {
        array[i] = std::rand() % 20;
    }
}

void reverse(int* array, int size)
{
    for (int i = 0; i < size / 2; i++) {
        const int tmp = array[i];
        array[i] = array[size - 1 - i];
        array[size - 1 - i] = tmp;
    }
}

void print(const int* array, int size)
{
    for (int i = 0; i < size; i++) {
        std::cout << array[i] << ' ';
    }
    std::cout << '\n';
}

} 

int main()
{
    const int size = 20;
    int a[size];

    std::srand(static_cast<unsigned int>(std::time(nullptr)));

    iv::fill_random(a, size);
    iv::print(a, size);
    iv::reverse(a, size);
    iv::print(a, size);

    return 0;
}
