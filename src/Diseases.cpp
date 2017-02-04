#include "Diseases.h"
#include <iostream>
using namespace std ;
#include <string>
#include <algorithm>

string Diseases::m_diseases[9] = {"trachoma" , "cataract" , "glaucoma" , "Tooth_decay" , "Gingivoglossitis" , "Influenza" , "Dehydration" , "Fever" , "Cancer" };

Diseases::Diseases()
{
    Patient_Diseases_Size=0;
    PatDisSize = 1;
    percentages = new double [9];
    for (int i=0; i<9; i++)
    {
        c[i]=0;
    }
}


Diseases :: Diseases (string arr[] , int Size )
{

    for (int i=0; i<9; i++)
    {
        c[i]=0;
    }
    for (int i =0 ; i< Size ; i++)
    {
        patient_symptoms[i] = arr[i];

    }
    Patient_Diseases_Size=0;
    PatDisSize=Size;
    for (int i=0; i<9; i++)
    {
        c[i]=0;
    }

}

void Diseases::set_patient_symptoms(string* arr,int Size)
{
    for (int i =0 ; i< Size ; i++)
    {
        patient_symptoms[i] = arr[i];
    }
    PatDisSize=Size;
}


string* Diseases:: get_patient_symptoms()
{
    return  patient_symptoms;
}

double* Diseases:: CalculatePercentage()
{

    for (int i=0; i<PatDisSize; i++)
    {
        if(patient_symptoms[i]=="eye infection"||patient_symptoms[i]=="secretions from eye"||patient_symptoms[i]=="swelling of the eyelid"||
                patient_symptoms[i]=="corneal scars")
            c[0]++;

        if(patient_symptoms[i]=="Pain in the eye"||patient_symptoms[i]=="vision loss"||patient_symptoms[i]=="seeing the white light dispersed")
            c[1]++;

        if(patient_symptoms[i]=="huge pain in the eye"||patient_symptoms[i]=="narrow field of vision")
            c[2]++;

        if(patient_symptoms[i]=="Pain in the teeth"||patient_symptoms[i]=="there are visible holes in the teeth")
            c[3]++;

        if(patient_symptoms[i]=="Bleeding gums"||patient_symptoms[i]=="Mouth sores"||patient_symptoms[i]=="Swelling of the gums"||
                patient_symptoms[i]=="ahmrar Gums"||patient_symptoms[i]=="antfaj Tongue and redness")
            c[4]++;

        if(patient_symptoms[i]=="cough"||patient_symptoms[i]=="Fever"||patient_symptoms[i]=="A headache"||patient_symptoms[i]=="fatigue"||
                patient_symptoms[i]=="rotary"||patient_symptoms[i]=="Sore throat"||patient_symptoms[i]=="The visible and vomiting"
                ||patient_symptoms[i]=="Runny nose")
            c[5]++;

        if(patient_symptoms[i]=="Dry mouth"||patient_symptoms[i]=="atth Severe"||patient_symptoms[i]=="oajafav Eyes"||
                patient_symptoms[i]=="Muscle spasm"||patient_symptoms[i]=="yan And vomiting"||patient_symptoms[i]=="Heart palpitations")
            c[6]++;

        if(patient_symptoms[i]=="Hyperhidrosis"||patient_symptoms[i]=="shivering"||patient_symptoms[i]=="Headaches"||
                patient_symptoms[i]=="Muscle aches"||patient_symptoms[i]=="Anorexia"||patient_symptoms[i]=="Drought"||
                patient_symptoms[i]=="General weakness"||patient_symptoms[i]=="Feeling very tired")
            c[7]++;

        if(patient_symptoms[i]=="weight loss without reason"||patient_symptoms[i]=="fever and fever and night sweats"||
                patient_symptoms[i]=="the lack of feeling hungry"||patient_symptoms[i]=="discomfort or pain in the body"||
                patient_symptoms[i]=="cough and chest pain"||patient_symptoms[i]=="changes in bowel movements such as diarrhea or constipation"||
                patient_symptoms[i]=="bleeding or discharge habits abnormal"||patient_symptoms[i]=="ulcer Leather does not heal")
            c[8]++;

    }

    ccopy[0]=c[0]= (c[0]/4.0)*100;
    ccopy[1]=c[1]= (c[1]/3.0)*100;
    ccopy[2]=c[2]= (c[2]/2.0)*100;
    ccopy[3]=c[3]= (c[3]/2.0)*100;
    ccopy[4]= c[4]= (c[4]/5.0)*100;
    ccopy[5]= c[5]= (c[5]/8.0)*100;
    ccopy[6]=  c[6]= (c[6]/6.0)*100;
    ccopy[7]=  c[7]= (c[7]/8.0)*100;
    ccopy[8]= c[8]= (c[8]/8.0)*100;

    return c ;
}


string* Diseases :: Possible_Disease()
{
    int indx=0,g=9;
    double Max;
    while(g--)
    {
        indx=0;
        Max=0;
        for (int j=0; j<9; j++)
        {
            if (ccopy[j]>Max)
            {
                indx=j;
                Max=c[j];
            }

        }
        ccopy[indx]=0;

        if (Max>=50.0)
        {
            Patient_Diseases[Patient_Diseases_Size++]=m_diseases[indx];
        }
        else break;

    }

    string * newone =new string[Patient_Diseases_Size];
    for (int i=0; i<Patient_Diseases_Size; i++)
    {
        newone[i]=Patient_Diseases[i];
    }
    cout <<endl;

    return newone;
}

Diseases::~Diseases()
{
    delete[]percentages;
}

int Diseases::getPatient_Diseases_Size()
{
    return Patient_Diseases_Size;
}




void Diseases:: setDiseases(const Diseases &d)
{
    percentages=new double[9];
    for (int i=0 ; i<9; i++)
    {
        this->percentages[i]=d.percentages[i];
    }

    this->PatDisSize=d.PatDisSize;
    for (int i=0 ; i<47; i++)
    {
        this->patient_symptoms[i]=d.patient_symptoms[i];
    }

    for (int i=0 ; i<9; i++)
    {
        this->c[i]=c[i];
    }

    for (int i=0 ; i<9; i++)
    {
        this-> Patient_Diseases[i]=d. Patient_Diseases[i];
    }


    this->Patient_Diseases_Size=d.Patient_Diseases_Size;



}
