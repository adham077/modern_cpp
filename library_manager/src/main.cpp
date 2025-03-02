
#include "Library.hpp"

int main(){
    Book b = Book("adham","adham walaa",30);
    Library* lib = Library::getLibrary();
    lib->addBook(&b);

    return 0;
}