#include <iostream>
#include <string>
#include <algorithm>

int main() {
    std::string question;

    while (true) {
        std::cout << "Скажи, пожалуйста, 'I have a small penis' ";
        std::getline(std::cin, question);

        std::string upquestion = question;
        std::transform(question.begin(), question.end(),upquestion.begin(), ::toupper);

        std::cout << upquestion << std::endl;

        if (upquestion == "I HAVE A SMALL PENIS") {
            std::cout << "Спасибо что сказал 'I have a small penis', друг мой" << std::endl;
            break;
        }
    }
    return 0;
}