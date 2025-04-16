#include "array_utils.h"
#include <iostream>
#include <fstream>
#include <algorithm>
using namespace std;

void reverseArraySegment() {
    int n;
    cout << "�������� 1: ������������ ������� ������.\n";
    cout << "������ ������� �������� ������: ";
    cin >> n;

    float* mas = new float[n];
    cout << "������ �������� ������: ";
    for (int i = 0; i < n; i++) {
        cin >> mas[i];
    }

    int K, L;
    cout << "������ K �� L ��� ������������ (1 ? K < L ? " << n << "): ";
    cin >> K >> L;

    reverse(mas + K - 1, mas + L);

    ofstream outputFile("array_out.txt");
    for (int i = 0; i < n; i++) {
        outputFile << mas[i] << " ";
    }
    outputFile << endl;
    outputFile.close();

    cout << "�������� 1 ��������! ��������� �������� � ���� array_out.txt.\n";
    delete[] mas;
}