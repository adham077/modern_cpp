#include "Student.hpp"
#include "Books.hpp"
#include <vector>
#include <sstream>

class Library{

    private:
    static bool init;
    static Library* lib;

    Library();

    std::vector<Book*>Books;
    std::vector<Student*>students;
    
    public:
    static Library* getLibrary();
    
    void addStudent(Student* s);
    void addBook(Book* b);

    void displayBooks();
    void displayStudents();

    ~Library();
};
