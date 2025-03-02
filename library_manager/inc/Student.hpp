#ifndef STUDENT_HPP_H_
#define STUDENT_HPP_H_
#include "User.hpp"
#include <fstream>
class Student:public User{
    private:
    std::string university;

    public:
    Student(std::string name,uint8_t age,uint32_t id,std::string uni);
    ~Student();

    void setUni(std::string uni);
    std::string getUni();

    void displayInfo()const;
    void registerUser();
};




#endif