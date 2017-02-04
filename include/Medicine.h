#ifndef MEDICINE_H
#define MEDICINE_H
#include <string>
#include<iostream>
#include"Diseases.h"
using namespace std;

class Medicine
{
    Diseases diseases;

public:
    void set_patient_symptoms(string *sptr,int Size);
    double *CalculatePercentage();
    string * Possible_Disease();
    string* Specialization();
    int getPatient_Diseases_Size();
    Medicine();
    void set_info(int i);
    ~Medicine();
    void setDiseases(const Diseases &d);
    Diseases getDiseases();


};

#endif
