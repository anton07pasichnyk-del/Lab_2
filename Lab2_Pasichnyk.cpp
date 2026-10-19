#include <iostream>
using namespace std;

void task1() {
    double a, b;
    cout << "Введіть a: ";
    cin >> a;
    cout << "Введіть b: ";
    cin >> b;

    cout << "\n=== Результат обчислення виразу ===" << endl;

    int ai = a, bi = b;
    int di = ai - bi;
    int d3i = di * di * di;
    int a3i = ai * ai * ai;
    int ti = 3 * ai * ai * bi;
    int upi = d3i - (a3i - ti);
    int lowi = bi * bi * bi - 3 * ai * bi * bi;
    cout << "int    : ";
    if (lowi != 0) cout << upi / lowi << endl;
    else cout << "знаменник = 0, ділення неможливе" << endl;

    float af = a, bf = b;
    float df = af - bf;
    float d3f = df * df * df;
    float a3f = af * af * af;
    float tf = 3 * af * af * bf;
    float upf = d3f - (a3f - tf);
    float lowf = bf * bf * bf - 3 * af * bf * bf;
    cout << "float  : ";
    if (lowf != 0) cout << upf / lowf << endl;
    else cout << "знаменник = 0, ділення неможливе" << endl;

    double dd = a - b;
    double d3d = dd * dd * dd;
    double a3d = a * a * a;
    double td = 3 * a * a * b;
    double upd = d3d - (a3d - td);
    double lowd = b * b * b - 3 * a * b * b;
    cout << "double : ";
    if (lowd != 0) cout << upd / lowd << endl;
    else cout << "знаменник = 0, ділення неможливе" << endl;
}

void task2() {
    int m, n;
    cout << "Введіть m: ";
    cin >> m;
    cout << "Введіть n: ";
    cin >> n;

    cout << "\nДо розрахунку:    m = " << m << ", n = " << n << endl;

    int result = n-- * ++m;

    cout << "Результат n-- * ++m = " << result << endl;
    cout << "Після розрахунку: m = " << m << ", n = " << n << endl;
}

void task3() {
    double S, a;
    cout << "Введіть площу трикутника S: ";
    cin >> S;
    cout << "Введіть довжину сторони a: ";
    cin >> a;

    if (S <= 0 || a <= 0) {
        cout << "Помилка: площа і сторона мають бути додатними!" << endl;
        return;
    }

    double twoS = 2 * S;
    double h = twoS / a;

    cout << "Висота трикутника h = " << h << endl;
}

int main() {
    int choice;

    cout << "=== ВИБІР ЗАВДАННЯ ===" << endl;
    cout << "1 - Завдання 1 (вираз у типах int, float, double)" << endl;
    cout << "2 - Завдання 2 (n-- * ++m)" << endl;
    cout << "3 - Завдання 3 (висота трикутника)" << endl;
    cout << "Введіть номер завдання (1, 2 або 3): ";
    cin >> choice;
    cout << "-----------------------------------" << endl;

    switch (choice) {
        case 1: task1(); break;
        case 2: task2(); break;
        case 3: task3(); break;
        default: cout << "Помилка: вибрано неіснуюче завдання!" << endl;
    }

    return 0;
}
