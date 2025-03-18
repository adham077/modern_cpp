#include "Transaction.hpp"
#include <iostream>

int main(){
    Transaction t("deposit",200);
    t.print();
    return 0;
}