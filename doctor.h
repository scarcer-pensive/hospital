// doctor.h
#ifndef DOCTOR_H
#define DOCTOR_H

#include <string>

class Doctor {
public:
    Doctor(const std::string& name, const std::string& specialization);
    // Add more member functions and data members as needed

private:
    std::string name;
    std::string specialization;
};

#endif // DOCTOR_H
