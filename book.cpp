//  Created by Yeltz on 3/21/19.
#include "book.hpp"
/*
 Book ID
 Title
 Author
 Category
*/
//PASS EACH ATTRIBUTE OF BOOK
Book::Book(int ID,string bookTitle,string auth,string cate){
    bookID=ID;
    title=bookTitle;
    author=auth;
    category=cate;
}
//getters
int Book::getID(){
    return bookID;
}
string Book::getTitle(){
    return title;
}
string Book::getAuthor(){
    return author;
}
string Book::getCategory(){
    return category;
}
//setter
void Book::setPersonPtr(Person *ptr)
{
    personPtr=ptr;
}
//ask for example on this method
Person * Book::getPersonPtr(){
    return personPtr;
}
