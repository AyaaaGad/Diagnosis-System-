#include "Diagonsis.h"
#include<windows.h>

Diagonsis::Diagonsis()
{
    //ctor
}

Diagonsis::~Diagonsis()
{
    //dtor
}


void Diagonsis::start()
{
    cout<<"                           Diagnosis(5)                      "<<endl;
    cout << "Enter your Name : ";
    char gender ;
    string Name ,Phone , address ;
    cin.ignore();
    getline(cin , Name );
    patient.setName(Name);
    cout << "Enter Phone Number: ";
    cin.ignore();
    getline(cin , Phone );
    patient.setPhone_Number(Phone);
    cout<<"Enter your Age: ";
    int age;
    cin>>age;
    cin.ignore();
    cout << "Enter your Address: ";
    getline (cin , address);
    cout << "Enter your Gender: ";
    cin >> gender;
    cout<<"----------------------Symptoms------------------------ \n";
    S.read();
    cout <<"\nChoice The number from 1 to 46 from Symptoms and choice finish when end !\n";
    S.setChoice();
    int *ptr;
    ptr=S.getChoice();

    string *sptr;
    sptr=S.getSymptoms(ptr);
    int i=0;


    Med.set_patient_symptoms(sptr,S.getSize());
    double *arr=new double[9];
    arr=Med.CalculatePercentage();
    cout<<endl<<"The Percentage of all diseases:";
    for (int i=0; i<9; i++)
        cout <<arr[i]<<" ";
    cout<<endl;

    string * Dis=new string[Med.getPatient_Diseases_Size()];

    Dis= Med.Possible_Disease();


    // system("CLS");

    Operation.setDiseases(Med.getDiseases());
    doc.setDiseases(Med.getDiseases());

    int x=Med.getPatient_Diseases_Size();
    double arr1[9];

    int m=0;
    for (int i=0; i<9; i++)
    {
        if(arr[i]>=50.0)
        {
            arr1[m]=arr[i];
            m++;
        }
    }
    if (x==0)
    {
        cout << "You Don't have any disease ^_^ !"<<endl;
    }
    for (int i=0; i<x; i++)
    {

        cout <<"\n---------------------------------------------------------------------------\n";
        cout <<"Disease may you have is:  "<<Dis[i]<<" \n";
        cout <<endl;
        Print(Med,i);
        Print(Operation,i);

        if(arr1[i]>=50.0)
        {
            cout << "\nThe doctors are available form  8 am to 9 pm " << endl ;
            cout << "Choice an appointment to meet the doctor within 24 hours: \n ";
            cout <<"8  9  10  11  12  \n";
            double y ;
            y=cinn();

            Person *a , *b ;
            a = new Patient () ;
            while ( !a->reservation(y))
            {
                cout << "Enter a valid number : \n";
                y=cinn();
                a->reservation(y);
            }
            b = new Doctor ( );

            while (!b->reservation(y) )
            {
                cout << "The doctor is busy at this time \n ";
                cout << "Please Enter another appointment \n";
                y=cinn();
                b->reservation(y);
            }
            cout<<"---------------------------------- "<<endl;
            cout<<" The doctor will wait you :')\n";
            cout<<"---------------------------------- "<<endl;
        }
        Print(doc,i);
        cout <<"\n---------------------------------------------------------------------------\n\n\n";
        Sleep(5000);
    }
}


int Diagonsis:: cinn()
{
    int a ;
    bool b=1;
    for (; b;)
    {
        while(1)
        {
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
                    if ( coord.X==1)
                    {
                        a=8;
                        b=0;
                        break;
                    }
                    if ( coord.X==4)
                    {
                        a=9;
                        b=0;
                        break;
                    }
                    if ( coord.X==8||coord.X==9)
                    {
                        a=10;
                        b=0;
                        break;
                    }
                    if ( coord.X==11||coord.X==12)
                    {
                        a=11;
                        b=0;
                        break;
                    }
                    if ( coord.X==15||coord.X==16)
                    {
                        a=10;
                        b=0;
                        break;
                    }
                    else
                    {
                        a=0;
                        b=0;
                        break;
                    }





                }
            }
        }
    }
    return a;
}




