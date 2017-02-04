#ifndef PATIENT_H_INCLUDED
#define PATIENT_H_INCLUDED
#include<iostream>
#include<string>
#include"Person.h"
#include "Doctor.h"
using namespace std;

class Patient:public Person
{
private:
    static int IDReservation ;
    string Next_visit ;
    int IDCounter ;


public:

    friend istream & operator >> (istream & , Patient & );
    friend  ostream & operator << (ostream & , Patient & );
    void setNextVisit ( string );
    int getIDCounter () ;
    bool reservation (double x ) ;
    Patient ();
    Patient ( Patient & );
    Patient operator = ( const Patient &) ;
    ~Patient ( );

};


#endif // PATIENT_H_INCLUDED
