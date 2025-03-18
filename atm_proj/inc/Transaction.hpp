#ifndef TRANSACTIONS_HPP_
#define TRANSACTIONS_HPP_
#include <string>
#include <iomanip>
#include <ctime>
#include <string_view>
#include <iostream>

class Transaction{

    private:
    std::string type;
    double amount;
    std::string time;

    public:
    static std::string getCurrentTime();

    Transaction(std::string_view type,double amount):type(type),amount(amount),
    time(getCurrentTime()){}
    void print();

};


#endif