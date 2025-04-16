#include "matrix_utils.h"
#include <iostream>
#include <fstream>
using namespace std;

void findSimilarColumns() {
    int M, N;
    cout << "�������� 2: ����� ������ �������� � �������.\n";
    cout << "������ ������� ����� �� �������� �������: ";
    cin >> M >> N;

    int** matrix = new int*[M];
    for (int i = 0; i < M; i++) {
        matrix[i] = new int[N];
    }

    cout << "������ �������� �������:\n";
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
    outputFile << "ʳ������ ������ ��������: " << count << endl;
    outputFile.close();

    cout << "�������� 2 ��������! ��������� �������� � ���� matr_out.txt.\n";

    for (int i = 0; i < M; i++) {
        delete[] matrix[i];
    }
    delete[] matrix;
}