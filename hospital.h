// hospital.h
#ifndef HOSPITAL_H
#define HOSPITAL_H

#include "patient.h"
#include "doctor.h"

class Hospital {
public:
    Hospital();
    void run();

private:
    std::vector<Patient> patients;
    std::vector<Doctor> doctors;
};

#endif // HOSPITAL_H
