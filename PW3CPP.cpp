#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>

using namespace std;



double RingS(double innerR, double outerR) {
    double innerS = M_PI * innerR * innerR;
    double outerS = M_PI * outerR * outerR;
    double ringS = outerS - innerS;
    return ringS;
}

int main() {
    setlocale(LC_ALL, "RUS");

    bool runs = true;
    double innerR, outerR;
    int op;
    double S;

    while (runs) {
        cout << "Для калькулятора плошади кольца нажмите 1, для выхода из программы нажмите 0" << endl;
        cin >> op;
        switch (op) {
        case 1:
            cout << "Введите значение внутреннего радиуса: ";
            cin >> innerR;
            cout << "Введите значение внешнего радиуса: ";
            cin >> outerR;

            S = RingS(innerR, outerR);
            cout << "Площадь кольца: " << S << endl;
            break;
        case 0:
            runs = false;
            break;
        default:
            cout << "Введена некорректная цифра" << endl;
            break;
        }
    }
}