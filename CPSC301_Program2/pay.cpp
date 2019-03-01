#include "person.cpp"
#include "person.hpp"
#include <iostream>
#include <iomanip>
#include <fstream>
#include <cstring>
#include <string>
//inputs
void readData(Person employees[],int &size)
{
    //declaration of names
    string fname,lname;
    //decelartion of hours and pay rate
    double workedHours,payRate;
    //open file
    ifstream input;
    input.open("input.txt");
    
    //reading and copying the data in file into declared variables
while(input>>fname>>lname>>workedHours>>payRate)
{
    //decleration of person p
    Person p;
    //setters of attributes
    p.setFirstName(fname);
    p.setLastName(lname);
    p.setHoursWorked(workedHours);
    p.setPayRate(payRate);
    //number of employees
    employees[size]=p;
    size++;
}
    //closing file
    input.close();
};
//outputs
void writeData(Person employees[],int size)
{
    //writing into a file
    ofstream output;
    output.open("output.txt");
    //for loop to insert data of employees
    for(int x=0; x<size;x++)
    {
        output<<employees[x].fullName()<<" "<<employees[x].totalPay()<<endl;
    }
    output.close();
};

int main()
{
    int size=0;
    Person employees[20];
    readData(employees,size);
    writeData(employees,size);
    return 0;
}
/*
 No global variables are allowed.
Do not change function/class/array/file names or function declarations.
You may only call myFile.open one time in the program to read the file.
No use of dynamic allocation for this assignment.
Must use arrays.
*/
