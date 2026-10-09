#include <iostream>

using namespace std;

int main() {
    int n;
    int total_sum = 0;
    int level_points = 0;

    cout << "Введите уровень (от 1 до 15): ";
    cin >> n;

    if (n < 1 || n > 15) {
        cout << "Уровень введен неверно!" << endl;
        return 1;
    }

    for (int i = 1; i <= n; i++) {

        total_sum += i * 100;

        level_points = i * 100;

        cout << "Порог " << i << " уровня: " << level_points << " очков\n" << endl;


    }

    cout << "Сумма порогов: " << total_sum << " очков" << endl;
}