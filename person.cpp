//  Created by Yeltz on 3/21/19.
//

#include "person.hpp"
Person::Person(int cardI, bool acc, string fn, string ln){
    cardID=cardI;
    active=acc;
    firstName=fn;
    lastName=ln;
}
string Person::getFirstName(){
    return firstName;
}
string Person::getLastName(){
    return lastName;
}
void Person::setActive(bool acc)
{
    active=acc;
}

bool Person::isActive()
{
    if(active==0)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}

string Person::fullName()
{
    return firstName+" "+lastName;
}

