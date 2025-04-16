#include "matrix_utils.h"
#include <iostream>
#include <fstream>
using namespace std;

void findSimilarColumns() {
    int M, N;
    cout << "Завдання 2: Пошук схожих стовпців у матриці.\n";
    cout << "Введіть кількість рядків та стовпців матриці: ";
    cin >> M >> N;

    int** matrix = new int*[M];
    for (int i = 0; i < M; i++) {
        matrix[i] = new int[N];
    }

    cout << "Введіть елементи матриці:\n";
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            cin >> matrix[i][j];
        }
    }

    int count = 0;
    for (int j = 0; j < N - 1; j++) {
        for (int k = j + 1; k < N; k++) {
            bool isEqual = true;
            for (int i = 0; i < M; i++) {
                if (matrix[i][j] != matrix[i][k]) {
                    isEqual = false;
                    break;
                }
            }
            if (isEqual) count++;
        }
    }

    ofstream outputFile("matr_out.txt");
    outputFile << "Кількість схожих стовпців: " << count << endl;
    outputFile.close();

    cout << "Завдання 2 виконано! Результат записано у файл matr_out.txt.\n";

    for (int i = 0; i < M; i++) {
        delete[] matrix[i];
    }
    delete[] matrix;
}