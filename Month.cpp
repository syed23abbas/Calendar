#include <iostream>
#include "Month.h"
#include "Constants.h"
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
void Month::printMonth() {
    const string monday = "Mon";
    const string tuesday = "Tue";
    const string wednesday = "Wed";
    const string thursday = "Thu";
    const string friday = "Fri";
    const string saturday = "Sat";
    const string sunday = "Sun";
    cout << name << endl;
    cout << monday << " " << tuesday << " " << wednesday << " " << thursday << " " << friday << " " << saturday << " " << sunday << endl;
    
}

int Month::dayEnds(int firstDay, int numOfDays){
    for(int i=0; i<numOfDays; i++) {
        firstDay++;
        if(firstDay == 8) {
            firstDay = 1;
        }
    }
    return firstDay;
}

int Month::dayStarts(int firstDayOfYear, int monthNum) {
    int totalDays = 0;
    for(int i=0; i<monthNum; i++) {
        for(int j=0; j<numDays(i+1); j++) {
            totalDays++;
        }
    }
    for(int i=0; i<=totalDays; i++) {
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
