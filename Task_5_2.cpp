# include <iostream>

using namespace std;

int main() {
    double x, y;
    bool isIncorrect;
    bool val = (x > y);
    cout << "Введите X и Y: ";
    do {
        isIncorrect = false;
        cin >> x >> y;
        if (cin.fail()) {
            cout << "Ошибка ввода! Попробуйте ещё раз." << endl << "Введите X и Y: ";
            cin.clear();
            while (cin.get() != '\n');
            isIncorrect = true;
        }
    } while (isIncorrect);
    if (val) {
        cout << x << endl;
    } else {
        cout << y << endl;
    }
}

