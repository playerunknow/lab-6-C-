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
    float weight;
    float height;

public:
    Student(int studentAge, const string& studentGender, double studentScholarship, float weight, float height)
        : age(studentAge), gender(studentGender), scholarship(studentScholarship), weight(weight), height(height)
    {
        printf("Called constructor with parameters\n");
    }

    Student() : age(0), gender(""), scholarship(0.0), weight(78.56), height(178.45)
    {
        cout << "called default constructor\n";
    }

    Student(const Student& other)
        : age(other.age), gender(other.gender), scholarship(other.scholarship), weight(weight), height(height)
    {
        cout << "Called copy constructor\n";
    }

    ~Student() 
    {
        cout << "Called destructor\n";
    }

    int getAge() const 
    {
        return age;
    }

    string getGender() const 
    {
        return gender;
    }

    float getScholarship() const 
    {
        return scholarship;
    }

    float getWeight()
    {
        return weight;
    }

    float getHeight()
    {
        return height;
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

    void setWeight(float weight)
    {
        this->weight = weight;
    }

    void setHeight(float height)
    {
        this->height = height;
    }

    void inputData() 
    {
        cout << "Enter age: ";
        cin >> age;

        cout << "Enter gender: ";
        cin.ignore(); 
        getline(cin, gender);

        cout << "Enter scolarship: ";
        cin >> scholarship;
    }

    void displayInfo() 
    {
        cout << "Age: " << age << endl;
        cout << "Gender: " << gender << endl;
        cout << "scolarship: " << scholarship << endl;
        cout << "weight" << weight << endl;
        cout << "height" << height << endl;
    }
};

int main(void)
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    Student student1(20, "Male", 1000.0, 34, 76.8);
    Student student2(22, "Female", 1200.0, 56, 76.5);

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
    cout << "Age: " << student1.getAge() << std::endl;
    cout << "Gender: " << student1.getGender() << std::endl;
    cout << "Scolarship: " << student1.getScholarship() << std::endl;

    cout << endl;

    cout << "Display information with geters:\n";
    cout << "Age: " << student2.getAge() << std::endl;
    cout << "Gender: " << student2.getGender() << std::endl;
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

    return 0;
}