#pragma once
#include <vector>
#include "Human.h"
#include "Teacher.h"

class HumanList
{
private:
    vector<Human> humans;
    vector<Teacher> teachers;
    //add student;
public:
    HumanList() {}

    void addHuman(const Human& human) 
    {
        humans.push_back(human);
    }

    void addTeacher(const Teacher& teacher)
    {
        teachers.push_back(teacher);
    }

    void printHumansInfo() 
    {
        for (const auto& human : humans) 
        {
            human.printInfo();
        }
    }

    void printTeachersInfo()
    {
        for (const auto& teacher : teachers)
        {
            teacher.printInfo();
        }
    }

    ~HumanList() {}
};
