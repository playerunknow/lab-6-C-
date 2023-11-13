#pragma once
#include <iostream>
#include <string>
#include "Human.h"

using namespace std;

class Address
{
private:
    string street;
    string city;
    string state;
    string postalCode;

public:
    Address(const string& studentStreet, const string& studentCity, const string& studentState, const string& studentPostalCode)
        : street(studentStreet), city(studentCity), state(studentState), postalCode(studentPostalCode) {}

    Address() : Address("street", "City", "State", "34534543") {}

    void setStreet(const string& studentStreet)
    {
        street = studentStreet;
    }
    void setCity(const string& studentCity)
    {
        city = studentCity;
    }
    void setState(const string& studentState)
    {
        state = studentState;
    }
    void setPostalCode(const string& studentPostalCode)
    {
        postalCode = studentPostalCode;
    }

    string getStreet() const
    {
        return street;
    }
    string getCity() const
    {
        return city;
    }
    string getState() const
    {
        return state;
    }
    string getPostalCode() const
    {
        return postalCode;
    }

    void inputAddressData()
    {
        cout << "Enter street: ";
        cin >> street;

        cout << "Enter city: ";
        cin >> city;

        cout << "Enter state: ";
        cin >> state;

        cout << "Enter street: ";
        cin >> postalCode;
    }

    void displayAddress()
    {
        cout << "Street: " << getStreet() << endl;
        cout << "City: " << getCity() << endl;
        cout << "State: " << getState() << endl;
        cout << "Postal Code: " << getPostalCode() << endl;
    }
};
