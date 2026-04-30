#include "Times.h"
using std::cout;
Time::Time(int y, int m, int d):year(y), month(m), day(d){}
void Time::print() {
    cout << year << "Äê" << month << "ÔÂ" << day << "ÈÕ";
}
bool operator<=(const Time& t1, const Time& t2) {
    if (t1.year != t2.year) {
        return t1.year < t2.year;
    }
    else if (t1.month != t2.month) {
        return t1.month < t2.month;
    }
    else if(t1.day != t2.day){
        return t1.day < t2.day;
    }
    else {
        return true;
    }
}
bool operator<(const Time& t1, const Time& t2) {
    if (t1.year != t2.year) {
        return t1.year < t2.year;
    }
    else if (t1.month != t2.month) {
        return t1.month < t2.month;
    }
    else if (t1.day != t2.day) {
        return t1.day < t2.day;
    }
    else {
        return false;
    }
}