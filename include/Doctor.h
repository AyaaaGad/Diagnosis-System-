#ifndef DOCTOR_H
#define DOCTOR_H
#include <string>
#include <iostream>
#include "Person.h"
#include<fstream>
#include"Diseases.h"

using namespace std;

class Doctor : public Person
{

public:
    Doctor();
    Doctor (Doctor & doctor);
    Doctor ( double p , string s , double f , double t);
    ~Doctor();
    bool isbusy(double a);
    bool reservation( double x );
    friend ostream &operator <<( ostream & output, const Doctor & doctor);
    friend istream &operator >>( istream &input,  Doctor &doctor);
    void set_info(int i);
    void set_patient_symptoms(string *sptr,int Size);
    double *CalculatePercentage();
    string * Possible_Disease();
    string* Specialization();
    int getPatient_Diseases_Size();
    void setDiseases(const Diseases &d);



private:
    double Workhours;
    double payment;
    string specialization;
    double from ;
    double to ;
    Diseases diseases;

};

#endif // DOCTOR_H
