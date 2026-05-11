#include <iostream>
const int N = 10;

int main() {
    int arr[N];

    std::cout << "Въведете 10 елементи в масива: ";
    for (int i = 0; i < N; i++) {
        std::cin >> arr[i];
    }

    int flag = 0;
    for (int i = 1; i < N; i++) {
        if (arr[flag] > arr[i]) {
            flag = i;
        }
    }

    std::cout << "Клетката с най-малка стойност е "<< arr[flag] << " на индекс " << flag;
}