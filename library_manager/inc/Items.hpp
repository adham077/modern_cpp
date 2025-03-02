#ifndef ITEMS_HPP_H_
#define ITEMS_HPP_H_
#include <iostream>

class Item{
    
    private:
    static uint32_t _current_no_of_items;

    protected:
    uint32_t _id;
    bool isBorrowed;
    bool isAvailable;

    public:
    Item();
    Item(uint32_t id);
    void setId(uint32_t id);
    uint32_t getId();
    void virtual registerItem()=0;
    void virtual displayInfo()const = 0;
    void virtual borrowItem();
    void virtual returnItem();
    virtual ~Item();
};


#endif