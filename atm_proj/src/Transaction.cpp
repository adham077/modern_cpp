#include "Transaction.hpp"

std::string Transaction::getCurrentTime(){
    std::ostringstream stream;
    std::time_t now = std::time(nullptr);
    stream << std::put_time(std::localtime(&now),"%Y-%m-%d %H:%M:%S");
    return stream.str();
}

void Transaction::print(){
    std::cout<<"Type:"<<type<<" Amount:"<<amount<<" Time:"<<time<<"\n";
}