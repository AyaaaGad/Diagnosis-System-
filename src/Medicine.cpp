#include "Medicine.h"
#include<fstream>
#include<string>
using namespace std ;
void Medicine::set_info(int i)
{
    string* dis=diseases.Possible_Disease();
    ifstream name_medicine;



    name_medicine.open("Medicine.txt");
    if(!name_medicine)
        cout<<"Error while opening the file.\n";
    while(name_medicine.good())
    {
        string dis_file;
        getline(name_medicine,dis_file);
        if (dis_file==dis[i])
        {
            getline(name_medicine,dis_file);
            cout <<dis_file<<" \n"<<endl;
            break;
        }
    }
    name_medicine.close();

}
Medicine::Medicine()
{
    //ctor
}

Medicine::~Medicine()
{
    //dtor
}
void Medicine::set_patient_symptoms(string *sptr, int Size)
{


    diseases.set_patient_symptoms(sptr, Size);
}


double * Medicine:: CalculatePercentage()
{
    return diseases.CalculatePercentage();
}
string* Medicine::Possible_Disease()
{
    return diseases.Possible_Disease();
}


int Medicine:: getPatient_Diseases_Size()
{
    return diseases.getPatient_Diseases_Size();
}


void Medicine:: setDiseases(const Diseases &d)
{
    diseases.setDiseases(d);
}
Diseases Medicine::getDiseases()
{
    Diseases dd;
    dd.setDiseases(diseases);
    return dd;



}
