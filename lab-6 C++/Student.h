#pragma once
#include <iostream>
#include <string>
#include "Address.h"

using namespace std;

class Student : public Address
{
private:
    int age;
    string gender;
    double scholarship;
    float weight;
    float height;

public:
    Student(int studentAge, const string& studentGender, double studentScholarship, float studentWeight, float studentHeight,
        const string& studentStreet, const string& studentCity, const string& studentState, const string& studentPostalCode)
        : Address(studentStreet, studentCity, studentState, studentPostalCode),
        age(studentAge), gender(studentGender), scholarship(studentScholarship), weight(studentWeight), height(studentHeight) {
        cout << "Called constructor with parameters\n";
    }

    Student()
        : Address("", "", "", ""),
        age(0), gender(""), scholarship(0.0), weight(78.56), height(178.45) {
        cout << "Called default constructor\n";
    }

    Student(const Student& other)
        : Address(other),
        age(other.age), gender(other.gender), scholarship(other.scholarship), weight(other.weight), height(other.height) {
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
        inputAddressData();
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
        displayAddress();
        cout << "Age: " << age << endl;
        cout << "Gender: " << gender << endl;
        cout << "scolarship: " << scholarship << endl;
        cout << "weight" << weight << endl;
        cout << "height" << height << endl;
    }
};
