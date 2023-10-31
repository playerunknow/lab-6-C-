#include <iostream>
#include <Windows.h>
#include <string>
#include "Date.h"
#include "Human.h"
#include "Address.h"
#include "Student.h"
#include "Teacher.h"

using namespace std;

int main(void)
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    /*Student student1(20, "Male", 1000.0, 34, 76.8, "456456 Main St", "Cityville", "Canada", "5555");
    Student student2(22, "Female", 1200.0, 56, 76.5, "456456 Street", "qwerty", "Canada", "88888");

    student1.displayInfo();
    student2.displayInfo();

    cout << "Enter information about 1 student:\n";
    student1.inputData();

    cout << endl; 

    cout << "Enter information about 2 student:\n";
    student2.inputData();

    cout << endl; 

    cout << "Information about 1 student:\n";
    student1.displayInfo();

    cout << endl; 

    cout << "Information about 2 student:\n";
    student2.displayInfo();

    student1.setAge(23);
    student1.setGender("Female");
    student1.setScholarship(1000.0);

    student2.setAge(18);
    student2.setGender("Male");
    student2.setScholarship(1200.0);

    cout << "Information about 1 student:\n";
    student1.displayInfo();

    cout << endl;

    cout << "Information about 2 student\n";
    student2.displayInfo();


    cout << "Display information with geters:\n";
    cout << "Age: " << student1.getAge() << endl;
    cout << "Gender: " << student1.getGender() << endl;
    cout << "Scolarship: " << student1.getScholarship() << endl;

    cout << endl;

    cout << "Display information with geters:\n";
    cout << "Age: " << student2.getAge() << endl;
    cout << "Gender: " << student2.getGender() << endl;
    cout << "Scolarship: " << student2.getScholarship() << endl;



    int totalAge = student1.getAge() + student2.getAge();
    double totalScholarship = student1.getScholarship() + student2.getScholarship();
    double averageAge = static_cast<double>(totalAge) / 2;

    cout << endl;
    cout << "Average age: " << averageAge << endl;
    cout << "Total scolarship: " << totalScholarship << endl;

    cout << "class Date";

    Date date(25, 9, 2023);

    date.printDate();

    if (date.isValidDate()) 
    {
        cout << "This date is correct.\n";
        if (date.isLeapYear()) 
        {
            cout << "This is a leap year.\n";
        }
        else 
        {
            cout << "this year is not leap.\n";
        }
    }
    else 
    {
        cout << "This date is correct.\n";
    }

    return 0;*/
}