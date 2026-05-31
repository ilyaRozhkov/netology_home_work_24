#include <iostream>
#include <windows.h>

#include <vector>

long long fib_memo(int n, std::vector<long long>& memo) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    if (memo[n] != -1) return memo[n];
    memo[n] = fib_memo(n - 1, memo) + fib_memo(n - 2, memo);
    return memo[n];
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

    std::vector<long long> memo(n + 1, -1);

    long long result = fib_memo(n, memo);
    std::cout << "F(" << n << ") = " << result << std::endl;

    return 0;
}
