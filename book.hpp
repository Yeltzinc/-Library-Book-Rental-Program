//  Created by Yeltz on 3/21/19.

#ifndef book_hpp
#define book_hpp

#include <stdio.h>
#include<string>
#include "person.hpp"
class Book
{
private:
    /*
     Book ID
     Title
     Author
     Category
     */
    int bookID;
    string title;
    string author;
    string category;
    Person * personPtr=nullptr;
    
public:
    Book(int ID,string bookTitle,string auth,string cate);
    //getters
    int getID();
    string getTitle();
    string getAuthor();
    string getCategory();
    Person * getPersonPtr();
    //ptr setter
    void setPersonPtr(Person *ptr);
};
#endif
