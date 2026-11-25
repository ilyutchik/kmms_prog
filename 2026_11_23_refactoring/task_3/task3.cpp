#include <cstdlib>
#include <ctime>
#include <iostream>

namespace iv {

void fill_random(int* arr, const int size);
void print(const int* arr, const int size);
void reverse(int* arr, const int size);

}

int main()
{
    const int size = 20;
    int arr[size];

    std::srand(static_cast<unsigned int>(std::time(nullptr)));

    iv::fill_random(arr, size);
    iv::print(arr, size);
    iv::reverse(arr, size);
    iv::print(arr, size);

    return 0;
}

namespace iv {

void fill_random(int* arr, const int size)
{
    for (int i = 0; i < size; i++) {
        arr[i] = std::rand() % 20;
    }
}

void print(const int* arr, const int size)
{
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << ' ';
    }
    std::cout << '\n';
}

void reverse(int* arr, const int size)
{
    for (int i = 0; i < size / 2; i++) {
        const int tmp = arr[i];
        arr[i] = arr[size - 1 - i];
        arr[size - 1 - i] = tmp;
    }
}

} 
