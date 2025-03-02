#ifndef USER_HPP_H_
#define USER_HPP_H_
#include <iostream>
#include <string>

class User{

    protected:
    std::string name;
    uint8_t age;
    uint32_t id;

    public:
    User();
    User(std::string name);
    User(std::string name,uint8_t age);
    User(std::string name,uint8_t age,uint32_t id);
    void setId(uint32_t id);
    uint32_t getId();
    void setName(std::string name);
    std::string getName();
    void setAge(uint8_t age);
    uint8_t getAge();
    virtual void displayInfo()const = 0;
    virtual void registerUser() = 0;
    virtual ~User();

};



#endif