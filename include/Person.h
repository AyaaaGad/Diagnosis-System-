#ifndef PERSON_H
#define PERSON_H
#include <iostream>
#include <string>
using namespace std;

class Person
{
public:
    virtual bool reservation ( double x ) =0 ;
    void setName ( string name );
    void setAge (int age);
    void setPhone_Number (string phone_number);
    void setAddress (string address);
    void setGender (char gender);
    Person(string name , string phone , string address , char gender , int age );
    Person();
    string getName () ;
    string getPhone_Number ();
    string getAddress();
    int getAge ();
    char getGender ();
    virtual ~Person();

protected:
    string Name , Phone_Number , Address ;
    int Age ;
    char Gender ;

};

#endif // PERSON_H
