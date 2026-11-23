#include "task2.hpp"

#include <iostream>

namespace iv {

void read_array(double* array, int size)
{
    for (int i = 0; i < size; i++) {
        std::cout << "Введите " << i+1 << "-й элемент: ";
        std::cin >> array[i];
    }
}

bool is_increasing(const double* array, int size)
{
    for (int i = 1; i < size; i++) {
        if (array[i - 1] >= array[i]) {
            return false;
        }
    }
    return true;
}

}

int main()
{
    const int size = 10;
    double a[size];

    iv::read_array(a, size);

    if (iv::is_increasing(a, size)) {
        std::cout << "Последовательность возрастающая\n";
    } else {
        std::cout << "Последовательность не возрастающая\n";
    }

    return 0;
}
