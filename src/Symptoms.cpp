#include "Symptoms.h"
#include <fstream>
#include "Symptoms.h"
#include <fstream>
#include <string>
#include <iostream>
#include<windows.h>
using namespace std;
Symptoms::Symptoms()
{
    Size=0;
}

Symptoms::~Symptoms()
{
    delete[] choice1;
}

string *Symptoms::getSymptoms (int* newchoice )
{
     for (int i =0 ; i<Size ; i++)
       cout << newchoice[i]<<" ";

    for (int i =0 ; i<Size ; i++)
    {
        for (int j=i+1 ; j<Size ; j++)
        {
            if (newchoice[i]> newchoice[j])
                swap(newchoice[i], newchoice[j]);

        }
    }
cout <<endl;
    ifstream patient_symp ;
    patient_symp.open("My_symptoms.txt");
    string *choice1=new string [47];
    int k=0;
    int c=0;
    int y;
    int j=0;
    string r;
    for (int i=0; i<47; i++)
    {
        patient_symp>>y;

        if (y==newchoice[j])
        {
            getline(patient_symp,r);
            choice1[k]=r;
            j++;
            c++;
            k++;
        }
        if (j==47)
        {
            break;
        }
        if (c==0)
        {
            getline(patient_symp,r);
        }
        c=0;
    }


    return choice1;
}

void Symptoms :: read()
{
    ifstream read1;
    int y;
    string str;
    read1.open("My_symptoms.txt");
    while(read1>>y)
    {
        getline(read1,str);
        cout<<y<<"    "<<str<<endl;
    }
    cout <<"----------------finish---------\n";

}

string *  Symptoms :: getchoice1 ()
{
    return choice1 ;

}

void Symptoms :: InvalidRead (int y)
{
    if (y >47 || y<0)
    {
        throw "Enter a valid number please !\n" ;
    }


}
/*
void Symptoms :: setChoice()
{

    int x;
    int i=0;



h:
    while(cin >> x  )
    {



        try
        {

            InvalidRead(x);
        }


        catch (const char * e)
        {
            cout <<e<<endl;
            goto h;

        }
        for(int e=0;e<Size;e++){
            if(x==choice[e])
                continue;
        }

        choice[i]=x;
        Size=++i;
        if (x==0)
            break;
    }


}
*/
int* Symptoms ::  getChoice()
{
    return choice;
}

int Symptoms::getSize()
{
    return Size;
}





