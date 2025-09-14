#include <iostream>
#include <string>

int main() {
    int result;
    int fnum;
    int snum;

    std::cout << "Введите первое число: ";
    std::cin >> fnum;
    std::cout << "Введите второе число: ";
    std::cin >> snum;
    result = fnum + snum;
    std::cout << "Сумма чисел " << fnum << " + " << snum << " равна " << result << std::endl;

    return 0;
}