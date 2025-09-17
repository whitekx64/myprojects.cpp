#include <iostream>

double calculator(double a, double b, double res, char oper) {

    switch (oper){
        case '+':
            res = a + b;
            break;
        case '-':
            res = a - b;
            break;
        case '*':
            res = a * b;
            break;
        case '/':
            res = a / b;
            break;
        default:
            std::cout << oper << " -- не является оператором!";
            break;
        };
    return res;
}


int main(){

    double fnum;
    double snum;
    char operation;

    std::cout << "Введите первое число: "; std::cin >> fnum;
    std::cout << "Введите втрое число: "; std::cin >> snum;
    std::cout << "Выберите оператора (+ - * /): "; std::cin >> operation;

    double result = calculator(fnum, snum, result, operation);


    std::cout << result << std::endl;


}