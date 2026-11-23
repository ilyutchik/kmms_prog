#include "task1.hpp"

#include <cstdlib>
#include <ctime>
#include <iostream>

namespace iv {

void fill_random(float* array, int size)
{
    for (int i = 0; i < size; i++) {
        array[i] = std::rand() % 10;
    }
}

float average(const float* array, int size)
{
    float sum = 0.0f;
    for (int i = 0; i < size; i++) {
        sum += array[i];
    }
    return sum / size;
}

void print_with_average(const float* array, int size)
{
    for (int i = 0; i < size; i++) {
        std::cout << array[i] << ' ';
    }
    std::cout << '\n';
    std::cout << "Среднее значение = " << average(array, size) << '\n';
}

}

int main()
{
    const int size = 10;
    float a[size], b[size], c[size];

    std::srand(static_cast<unsigned int>(std::time(nullptr)));

    std::cout << "Первая последовательность\n";
    iv::fill_random(a, size);
    iv::print_with_average(a, size);

    std::cout << "Вторая последовательность\n";
    iv::fill_random(b, size);
    iv::print_with_average(b, size);

    std::cout << "Третья последовательность\n";
    iv::fill_random(c, size);
    iv::print_with_average(c, size);

    return 0;
}
