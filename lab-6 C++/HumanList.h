#pragma once
#include <vector>
#include "Human.h"
#include "Teacher.h"
#include "Student.h"

class HumanList
{
private:
    vector<Human> humans;
    vector<Teacher> teachers;
    vector<Student> students;

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

    void addStudent(const Student& student)
    {
        students.push_back(student);
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

    void printStudentInfo()
    {
        for (const auto& student : students)
        {
            student.printInfo();
        }
    }

    ~HumanList() {}
};
