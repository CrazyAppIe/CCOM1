#include <iostream>
using namespace std;

class Date {
private:

    int month;
    int day;
    int year;

public:

  Date(int mon, int dy, int yr) {

      if (mon >= 1 && mon <= 12) {
            month = mon;
        } else {
            month = 1;
        }
        day = dy;
        year = yr;
    }

    int getMonth() const {
        return month;
    }

    void setMonth(int mon) {
        if (mon >= 1 && mon <= 12) {
            month = mon;
        } else {
            month = 1;
        }
    }

    int getDay() const {
        return day;
    }

    void setDay(int dy) {
        day = dy;
    }

    int getYear() const {
        return year;
    }

    void setYear(int yr) {
        year = yr;
    }

    void displayDate() const {
        cout << month << "/" << day << "/" << year << endl;
    }
};

int main() {

  Date date1(5, 10, 2023);
    cout << "Fecha valida: ";
    date1.displayDate();

    Date date2(13, 15, 2024); 
    cout << "Fecha invalidad (mon 1): ";
    date2.displayDate();

}
