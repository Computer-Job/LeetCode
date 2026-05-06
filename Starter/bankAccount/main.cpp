#include <iostream>
#include <string>
#include "bank.h"

int main() {
    std::string     owner {};
    double          balance {};
    int             input {};
    bool            loop = true;
    
    std::cout << "Please enter a bank account name: " << std::flush;
    std::cin >> owner;
    std::cout << "Please enter a bank balance: " << std::flush;
    std::cin >> balance;
    std::cout << "\n";

    BankAccount account(owner, balance);

    while(loop == true) {
        double amount {};

        std::cout << "Menu: " << "\n1. Deposit\n2. Withdraw\n3. Show balance\n4. Exit\nPlease enter a number: " << std::flush;
        std::cin >> input;

        switch (input) {
            case 1:
                std::cout << "Please enter a deposit amount: " << std::flush;
                std::cin >> amount;

                if (account.deposit(amount) == true) {
                    std::cout << "Thank you, your balance amount now is: " << account.getBalance() << "\n";
                } else {
                    std::cout << "Sorry, request not plausible\n";
                }
                break;

            case 2:
                std::cout << "Please enter a withdrawal amount: " << std::flush;
                std::cin >> amount;

                if (account.withdraw(amount) == true) {
                    std::cout << "Thank you, your balance amount now is: " << account.getBalance() << "\n";
                } else {
                    std::cout << "Sorry, insufficient funds or request\n";
                }
                break;

            case 3:
                std::cout << "Your balance currently is: " << account.getBalance() << "\n";
                break;

            case 4:
                loop = false;
                break;
            
            default:
                std::cout << "Error, please enter an integer 1-4\n";
                break;
        }
        std::cout << "\n";
    }
    return 0;
}
