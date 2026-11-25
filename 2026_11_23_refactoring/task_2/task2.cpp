#include <iostream>

namespace iv {

bool is_increasing(const int* arr, const int size);
void read_arr(int* arr, const int size);

}

int main()
{
    const int size = 10;
    int arr[size];

    iv::read_arr(arr, size);

    if (iv::is_increasing(arr, size)) {
        std::cout << "Последовательность возрастающая\n";
    } else {
        std::cout << "Последовательность не возрастающая\n";
    }

    return 0;
}

namespace iv {

bool is_increasing(const int* arr, const int size)
{
    for (int i = 1; i < size; i++) {
        if (arr[i - 1] >= arr[i]) {
            return false;
        }
    }
    return true;
}

void read_arr(int* arr, const int size)
{
    for (int i = 0; i < size; i++) {
        std::cout << "Введите " << i+1 << "-й элемент: ";
        std::cin >> arr[i];
    }
}

}



