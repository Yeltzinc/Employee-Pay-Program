#include "person.hpp"

//default construtor
Person::Person()
{
}
//setters
void Person::setFirstName(string fName)
{
    firstName=fName;
}
void Person::setLastName(string lName)
{
    lastName=lName;
}
void Person::setPayRate(float rate)
{
    payRate=rate;
}
void Person::setHoursWorked(float hours)
{
    hoursWorked=hours;
}
//getters
string Person::getFirstName()
{
    return firstName;
}
string Person::getLastName()
{
    return lastName;
}
float Person::getPayRate()
{
    return payRate;
}
float Person::getHoursWorked()
{
    return hoursWorked;
}
//total pay
float Person::totalPay()
{
    return hoursWorked*payRate;
}
// full name
string Person::fullName()
{
    return firstName + " "+ lastName;
}
