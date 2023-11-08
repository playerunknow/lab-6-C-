#pragma once
#include <iostream>
#include <string>

using namespace std;

class Date 
{
private:
    int day;
    int month;
    int year;

public:
    Date() : day(1), month(1), year(2000) {}

    Date(int d, int m, int y) : day(d), month(m), year(y) {}

    int getDay() const {return day;}

    int getMonth() const {return month;}

    int getYear() const {return year;}

    bool isValidDate() const 
    {
        if (year >= 1 && month >= 1 && month <= 12 && day >= 1) 
        {
            switch (month) 
            {
            case 2:
                if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) 
                {
                    return day <= 29;
                }
                else 
                {
                    return day <= 28;
                }
            case 4: case 6: case 9: case 11:
                return day <= 30;
            default:
                return day <= 31;
            }
        }
        return false;
    }

    bool isLeapYear() const { return ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0));}

    void printFullDate() const 
    {
        cout << day << "." << month << "." << year << endl;
        cout << day << "/" << month << "/" << year << endl;
        string monthName;
        switch (month) 
        {
        case 1: monthName = "Jan"; break;
        case 2: monthName = "Feb"; break;
        case 3: monthName = "Mar"; break;
        case 4: monthName = "Apr"; break;
        case 5: monthName = "May"; break;
        case 6: monthName = "Jun"; break;
        case 7: monthName = "Jul"; break;
        case 8: monthName = "Aug"; break;
        case 9: monthName = "Sep"; break;
        case 10: monthName = "Oct"; break;
        case 11: monthName = "Nov"; break;
        case 12: monthName = "Dec"; break;
        default: monthName = "Invalid"; break;
        }
        cout << monthName << "-" << day << "-" << year << endl;
    }

    void printDate() const
    {
        cout << day << "." << month << "." << year << endl;
        cout << day << "/" << month << "/" << year << endl;
    }
};