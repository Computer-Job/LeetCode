#ifndef BANK_H
#define BANK_H
#include <string>

class BankAccount {
private:
    std::string owner {};
    double balance {};

public:
    BankAccount(const std::string& owner, double balance);
    bool deposit(double amount);
    bool withdraw(double amount);
    double getBalance() const;
    std::string getOwner() const;
    void printSummary() const;
};

#endif
