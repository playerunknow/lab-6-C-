#pragma once
#include <iostream>
#include <string>
#include "Address.h"
#include "Human.h"

using namespace std;

class Student : public Human
{
private:
    double scholarship;
    string nameOfGroup;

public:
    Student(double studentScholarship, string nameOfGroup) : scholarship(studentScholarship), nameOfGroup(nameOfGroup){}

    Student() : Student(1000, "Group") { cout << "Called default constructor\n"; }

    Student(const Student& other) : scholarship(other.scholarship), nameOfGroup(other.nameOfGroup) { cout << "Called copy constructor\n"; }

    ~Student()
    {
        cout << "Called destructor\n";
    }

    float getScholarship() const
    {
        return scholarship;
    }

    void setScholarship(double studentScholarship)
    {
        scholarship = studentScholarship;
    }

    void inputData()
    {
        cout << "Enter scolarship: ";
        cin >> scholarship;
    }

    void displayInfo()
    {
        cout << "scolarship: " << scholarship << endl;
        cout << "nameOfGroup" << nameOfGroup << endl;
        printInfo();
    }
};
