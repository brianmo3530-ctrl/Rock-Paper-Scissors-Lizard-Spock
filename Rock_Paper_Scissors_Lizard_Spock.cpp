/* rock paper scissors lizard spock*/

#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    srand(time(NULL));

    int computer = rand() % 5 + 1;
    int user = 0;

    std::cout << "===============================\n";
    std::cout << "Rock Paper Scissors Lizard Spock\n";
    std::cout << "===============================\n";

    std::cout << "1) ✊  Rock\n";
    std::cout << "2) ✋  Paper\n";
    std::cout << "3) ✌️  Scissors\n";
    std::cout << "4) 🦎  Lizard\n";
    std::cout << "5) 🖖  Spock\n";
