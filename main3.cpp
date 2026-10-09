#include <iostream>

using namespace std;

int main() {

    int level_difficulty;

    do {
        cout << "Введите уровень сложности (от 1 до 3): ";
        cin >> level_difficulty;

        if (level_difficulty < 1 || level_difficulty > 3) {
            cout << "\nУровень введен неверно! Попытайтесь снова!\n\n";
        }

    } while (level_difficulty < 1 || level_difficulty > 3);

    int lives = 0;

    switch (level_difficulty) {
        case 1:
            lives = 5;
            break;
        case 2:
            lives = 3;
            break;
        case 3:
            lives = 1;
            break;
    }

    cout << "Количество жизней: " << lives << endl;


}
