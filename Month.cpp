#include <iostream>
#include "Month.h"
#include "Constants.h"
#include<string>
using namespace std;

Month::Month (string theName, int theDay, int month)
{
  name = theName;
  day = theDay;
  monthNum = month;
}

Month::Month() {
    name = "January";
    day = 1;
    monthNum = 1;
}
void Month::printMonth(int numOfMonth, int firstDayOfYear) {
    int firstDay = dayStarts(firstDayOfYear, numOfMonth);
    int day = 1;
    bool flag = true;
    const string monday = "Mon";
    const string tuesday = "Tue";
    const string wednesday = "Wed";
    const string thursday = "Thu";
    const string friday = "Fri";
    const string saturday = "Sat";
    const string sunday = "Sun";
    cout << name << endl;
    cout << monday << " " << tuesday << " " << wednesday << " " << thursday << " " << friday << " " << saturday << " " << sunday << endl;
    while(flag) {
        string week = "";
        for(int j=0; j<7; j++) {
            if(day == 1 && j+1 == firstDay) {
                week += to_string(day++) + "   ";
            }
            else if(day > 1 && day <= numDays(numOfMonth)) {
                if(day < 10) {
                    week += to_string(day++) + "   ";
                }
                else{
                    week += to_string(day++) + "  ";
                }
            }
            else if(day == 1) {
                week += "    ";
            }
            if(day > numDays(numOfMonth)) {
                flag = false;
            }
        }
        cout << week << endl;
    }
}

int Month::dayEnds(int firstDay, int numOfDays){
    for(int i=0; i<numOfDays; i++) {
        firstDay++;
        if(firstDay == 8) {
            firstDay = 0;
        }
    }
    return firstDay;
}

int Month::dayStarts(int firstDayOfYear, int monthNum) {
    int totalDays = 0;
    for(int i=1; i<monthNum; i++) {
        totalDays += numDays(i);
    }
    for(int i=0; i<totalDays; i++) {
        firstDayOfYear++;
        if(firstDayOfYear == 8) {
            firstDayOfYear = 1;
        }
    }
    return firstDayOfYear;
}

int Month::numDays (int month)
{
  if (month == 1)
    {
      return 31;
    }
  else if (month == 2)
    {
      return 28;
    }
  else if (month == 3)
    {
      return 31;
    }
  else if (month == 4)
    {
      return 30;
    }
  else if (month == 5)
    {
      return 31;
    }
  else if (month == 6)
    {
      return 30;
    }
  else if (month == 7)
    {
      return 31;
    }
  else if (month == 8)
    {
      return 31;
    }
  else if (month == 9)
    {
      return 30;
    }
  else if (month == 10)
    {
      return 31;
    }
  else if (month == 11)
    {
      return 30;
    }
  else if (month == 12)
    {
      return 31;
    }
  return 0;
}
