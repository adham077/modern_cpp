#include "Items.hpp"

uint32_t Item:: _current_no_of_items = 0;

Item::Item(){
    this->_id = 0;
    _current_no_of_items++;
    isAvailable = true;
    isBorrowed = false;
}

Item::Item(uint32_t id){
    this->_id = id;
    _current_no_of_items++;
    isAvailable = true;
    isBorrowed = false;
}

void Item::setId(uint32_t id){
    this->_id = id;
}

uint32_t Item::getId(){
    return this->_id;
}

void Item::borrowItem(){
    isAvailable = false;
    isBorrowed = true;
}

void Item::returnItem(){
    isAvailable = true;
    isBorrowed = false;
}

Item::~Item(){

}