void Symptoms :: setChoice()
{

    int x;
    int i=0;
    bool b =1;

for ( ;b==1;){
     while(1)
    {
        try {

    HANDLE hout= GetStdHandle(STD_OUTPUT_HANDLE);
        HANDLE hin = GetStdHandle(STD_INPUT_HANDLE);
        INPUT_RECORD InputRecord;
        DWORD Events;
        COORD coord;
        CONSOLE_CURSOR_INFO cci;
        cci.dwSize = 26;
        cci.bVisible = FALSE;
        SetConsoleCursorInfo(hout, &cci);
        SetConsoleMode(hin, ENABLE_PROCESSED_INPUT | ENABLE_MOUSE_INPUT);
        ReadConsoleInput(hin, &InputRecord, 1, &Events);

        if(InputRecord.EventType == MOUSE_EVENT)
        {
            if(InputRecord.Event.MouseEvent.dwButtonState == FROM_LEFT_1ST_BUTTON_PRESSED)
            {
                coord.X = InputRecord.Event.MouseEvent.dwMousePosition.X;
                coord.Y = InputRecord.Event.MouseEvent.dwMousePosition.Y;
                    cout <<coord.Y-6<<endl;
                if(coord.Y==0+7){
                    choice[i++]=1;
                    break;

                }
                   if(coord.Y==1+7){
                    choice[i++]=2;

                    break;

                }
                    if(coord.Y==2+7){
                    choice[i++]=3;

                    break;

                }
                    if(coord.Y==3+7){
                    choice[i++]=4;


                    break;

                }
                   if(coord.Y==4+7){
                    choice[i++]=5;
                    break;

                }
                    if(coord.Y==5+7){
                    choice[i++]=6;
                    break;

                }
                    if(coord.Y==6+7){
                    choice[i++]=7;
                    break;

                }

                   if(coord.Y==7+7){
                    choice[i++]=8;
                    break;

                }
                    if(coord.Y==8+7){
                    choice[i++]=9;
                    break;

                }
                    if(coord.Y==9+7){
                    choice[i++]=10;
                    break;

                }
                   if(coord.Y==10+7){
                    choice[i++]=11;
                    break;

                }
                    if(coord.Y==11+7){
                    choice[i++]=12;
                    break;

                }
                    if(coord.Y==12+7){
                    choice[i++]=13;
                    break;

                }
                   if(coord.Y==13+7){
                    choice[i++]=14;
                    break;

                }
                    if(coord.Y==14+7){
                    choice[i++]=15;
                    break;

                }
                    if(coord.Y==15+7){
                    choice[i++]=16;
                    break;

                }
                   if(coord.Y==16+7){
                    choice[i++]=17;
                    break;

                }
                    if(coord.Y==17+7){
                    choice[i++]=18;
                    break;

                }
                    if(coord.Y==18+7){
                    choice[i++]=19;
                    break;

                }

                   if(coord.Y==19+7){
                    choice[i++]=20;
                    break;

                }
                    if(coord.Y==20+7){
                    choice[i++]=21;
                    break;

                }
                    if(coord.Y==21+7){
                    choice[i++]=22;
                    break;

                }
                   if(coord.Y==22+7){
                    choice[i++]=23;
                    break;

                }
                    if(coord.Y==23+7){
                    choice[i++]=24;
                    break;

                }
                    if(coord.Y==24+7){
                    choice[i++]=25;
                    break;

                }
                    if(coord.Y==25+7){
                    choice[i++]=26;
                    break;

                }
                    if(coord.Y==26+7){
                    choice[i++]=27;
                    break;

                }
                    if(coord.Y==27+7){
                    choice[i++]=28;
                    break;


                }
                   if(coord.Y==28+7){
                    choice[i++]=29;
                    break;

                }
                    if(coord.Y==29+7){
                    choice[i++]=30;
                    break;

                }
                    if(coord.Y==30+7){
                    choice[i++]=31;
                    break;



                }

                   if(coord.Y==31+7){
                    choice[i++]=32;
                    break;

                }
                    if(coord.Y==32+7){
                    choice[i++]=33;
                    break;


                }
                    if(coord.Y==33+7){
                    choice[i++]=34;
                    break;
                }
                   if(coord.Y==34+7){
                    choice[i++]=35;
                    break;

                }
                    if(coord.Y==35+7){
                    choice[i++]=36;
                    break;

                }
                    if(coord.Y==36+7){
                    choice[i++]=37;
                    break;

                }
                   if(coord.Y==37+7){
                    choice[i++]=38;
                    break;

                }
                    if(coord.Y==38+7){
                    choice[i++]=39;
                    break;

                }
                    if(coord.Y==39+7){
                    choice[i++]=40;
                    break;

                }
                   if(coord.Y==40+7){
                    choice[i++]=41;
                    break;

                }
                    if(coord.Y==41+7){
                    choice[i++]=42;
                    break;

                }
                    if(coord.Y==42+7){
                    choice[i++]=43;
                    break;

                }

                   if(coord.Y==43+7){
                    choice[i++]=44;
                    break;

                }
                    if(coord.Y==44+7){
                    choice[i++]=45;
                    break;

                }
                    if(coord.Y==45+7){
                    choice[i++]=46;
                    break;
                }
                   if(coord.Y==46+7){
                       choice[i++]=0;
                       b=0;
                    break;


                }

                if (coord.Y<7||coord.Y>54)
                {
                    throw "Click on  a valid Line please !\n" ;
                }




            }
            }




    }
    catch (const char * e)
        {
            cout <<e<<endl;

        }


    Size=i;

    }
    }


}

