#ifndef OPERATIONS_H
#define OPERATIONS_H
//#include"Doctor.h"
#include"Diseases.h"
#include<string>
#include <iostream>
using namespace std;

class Operations
{

public:


    void set_patient_symptoms(string *sptr,int Size);
    double *CalculatePercentage();
    string * Possible_Disease();
    string* Specialization();
    int getPatient_Diseases_Size();
    void setDiseases(const Diseases &d);


    Operations();
    ~Operations();
    void set_Room_number (int room ) ;
    void set_Duration (double d ) ;
    void set_operation_name (string name ) ;
    void set_doctor (string d ) ;
    string getdoctor () ;
    int getRoom_number () ;
    double getDuration () ;
    string getoperation_name ();
    void set_info (int i ) ;

private:
    Diseases diseases;
    string doctor ;
    int Room_number ;
    double Duration ;
    string operation_name ;

};

#endif // OPERATIONS_H
