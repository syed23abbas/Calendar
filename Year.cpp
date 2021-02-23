#include <iostream>
#include "Year.h"
using namespace std;

Year::Year(int d) {
    const char *months[12] = { "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December" };
    for(int i=0; i<12; i++) {
        if(i == 0) {
            Month month(months[i], d, i+1);
            monthArr[i] = month;
        }
        else {
            Month month;
            int firstDay = month.dayStarts(d, i+1);
            Month month2(months[i], firstDay, i+1);
            monthArr[i] = month2;
        }
    }
    for(int i=0; i<12; i++) {
        monthArr[i].printMonth();
    }
}
