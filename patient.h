// patient.h
#ifndef PATIENT_H
#define PATIENT_H

#include <string>

class Patient {
public:
    Patient(const std::string& name, int age);
    // Add more member functions and data members as needed

private:
    std::string name;
    int age;
};

#endif // PATIENT_H
