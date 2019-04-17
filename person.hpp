//  Created by Yeltz on 3/21/19.
//

#ifndef person_hpp
#define person_hpp
#include <string>
#include <stdio.h>
#include<vector>
using namespace std;
class Person
{
private:
    string firstName;
    string lastName;
    int cardID;
    bool active;
public:
    Person (int cardI,bool acc,string fn,string ln);
    string getFirstName();
    string getLastName();
    int getId();
    void setActive(bool acc);
    bool isActive();
    string fullName();
    
};
#endif /* person_hpp */
