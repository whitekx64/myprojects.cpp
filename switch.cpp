#include <iostream>
#include <string>

int main() {

    int choise;
    std::cout << "Привет, ввыбери число, ноль или единицу: ";
    std::cin >> choise;

    switch (choise){
    case 0:
        std::cout << "Ноль, ура!" << std::endl;
        break;
    
    case 1:
        std::cout << "Нееет:c Это единица(" << std::endl;
        break;

    default:
        std::cout << "Это и не ноль, и не единица";
        break;
    }
    return 0;
}