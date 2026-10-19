// Завдання 1. Варіант 16.
// Вираз: ((a - b)^3 - (a^3 - 3*a^2*b)) / (b^3 - 3*a*b^2)
// Обчислення виконується у трьох типах даних: int, float, double.
#include <iostream>
#include <iomanip>
using namespace std;

// Шаблонна функція: один і той самий алгоритм для будь-якого типу T.
// Обчислення розбито на проміжні змінні.
// Повертає false, якщо знаменник дорівнює нулю (ділення неможливе).
template <typename T>
bool calc(T a, T b, T &res) {
    T d     = a - b;              // a - b
    T d3    = d * d * d;          // (a - b)^3
    T a2    = a * a;              // a^2
    T a3    = a2 * a;             // a^3
    T t     = 3 * a2 * b;         // 3*a^2*b
    T upper = d3 - (a3 - t);      // чисельник
    T b2    = b * b;              // b^2
    T b3    = b2 * b;             // b^3
    T lower = b3 - 3 * a * b2;    // знаменник
    if (lower == 0) return false; // захист від ділення на нуль
    res = upper / lower;
    return true;
}

int main() {
    double a, b;
    cout << "Введіть a: ";
    cin >> a;
    cout << "Введіть b: ";
    cin >> b;

    int    ai = (int)a,   bi = (int)b;      // значення для типу int
    float  af = (float)a, bf = (float)b;    // значення для типу float

    cout << setprecision(10);
    cout << "\n=== Результат обчислення виразу ===" << endl;

    int    ri;  float  rf;  double rd;   // результати у різних типах

    cout << "int    : ";
    if (calc<int>(ai, bi, ri)) cout << ri << endl;
    else cout << "знаменник = 0, ділення неможливе" << endl;

    cout << "float  : ";
    if (calc<float>(af, bf, rf)) cout << rf << endl;
    else cout << "знаменник = 0, ділення неможливе" << endl;

    cout << "double : ";
    if (calc<double>(a, b, rd)) cout << rd << endl;
    else cout << "знаменник = 0, ділення неможливе" << endl;
    return 0;
}
