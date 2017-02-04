#include "Person.h"
#include <sstream>
#include <iostream>
using namespace std ;

Person :: Person()
{
    Name = Phone_Number = Address = " ";
    Age=0;
    Gender=' ';
}

Person::Person(string name , string phone , string address , char gender , int age)
{
    Name = name ;
    Phone_Number = phone ;
    Address = address ;
    Gender = gender ;
    Age = age ;
}

void Person :: setName ( string name )
{
    Name = name ;

}

void Person :: setAge (int age)
{
    Age=age;
}

void Person :: setPhone_Number (string phone_number)
{
    Phone_Number = phone_number ;
}

void Person :: setAddress (string address)
{
    Address = address ;
}

void Person :: setGender (char gender)
{
    Gender = gender ;
}

string Person :: getName ()
{
    return Name;
}

string Person :: getPhone_Number ()
{
    return Phone_Number ;
}

string Person :: getAddress()
{
    return Address ;
}

int Person :: getAge ()
{
    return Age ;
}

char Person :: getGender ()
{
    return Gender ;
}

Person::~Person()
{
    //dtor
}
