# include <iostream>

using namespace std;

int main() {
    bool isIncorrect;
    double x, y;
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
    std::cin >> x >> y;
    std::cout << ((x > y) ? x : y) << std::endl;
    return 0;
}