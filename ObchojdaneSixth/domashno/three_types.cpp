#include <iostream>
#include <chrono>
#include <climits>
#include <stdlib.h>

bool linear_search(char search, char* arr, const int size);
bool sentinel_search(char search, char* arr, const int size);
bool binary_search(int search, int* numArr, const int size);

int main() {
    srand(time(0));
    const int n = 1000;
    char randArr[n + 1];
    
    for (int i = 1; i < n + 1; i++) {
        char randSyms = rand() % 101;
        randArr[i] = randSyms;
    }

    int numArr[n + 1];
    for (int i = 1; i < n + 1; i++) {
        numArr[i] = i;
    }
   
    
    for(int i = 0; i < 5; i++) {
        char search;
        std::cin >> search;

        float c0 = clock();

        bool isFoundLin = linear_search(search, randArr, n);
        for (int i = 0; i < 10000000; i++) {
            isFoundLin = linear_search(search, randArr, n);
        }

        // if (isFoundLin) {
        //     std::cout << "Намерена е търсената стойност " << search << std::endl;
        // }
        // else {
        //     std::cout << "НЕ е намерена е търсената стойност " << search << std::endl;
        // }
        float c1 = clock();

        std::cout << "elapsed clock time linear_search: " << (c1 - c0) / CLOCKS_PER_SEC << std::endl;


        float c2 = clock(); 
        
        bool isFoundSen = sentinel_search(search, randArr, n);
        for (int i = 0; i < 10000000; i++) {
            isFoundSen = sentinel_search(search, randArr, n);
        }
        
        // if (isFoundSen) {
        //     std::cout << "Намерена е търсената стойност " << search << std::endl;
        // }
        // else {
        //     std::cout << "НЕ е намерена е търсената стойност " << search << std::endl;
        // }
        float c3 = clock();
        
        std::cout << "elapsed clock time sentinel_search: " << (c3 - c2) / CLOCKS_PER_SEC << std::endl;

        float c4 = clock();

        bool isFoundBin = binary_search(search, numArr, n + 1);
        for (int i = 0; i < 10000000; i++) {
            isFoundBin = binary_search(search, numArr, n);
        }
        
        // if (isFoundBin) {
        //     std::cout << "Намерена е търсената стойност " << search << std::endl;
        // }
        // else {
        //     std::cout << "НЕ е намерена е търсената стойност " << search << std::endl;
        // }
        float c5 = clock();
        
        std::cout << "elapsed clock time binary_search: " << (c5 - c4) / CLOCKS_PER_SEC << std::endl;
        std::cout << std::endl;
    }
    
   
    

   
    return 0;
}

bool linear_search(char search, char* arr, const int size) {
    for (int i = 1; i < size + 1; i++) {
        if(arr[i] == search) {
            return true;
        }
    }
    return false;
}

bool sentinel_search(char search, char* arr, const int size) {
    arr[size] = search;
    int i = 0;
    while (arr[i] != search) {
        i++;
    }

    if(i < size) {
        return true;
    }
    else {
        return false;
    }
}

bool binary_search(int search, int* arr, const int size) {
    int iBeg = 0;
    int iEnd = size - 1;

    while(iBeg <= iEnd) {
        int iMid = (iBeg + iEnd) / 2;
        if(search < arr[iMid]) {
            iEnd = iMid - 1;
        }
        else if (search > arr[iMid]) {
            iBeg = iMid + 1;
        }
        else {
            return true;
        }
    }
    return false;
}