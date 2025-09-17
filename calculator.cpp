#include <iostream>

int calc(int a, int b){

    return a + b;

}


int main(){

    int fnum;
    int snum;

    std::cout << "Введите первое число: ";
    std::cin >> fnum;
    std::cout << "Введите второе число: ";
    std::cin >> snum;

    std::cout << calc(fnum, snum) << std::endl;
    return 0;
}