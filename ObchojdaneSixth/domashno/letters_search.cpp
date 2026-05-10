#include <iostream>

int main() {

    std::cout << "Въведете броя на символите в масива: ";
    int n;
    std::cin >> n;
    
    std::cout << "Въведи име: ";
    char* name = new char[n + 1];
    std::cin >> name;
    
    std::cout << "Въведи буква: ";
    char x;
    std::cin >> x;

    name[n] = x;
    
    int proverka = 0;
    int i = 0;
    while (name[i] != x) {
        proverka = proverka + 1;
        i = i + 1;
    }
    proverka++;

    if (i < n) {
        std::cout << "Буква " << name[i] << " е намерена на позиция " << i + 1 << std::endl;
    }
    else {
        std::cout << "Буква " << name[i] << " не е намерена!" << std::endl;   
    }

    std::cout << "Извършени проверки: " << proverka;

    if(name != nullptr) {
        delete[] name; 
        name = nullptr;
    }

    return 0;
}