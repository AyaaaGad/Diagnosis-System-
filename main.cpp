#include <iostream>
#include "Doctor.h"
#include "Patient.h"
#include"Symptoms.h"
#include"Diseases.h"
#include "Medicine.h"
#include"template.h"
#include"Operations.h"
#include<windows.h>
#include"Diagonsis.h"
using namespace std;

int main()
{

    cout <<endl<<endl<<endl<<endl<<endl;
    cout <<"   **     **    **  ******  **    ******     *****    ************  ******  \n";
    cout <<"   **     **    **  *    *  **   *         **     **  **   **   **  *    *  \n";
    cout <<"   **     **    **  ******  **  *          **     **  **   **   **  ******  \n";
    cout <<"   **     **    **  *       **   *         **     **  **   **   **  *       \n";
    cout <<"     ** ** ** **    ******  **     ******    *****    **   **   **  ******  \n";
    cout <<endl<<endl;

    cout <<"                             *********     *****         \n";
    cout <<"                                 *       **     **        \n";
    cout <<"                                 *       **     **         \n";
    cout <<"                                 *       **     **          \n";
    cout <<"                                 *         *****             \n";






    cout <<endl<<endl;
    cout <<"  ******    **     ** **     ******       *****     *****    *****  **  ***** \n";
    cout <<"  **     *  **    **   **   **          **     **  **    **  **     **  **    \n";
    cout <<"  **      * **   **     ** **     ****  **     **  **    **   **    **   **   \n";
    cout <<"  **     *  **   *********  **     **   **     **  **    **    **   **    **  \n";
    cout <<"  ******    **   **     **   ******       *****    **    **  ****   **  ****   \n";

    Sleep (1000);
    system("CLS");

    Diagonsis *D = new Diagonsis ;
    D->start();


    return 0;
}
