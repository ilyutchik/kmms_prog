#include <cstdlib>
#include <ctime>
#include <iostream>

namespace iv 
{
    void fill_random(int* array, const int size);
    double average (const int* array, const int size);
    void print_with_average(const int* array, const int size);    
}

int main()
{
    const int size = 10;

    std::srand(static_cast<unsigned int>(std::time(nullptr)));

    for (int i = 0; i < 3; i++) {
	int arr[size];
	std::cout << "Последовательность номер " << i+1 << '\n';
	iv::fill_random(arr, size);
	iv::print_with_average(arr, size);
    }

    return 0;
}

namespace iv {

void fill_random(int* arr, const int size)
{
    for (int i = 0; i < size; i++) {
        arr[i] = std::rand() % 10;
    }
}

double average(const int* arr, const int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return double(sum) / size;
}

void print_with_average(const int* arr, const int size)
{
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << ' ';
    }
    std::cout << '\n';
    std::cout << "Среднее значение = " << average(arr, size) << '\n';
}

}
