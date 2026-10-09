#include <iostream>

using namespace std;

int main() {

    int points_sum = 0;
    int rounds_sum = 0;
    int points = 0;

    cout << "Введите очки за раунд: ";

    while (points != -1) {

        cin >> points;

        if (points < 0) {
            continue;
        }


        points_sum += points;


        if (points >= 500) {
            rounds_sum += 1;
        }
    }

    cout << "Общие очки: " << points_sum << "\n" << endl;

    cout << "Супер успешные раунды: " << rounds_sum;

}