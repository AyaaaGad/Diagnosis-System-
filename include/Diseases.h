#include <iostream>
#include <string>
#include "Symptoms.h"
#ifndef DISEASES_H_INCLUDED
#define DISEASES_H_INCLUDED
using namespace std ;



class Diseases
{

private:

    static string m_diseases[9] ;
    double *percentages;
    int PatDisSize ;
    string patient_symptoms[47];
    double c[9] ;
    double ccopy[9] ;
    string Patient_Diseases[9];
    int Patient_Diseases_Size;

public:
    double*CalculatePercentage();
    string*Possible_Disease();
    void set_patient_symptomss();
    int getPatient_Diseases_Size();
    string *Specialization();
    void set_patient_symptoms(string arr[], int Size  );
    Diseases();
    Diseases(string arr[], int Size);
    ~Diseases();



    string*get_patient_symptoms();


    void setDiseases(const Diseases &d);


};

#endif // DISEASES_H_INCLUDED
