#include "User.hpp"

User::User(){
    this->name = "N/A";
    this->age = 21;
    this->id = 0;
}

User::User(std::string name){
    this->name = name;
    age = 21;
    this->id = 0;
}

User::User(std::string name,uint8_t age){
    this->name = name;
    this->age = age;
    this->id = 0;
}

User::User(std::string name,uint8_t age,uint32_t id){
    this->name = name;
    this->age = age;
    this->id = id;
}

void User::setId(uint32_t id){
    this->id = id;
}

uint32_t User::getId(){
    return this->id;
}

void User::setName(std::string name){
    this->name = name;
}

std::string User::getName(){
    return this->name;
}

void User::setAge(uint8_t age){
    this->age =age;
}

uint8_t User::getAge(){
    return this->age;
}

User::~User(){

}