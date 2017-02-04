#include "Operations.h"

Operations ::Operations ()
{
    doctor="" ;
    Room_number=0 ;
    Duration=0 ;
    operation_name="" ;
}

Operations ::~Operations ()
{
}

void Operations::set_Room_number(int room )
{
    Room_number = room ;
}

void Operations :: set_Duration (double time  )
{
    Duration = time ;
}

void Operations :: set_operation_name (string name )
{
    operation_name = name ;
}

void Operations :: set_doctor (string  d )
{
    doctor = d ;
}

int Operations :: getRoom_number ()
{

    return Room_number ;
}

double Operations:: getDuration ()
{

    return Duration ;
}

string Operations :: getdoctor ()
{
    return doctor ;
}

string Operations :: getoperation_name ()
{
    return operation_name ;
}

void Operations ::set_info (int x)
{
    string* s=diseases.Possible_Disease();


    if (s[x]== "Cancer")
    {

        set_Room_number(130) ;
        set_Duration (3) ;
        set_operation_name ("staging" ) ;
        set_doctor ("Ahmed Nabil") ;

        cout<<"Operation Name: "<<getoperation_name()<<endl<<"Name Doctor: "<<getdoctor()<<endl<<"Duration of Operation: "<<getDuration()<<endl
            <<"Room Number: "<<getRoom_number()<<endl;


    }
    else if (s[x]== "cataract")
    {
        set_Room_number ( 125 ) ;
        set_Duration (2) ;
        set_operation_name ("phacoemulsification" ) ;
        set_doctor (" Gamal Mahmod ");

        cout<<"Operation Name: "<<getoperation_name()<<endl<<"Name Doctor: "<<getdoctor()<<endl<<"Duration of Operation: "<<getDuration()<<endl
            <<"Room Number: "<<getRoom_number()<<endl;
    }
    else if (s[x] == "glaucoma")
    {
        set_Room_number (126) ;
        set_Duration (1) ;
        set_operation_name ("tube_shunt surgery" ) ;
        set_doctor ("Hosam Eldin Fathi") ;

        cout<<"Operation Name: "<<getoperation_name()<<endl<<"Name Doctor: "<<getdoctor()<<endl<<"Duration of Operation: "<<getDuration()<<endl
            <<"Room Number: "<<getRoom_number()<<endl;
    }
    else
    {
        cout<<"No operation"<<endl;
    }

}

void Operations::set_patient_symptoms(string *sptr, int Size)
{


    diseases.set_patient_symptoms(sptr, Size);
}


double * Operations:: CalculatePercentage()
{
    return diseases.CalculatePercentage();
}
string* Operations::Possible_Disease()
{
    return diseases.Possible_Disease();
}


int Operations:: getPatient_Diseases_Size()
{
    return diseases.getPatient_Diseases_Size();
}


void Operations:: setDiseases(const Diseases &d)
{
    diseases.setDiseases(d);
}













