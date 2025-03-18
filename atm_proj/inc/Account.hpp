#include "Transaction.hpp"
#include <string_view>
#include <vector>

class Account{

    private:
    std::string accNo;
    std::string hashedpin;
    double balance;
    std::string hashPin(int pin);
    std::vector<Transaction>transactions;

    public:
    Account(std::string_view accNo,int pin,double initialBalance);
    bool deposit(double amount);
    bool withdraw(double amount);

};