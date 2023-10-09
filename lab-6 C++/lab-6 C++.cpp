#include <iostream>
#include <Windows.h>
#include <string>
#include "Date.h"

using namespace std;

class Student 
{
private:
    int age;
    string gender;
    double scholarship;

public:
    Student(int studentAge, const std::string& studentGender, double studentScholarship)
        : age(studentAge), gender(studentGender), scholarship(studentScholarship) 
    {
        printf("Called constructor with parameters\n");
    }

    Student() : age(0), gender(""), scholarship(0.0) 
    {
        std::cout << "called default constructor\n";
    }

    Student(const Student& other)
        : age(other.age), gender(other.gender), scholarship(other.scholarship) 
    {
        std::cout << "Called copy constructor\n";
    }

    ~Student() 
    {
        std::cout << "Called destructor\n";
    }

    int getAge() const 
    {
        return age;
    }

    string getGender() const 
    {
        return gender;
    }

    double getScholarship() const 
    {
        return scholarship;
    }


    void setAge(int studentAge) 
    {
        age = studentAge;
    }

    void setGender(const string& studentGender) 
    {
        gender = studentGender;
    }

    void setScholarship(double studentScholarship) 
    {
        scholarship = studentScholarship;
    }


    void inputData() 
    {
        std::cout << "Enter age: ";
        std::cin >> age;

        std::cout << "Enter gender: ";
        std::cin.ignore(); 
        std::getline(std::cin, gender);

        std::cout << "Enter scolarship: ";
        std::cin >> scholarship;
    }

    void displayInfo() 
    {
        cout << "Age: " << age << endl;
        cout << "Gender: " << gender << endl;
        cout << "scolarship: " << scholarship << endl;
    }
};

int main(void)
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    Student student1(20, "Male", 1000.0);
    Student student2(22, "Female", 1200.0);

    std::cout << "Enter information about 1 student:\n";
    student1.inputData();

    std::cout << std::endl; 

    
    std::cout << "Enter information about 2 student:\n";
    student2.inputData();

    std::cout << std::endl; 

    std::cout << "Information about 1 student:\n";
    student1.displayInfo();

    std::cout << std::endl; 

    std::cout << "Information about 2 student:\n";
    student2.displayInfo();

    student1.setAge(23);
    student1.setGender("Female");
    student1.setScholarship(1000.0);

    student2.setAge(18);
    student2.setGender("Male");
    student2.setScholarship(1200.0);

    std::cout << "Information about 1 student:\n";
    student1.displayInfo();

    std::cout << std::endl;

    std::cout << "Information about 2 student\n";
    student2.displayInfo();


    std::cout << "Display information with geters:\n";
    std::cout << "Age: " << student1.getAge() << std::endl;
    std::cout << "Gender: " << student1.getGender() << std::endl;
    std::cout << "Scolarship: " << student1.getScholarship() << std::endl;

    std::cout << std::endl;

    std::cout << "Display information with geters:\n";
    std::cout << "Age: " << student2.getAge() << std::endl;
    std::cout << "Gender: " << student2.getGender() << std::endl;
    std::cout << "Scolarship: " << student2.getScholarship() << std::endl;



    int totalAge = student1.getAge() + student2.getAge();
    double totalScholarship = student1.getScholarship() + student2.getScholarship();
    double averageAge = static_cast<double>(totalAge) / 2;

    std::cout << std::endl;
    std::cout << "Average age: " << averageAge << std::endl;
    std::cout << "Total scolarship: " << totalScholarship << std::endl;

    cout << "class Date";

    Date date(25, 9, 2023);

    date.printDate();

    if (date.isValidDate()) 
    {
        std::cout << "This date is correct.\n";
        if (date.isLeapYear()) 
        {
            std::cout << "This is a leap year.\n";
        }
        else 
        {
            std::cout << "this year is not leap.\n";
        }
    }
    else 
    {
        std::cout << "This date is correct.\n";
    }

    return 0;
}