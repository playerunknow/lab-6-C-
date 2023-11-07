#pragma once
#include <iostream>
#include <string>

#include "Date.h"

using namespace std;

class CourseProject
{
private:
	string name;
	Date beginningDate;
	Date endingDate;
	string description;

public:
	CourseProject(string name = "Name", Date beginningDate = Date(1, 8, 2023), Date endingDate = Date(1, 12, 2023), string description = "description")
	{
		this->name = name;
		this->beginningDate = beginningDate;
		this->endingDate = endingDate;
		this->description = description;
	}
};