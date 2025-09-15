#include <iostream>

int main(){

    int fnum;
    int snum;

    std::cout << "Введите первое число: ";
    std::cin >> fnum;
    std::cout << "Введите второе число: ";
    std::cin >> snum;

    std::cout << fnum << " + " << snum << " = " << fnum + snum << std::endl;
    return 0;
}