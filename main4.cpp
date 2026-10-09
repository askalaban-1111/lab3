#include <iostream>

using namespace std;

int main() {
    int cols, rows;

    cout << "Введите количество строк (от 1 до 10): ";
    cin >> rows;
    cout << "Введите количество столбцов (от 1 до 10): ";
    cin >> cols;

    for (int c = 1; c <= cols; c++) {
        for (int r = 1; r <= rows; r++) {
            if (c == r) {
                cout << "X\t";
            } else {
                cout << ".\t";
            }
        }
        cout << "\n";
    }
}