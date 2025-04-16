#include "array_utils.h"
#include <iostream>
#include <fstream>
#include <algorithm>
using namespace std;

void reverseArraySegment() {
    int n;
    cout << "Завдання 1: Перестановка частини масиву.\n";
    cout << "Введіть кількість елементів масиву: ";
    cin >> n;

    float* mas = new float[n];
    cout << "Введіть елементи масиву: ";
    for (int i = 0; i < n; i++) {
        cin >> mas[i];
    }

    int K, L;
    cout << "Введіть K та L для перестановки (1 ? K < L ? " << n << "): ";
    cin >> K >> L;

    reverse(mas + K - 1, mas + L);

    ofstream outputFile("array_out.txt");
    for (int i = 0; i < n; i++) {
        outputFile << mas[i] << " ";
    }
    outputFile << endl;
    outputFile.close();

    cout << "Завдання 1 виконано! Результат записано у файл array_out.txt.\n";
    delete[] mas;
}