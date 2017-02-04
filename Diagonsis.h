#ifndef DIAGONSIS_H
#define DIAGONSIS_H
#include "Doctor.h"
#include"Symptoms.h"
#include"Diseases.h"
#include "Medicine.h"
#include"template.h"
#include"Operations.h"
#include "Patient.h"

class Diagonsis
{
public:

    Diagonsis();
    void start();
    virtual ~Diagonsis();
    int cinn();

protected:
private:
    Symptoms S;
    Medicine Med;
    Operations Operation;
    Doctor doc;
    Patient patient;




};

#endif // DIAGONSIS_H
