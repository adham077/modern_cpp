#include "Books.hpp"

Book::Book():Item(){
    this->name = "N/A";
    this->author = "N/A";
}

Book::Book(std::string name):Item(){
    this->name = name;
}

Book::Book(std::string name,std::string author):Item(){
    this->name = name;
    this->author = author;
}

Book::Book(std::string name,std::string author,uint32_t id):Item(id){
    this->name = name;
    this->author = author;
}

void Book::setName(std::string name){
    this->name = name;
}

std::string Book::getName(){
    return this->name;
}

void Book::setAuthor(std::string author){
    this->author = author;
}

std::string Book::getAuthor(){
    return this->author;
}

void Book::displayInfo()const{
    std::cout << "Book ID: " << _id << "\n"; 
    std::cout << "Title: " << name << "\n";
    std::cout << "Author: " << author << "\n";
}

void Book::registerItem(){
    std::ofstream myFile("../data/books.txt",std::ios::app);
    
    myFile << this->getId()<< ":" << this->name << ":" << this->author << ":" << 
    this->isAvailable << "\n";
    myFile.close(); 
}

Book::~Book(){

}