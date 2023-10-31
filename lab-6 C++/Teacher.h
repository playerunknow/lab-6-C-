#pragma once
#include <iostream>
#include <string>
#include "Human.h"

using namespace std;

class Teacher : public Human 
{
public:
    Teacher(int age = 34, bool gender = true, Address address = Address()) : Human(age, gender, address, "Teacher", 84, 184)
    {
        setRole("Teacher");
    }

    ~Teacher() {}
};