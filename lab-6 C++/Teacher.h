#pragma once
#include <iostream>
#include <string>
#include "Human.h"

using namespace std;

class Teacher : public Human 
{
private:
    double salary;
public:
    Teacher(double salary = 0, int age = 34, bool gender = 1, Address address = Address()) : Human(age, gender, address, "Teacher", 84, 184)
    {
        setRole("Teacher");
        setSalary(1000);
    }

    Teacher(const Human& human) : Human(human) 
    {
        setRole("Teacher");
        setSalary(1000);
    }

    double getSalary() const { return salary; }

    double setSalary(double newSalary) { return salary = newSalary; }

    void TeacherInfo()
    {
        
        printInfo();
    }

    ~Teacher() {}
};