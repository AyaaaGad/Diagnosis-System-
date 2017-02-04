#include"Patient.h"
#include "Doctor.h"
#include<iostream>
#include<string>

using namespace std;

int Patient::IDReservation=0;

istream &operator >> (istream & in, Patient &p )
{
    cout <<"Patient Details /n";


    cout <<"\nEnter your name : ";
    in>>p.Name;

    cout <<"\nEnter your Age : ";
    in>>p.Age;

    cout <<"\nEnter your Gender : ";
    in>>p.Gender;


    cout <<"\nEnter your Phone Number : ";
    in >>p.Phone_Number;

    return in;
}

ostream &operator << (ostream & out, Patient & p)
{

    out<<"Patient Name : "<<p.Name<<"\n Age : "<<p.Age<<"\n Gender : "<<p.Gender;
    out<<"\nPhone Number : "<<p.Phone_Number /*<<"\n address : "<<p.address*/;

    return out ;
}

void Patient ::setNextVisit ( string date )
{
    this ->Next_visit=date;

}

int Patient :: getIDCounter ()
{
    return IDCounter;

}

bool Patient::reservation ( double x)
{
    if ( x<0 || x>24 )
        return false ;
    else
        return true ;


}
Patient ::Patient ():Person()
{
    IDReservation++;
    this->Next_visit="";
    this->IDCounter=IDReservation;

}

Patient ::Patient ( Patient & patient )
{


    Name =patient.Name;
    Age=patient.Age;
    Gender=patient.Gender;
    Phone_Number=patient.Phone_Number;
    Address=patient.Address;
    Next_visit=patient.Next_visit;
    IDCounter=patient.IDCounter;




}

Patient Patient ::operator = ( const Patient & patient)
{


    Name =patient.Name;
    Age=patient.Age;
    Gender=patient.Gender;
    Phone_Number=patient.Phone_Number;
    Address=patient.Address;
    Next_visit=patient.Next_visit;
    IDCounter=patient.IDCounter;




    return *this;
}

Patient ::~Patient ( )
{


}

