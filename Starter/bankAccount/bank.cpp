#include "bank.h"
#include <iostream>

BankAccount::BankAccount(const std::string& owner, double balance)
    : owner(owner),
      balance(balance > 0 ? balance : 0) {}

bool BankAccount::deposit(double amount) {
    if (amount > 0) {
        balance += amount;
        return true;
    }
    return false;
}

bool BankAccount::withdraw(double amount) {
    if (amount > 0 && balance >= amount) {
        balance -= amount;
        return true;
    }
    return false;
}

double BankAccount::getBalance() const {
    return balance;
}

std::string BankAccount::getOwner() const {
    return owner;
}

void BankAccount::printSummary() const {
    std::cout << "Owner: " << owner << "\n";
    std::cout << "Balance: " << balance << "\n";
}
