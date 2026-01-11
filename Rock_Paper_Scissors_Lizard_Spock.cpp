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

    std::cout << "shoot! ";
    std::cin >> user;

    if (user == 1) std::cout << "YOU: ✊ Rock\n";
    else if (user == 2) std::cout << "YOU: ✋ Paper\n";
    else if (user == 3) std::cout << "YOU: ✌️ Scissors\n";
    else if (user == 4) std::cout << "YOU: 🦎 Lizard\n";
    else if (user == 5) std::cout << "YOU: 🖖 Spock\n";
    else {
        std::cout << "Invalid option\n";
        return 0;
    }
    if (computer == 1) std::cout << "COMPUTER: ✊ Rock\n";
    else if (computer == 2) std::cout << "COMPUTER: ✋ Paper\n";
    else if (computer == 3) std::cout << "COMPUTER: ✌️ Scissors\n";
    else if (computer == 4) std::cout << "COMPUTER: 🦎 Lizard\n";
    else if (computer == 5) std::cout << "COMPUTER: 🖖 Spock\n";

    return 0;
}

