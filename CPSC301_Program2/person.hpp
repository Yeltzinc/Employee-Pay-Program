//
//  person.hpp
//  
//
//  Created by Yeltz on 2/28/19.
//

#ifndef person_hpp
#define person_hpp

#include <stdio.h>
#include <string>
using namespace std;
//decleartion of class
class Person
{
    string firstName;
    string lastName;
    float payRate;
    float hoursWorked;
public:
    //default constructor
    Person();
    //setters
    void setFirstName(string fName);
    void setLastName(string lName);
    void setPayRate(float rate);
    void setHoursWorked(float hours);
    //getters
    string getFirstName();
    string getLastName();
    float getPayRate();
    float getHoursWorked();
    //total pay
    float totalPay();
    //full name 
    string fullName();
    
    
    
};


#endif /* person_hpp */
