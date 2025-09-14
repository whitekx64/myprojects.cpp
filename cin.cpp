#include <iostream>
#include <string>
using namespace std;

int main() {

    string name;
    int age;

    cout << "Введите ваше имя: ";
    getline(cin, name);
    cout << "Введите ваш возрваст: ";
    cin >> age;

    cout << "Ваше имя -- " << name << ". Ваш возраст -- " << age << " Лет." << endl;
    
    return 0;
}