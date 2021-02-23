#include <iostream>
#include "Year.h"
using namespace std;

int main()
{
    cout << "Please enter the day of the week the year starts on (Enter a number from 1-7 for Mon-Sun)." << endl;
    int firstDay = 0;
    cin >> firstDay;
    Year year(firstDay);
    return 0;
}
