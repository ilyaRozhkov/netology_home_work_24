#include <iostream>
#include <windows.h>

long long fib(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    return fib(n - 1) + fib(n - 2);
}

int main() {

    setlocale(LC_ALL, "Russian");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int n;
    std::cout << "Введите номер числа Фибоначчи: ";
    std::cin >> n;

    if (n < 0) {
        std::cout << "Число должно быть неотрицательным." << std::endl;
        return 1;
    }

    std::cout << "F(" << n << ") = " << fib(n) << std::endl;

    return 0;
}
