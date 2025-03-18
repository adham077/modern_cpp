#include "Account.hpp"

Account::Account(std::string_view accNo,int pin,double initialBalance){
    this->accNo = accNo;
    this->balance = initialBalance;
    transactions = std::vector<Transaction>();
}

bool Account::deposit(double amount){
    
    bool success = true;
    if(amount < 0){
        success = false;
    }
    else{
        balance += amount;
        transactions.emplace_back("deposit",amount);
    }
    return success;
}

bool Account::withdraw(double amount){
    bool success = true;
    if(amount < 0){
        success = false;
    }
    else if(amount > balance){
        success = false;
    }
    else{
        balance -=amount;
        transactions.emplace_back("withdraw",amount);
    }
    return success;
}