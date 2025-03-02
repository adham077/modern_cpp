#ifndef BOOKS_HPP_H_
#define BOOKS_HPP_H_
#include "Items.hpp"
#include <string>
#include <vector>
#include <fstream>

class Book:public Item{

    private:
    std::string name;
    std::string author;

    public:
    Book();
    Book(std::string name);
    Book(std::string name,std::string author);
    Book(std::string name,std::string author,uint32_t id);

    void setName(std::string name);
    std::string getName();

    void setAuthor(std::string author);
    std::string getAuthor();

    void registerItem();
    void displayInfo()const;
    ~Book();
};

#endif