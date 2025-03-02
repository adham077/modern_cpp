#include "Library.hpp"

Library* Library::lib = NULL;
bool Library:: init = false;

Library* Library::getLibrary(){
    if(init == true){
        return lib;
    }

    lib = new Library();
    return lib;
}

Library::Library(){

    init = true;


    Books = std::vector<Book*>(1000);
    students = std::vector<Student*>(1000);

    std::ifstream myFile("../data/books.txt");
    std::string line;
    
    while(std::getline(myFile,line)){
        std::stringstream ss(line);
        std::string idStr, name, author, isAvailStr;
        
        std::getline(ss,idStr,':');
        std::getline(ss,name,':');
        std::getline(ss,author,':');
        std::getline(ss,isAvailStr,':');

        uint32_t id = static_cast<uint32_t>(std::stoi(idStr));
        bool isAvail = (isAvailStr.compare("1") == 0);
        
        Book* b = new Book(name,author,id);
        
        if(!isAvail){
            b->borrowItem();
        }

        Books.push_back(b);
    }
    myFile.close();

    myFile = std::ifstream("../data/students.txt");

    while(std::getline(myFile,line)){
        std::stringstream ss(line);
        std::string userId, name, ageStr, university;
        
        std::getline(ss,userId,':');
        std::getline(ss,name,':');
        std::getline(ss,ageStr,':');
        std::getline(ss,university,':');

        uint32_t id = static_cast<uint32_t>(std::stoi(userId));
        uint8_t age = static_cast<uint8_t>(std::stoi(ageStr));
        
        Student* s = new Student(name,age,id,university);
        students.push_back(s);
    }
    myFile.close();
}


void Library::addBook(Book* b){
    b->registerItem();
    Books.push_back(b);
}

void Library::addStudent(Student* s){
    s->registerUser();
    students.push_back(s);
}

void Library::displayBooks(){
    for(const auto b : Books){	
        b->displayInfo();
	}
}

void Library::displayStudents(){
    for(const auto s : students){	
        s->displayInfo();
    }
}

Library::~Library(){
    
    for(auto s : students){
        delete s;
    }   
    for(auto b : Books){
        delete b;
    }
}
