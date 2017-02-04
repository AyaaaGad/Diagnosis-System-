#ifndef SYMPTOMS_H
#define SYMPTOMS_H
#include <string>
#include <iostream>
using namespace std;

class Symptoms
{
public:
    Symptoms();
    string *getSymptoms(int *symp);
    virtual ~Symptoms();
    void read ();
    void setChoice();
    int* getChoice();
    int getSize();
    string * getchoice1 ();
    void setSymptoms(Symptoms& );
    void  InvalidRead (int y);


private:

    int choice[50];
    string *choice1;
    int Size;

};

#endif // SYMPTOMS_H
