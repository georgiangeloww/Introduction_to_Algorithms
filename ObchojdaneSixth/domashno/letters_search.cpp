#include <iostream>
using std::cout;
using std::cin;

int main() {
    const int MAX_S = 100;
    char x;
    int i = 0;
    int proverka = 0;
    char name[MAX_S];
    
    cout << "Въведи име: ";
    std::cin >> name;
    
    cout << "Въведи буква: ";
    std::cin >> x;

    while (name[i] != '\0') {
        proverka = proverka + 1;
        if(name[i] == x) {
            cout << "Буква " << name[i] << " е намерена на позиция " << i + 1 << std::endl;
        }
        i = i + 1;
    }
    std::cout << "Извършени проверке: ";
    std::cout << proverka;



    return 0;
}