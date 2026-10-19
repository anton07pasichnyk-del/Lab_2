// Завдання 2. Варіант 16. Вираз: n-- * ++m
#include <iostream>
using namespace std;

int main() {
    int m, n;
    cout << "Введіть m: ";
    cin >> m;
    cout << "Введіть n: ";
    cin >> n;

    cout << "\nДо розрахунку:    m = " << m << ", n = " << n << endl;

    // n-- (постфіксний): береться старе n, потім n зменшується на 1
    // ++m (префіксний): m збільшується на 1, береться нове m
    int result = n-- * ++m;

    cout << "Результат n-- * ++m = " << result << endl;
    cout << "Після розрахунку: m = " << m << ", n = " << n << endl;
    return 0;
}
