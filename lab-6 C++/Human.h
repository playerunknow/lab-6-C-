#pragma once
#include <iostream>
#include <string>
#include "Address.h" 

using namespace std;

class Human 
{
private:
    int age;
    bool gender;
    Address address;
    string role;
    float weight;
    float height;

public:
    Human(int age, bool gender, Address address = Address(), string role, float weight, float height)
    {
        this->age = age;
        this->gender = gender;
        this->address = address;
        this->role = role;
        this->weight = weight;
        this->height = height;
    }

    Human() : Human(20, 1, address, "Role", 80, 180) {}

    int getAge() const { return age; }
    string getGender() const { return (gender ? "male" : "female"); }
    Address getAddress() const { return address; }
    string getRole() const { return role; }
    float getWeight() const { return weight; }
    float getHeight() const { return height; }


    void setAge(int newAge) { age = newAge; }
    void setGender(bool newGender) { gender = newGender; }
    void setAddress(Address newAddress) { address = newAddress; }
    void setRole(string newRole) { role = newRole; }
    void setWeight(float newWeight) { weight = newWeight; }
    void setHeight(float newHeight) { height = newHeight; }

    void printInfo() const 
    {
        cout << "Age - " << age << endl;
        cout << "Gender - " << (gender ? "male" : "female") << endl;
        cout << "Role - " << role << endl;
        cout << "Weight - " << weight << endl;
        cout << "Height - " << height << endl;
        cout << "Address: ";
        getAddress().displayAddress();
        cout << endl;
    }

    ~Human() {}
};