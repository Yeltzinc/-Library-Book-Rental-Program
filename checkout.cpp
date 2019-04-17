#include <vector>
#include<iostream>
#include<fstream>
#include<string>
#include "person.cpp"
#include "book.cpp"
using namespace std;
    /*
    vector<Book *> books; //books holds objects of type book pointer
    vector<Person *> cardholders;//cardholders holds objects of type Person pointer.
    
    vector<string> svec // default initialization; svec has no elements
    vector<int>v{1,2,3,4,5,6,7,8,9};
    for (auto &i: v) //for each element in v(note: i is a reference)
        i *=i;//square the element value
    for(auto i: v)//for each element in v
        cout<<i<<" "; //print the element
    cout<<endl;
     
     vector<int>::size_type// returns the size of the vector
     v.empty()//returns true if v is empty; otherwise returns flase.
     v.size()// returns the number of elements in v
     v.push_back(t)// adds an element with value t to end of v.
     v[n]//returns a reference to the element at position n in v.
     v1=v2//replaces the elements in v1 with a copy of the elemnts in v2
     v1={a,b,c...}//replaces the elements in v1 with a copy of the elements in the comma- separted list.
     v1===v2/v1 and v2 are equal if they have the same number of elements.
     
     */
    
    //print menu
    void printmenu(){
        cout << "Welcome to Books r Us please select one of the following options" << endl;
        cout << "1. Book Checkout"<< endl;//asks for the card ID.
        cout << "2. Book Return"<< endl;//asks for the book ID.
        cout << "3. View all available books" << endl;//searches the books vector and outputs all books that are available,if any.
        cout << "4. View all outstanding rentals" << endl;//searches the books vectors and outputs a status report of the books that are currently checked out
        cout << "5. View outstanding rentals for a cardholder" << endl;//asks for the ard ID, confirms that the card id is valid and active. displays a list of books thaey currentyly have checked out.
        cout<<"6. Open new library card"<<endl;//Asks for the persons name creats a person object using the new operator and inserts into the cardholders vector.
        cout<<"7. Close library card"<<endl;
        cout<<"8. Exit System"<<endl;
        
    }
    int main()  {
        
    int choice;
    
        do
        {
            printmenu();
            cin>>choice;
            //check if the correct choice and input was made
            switch(choice)
            {
                case 1:
                    //check id. check if id is invalid.
                    //return false if invalid
                    //check vector for card id
                    //if card id 
                    cout<<"You have selected Book Checkout"<<endl;
                    break;
                case 2:
                    cout<<"You have selected Book Return"<<endl;
                    break;
                case 3:
                    cout<<"You have selected Book Return"<<endl;
                    break;
                case 4:
                    cout<<"You have selected view all available books"<<endl;
                    break;
                case 5:
                    cout<<"You have selected view all outstanding rentals"<<endl;
                    break;
                case 6:
                    cout<<"You have selected open new library card"<<endl;
                    break;
                case 7:
                    cout<<"You have selected close Library card"<<endl;
                    break;
                case 8:
                    //update book entrys
                default://invalid
                    cout<<"Closing program"<<endl;
                    break;
                    
            }
            cout<<endl;
        }while(choice!=8);
        return 0;
    }
