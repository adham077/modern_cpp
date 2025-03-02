#include "Student.hpp"

Student::Student(std::string name,uint8_t age,uint32_t id,std::string uni):
User(name,age,id){
    this->university = uni;
}

std::string Student :: getUni(){
    return this->university;
}

void Student::setUni(std::string uni){
    this->university = uni;
}

void Student::displayInfo()const{
    std::cout << "User ID: " << id << "\n"; 
    std::cout << "Name: " << name << "\n";
    std::cout << "age: " << age << "\n";
    std::cout << "University: " <<university << "\n";
}

void Student::registerUser(){
    std::ofstream myFile("../data/students.txt",std::ios::app);
    myFile << id<< ":" << name << ":" << age << ":" << 
    university << "\n";
    myFile.close(); 
}