#include "Doctor.h"
#include<iostream>
#include<string>
#include "Person.h"

using namespace std;

Doctor::Doctor() : Person()
{
    Workhours= to- from ;
    payment=0.0;
    specialization="";
    from = 8;
    to = 21 ;
}

Doctor ::~Doctor ( )
{


}

Doctor :: Doctor ( double p , string s , double f , double t)
{
    from = f ;
    to = t ;
    Workhours =  to-from  ;
    payment = p ;
    specialization = s;


}

bool Doctor :: reservation( double x )
{


    if (isbusy(x))
        return 1 ;
    else
        return false ;

}

bool Doctor :: isbusy(double a)
{
    if (a>=from&&a<=to)
    {
        return 1;
    }

    else return 0;

}
Doctor::Doctor(Doctor & doctor)
{

    Name=doctor.Name;
    Age=doctor.Age;
    Address=doctor.Address;
    Phone_Number=doctor.Phone_Number;
    Gender=doctor.Gender;
    Workhours=doctor.Workhours;
    payment=doctor.payment;
    specialization=doctor.specialization;

}

ostream &operator<<( ostream &output, const Doctor &doctor )
{
    output <<doctor.Name<<doctor.Age<<doctor.Gender<<doctor.Address<<doctor.Phone_Number; //Person
    output << doctor.Workhours << '/' << doctor.payment << doctor.specialization<< endl;
    return output;
}

istream &operator >>( istream &input,Doctor &doctor)
{

    input >>doctor.Name>>doctor.Age>>doctor.Gender>>doctor.Address>>doctor.Phone_Number;
    input>>doctor.Workhours;
    input>>doctor.payment;
    input>>doctor.specialization;
    return input ;
}

void Doctor::set_info(int k)

{
    string* str=diseases.Possible_Disease();

    cout<<endl;

    ifstream Doctor1 ;
    string ss;
    Doctor1.open("MY_doctor.txt");
    for(int i=0; i<91; i++)
    {
        Doctor1>>ss;


        if(ss==str[k])
        {
            cout <<"Doctors Information: \n";
            Doctor1>>specialization>>Workhours>>Name>>Age>>Gender>>Phone_Number>>payment>>Address;
            cout<<"Doctor Name : "<<Name<<"   \n"<<"Doctor specialization : "<<specialization<<"   \n"
                <<"Doctor Workhours : " <<Workhours<<"   \n"<<"Doctor Age : "<<Age<<"   \n"
                <<"Doctor Gender : " <<Gender<<"   \n"<<"Doctor Phone_Number : "<<Phone_Number<<"   \n"
                <<"Doctor payment : "  <<payment<<"   \n"
                <<"Doctor Address9 : "  <<Address;
            cout<<endl;
            break;
        }
        ss="";
    }
    Doctor1.close();

}

void Doctor::set_patient_symptoms(string *sptr, int Size)
{


    diseases.set_patient_symptoms(sptr, Size);
}


double * Doctor::CalculatePercentage()
{
    return diseases.CalculatePercentage();
}
string* Doctor::Possible_Disease()
{
    return diseases.Possible_Disease();
}


int Doctor:: getPatient_Diseases_Size()
{
    return diseases.getPatient_Diseases_Size();
}


void Doctor::setDiseases(const Diseases &d)
{
    diseases.setDiseases(d);
}




