//Write a C++ program to print the calendar of a given year.


#include <iostream>
 #include <iomanip>
 #include <string>
 using namespace std;

 bool isLeapYear(int year) {
     return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
 }

 int getStartingDay(int year) {
     int day = (year + (year - 1) / 4 - (year - 1) / 100 + (year - 1) / 400) % 7;
     return day;
 }

 int main() {
     int year;
     cout << "Enter year: ";
     cin >> year;

       string months[] = {"January", "February", "March", "April", "May", "June",
                          "July", "August", "September", "October", "November", "December"};
       int daysInMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

       if (isLeapYear(year)) daysInMonth[1] = 29;

       int currentDay = getStartingDay(year);

       for (int i = 0; i < 12; i++) {
           cout << "\n ------------" << months[i] << "------------\n";
           cout << " Sun Mon Tue Wed Thu Fri Sat\n";

           for (int k = 0; k < currentDay; k++) {
               cout << "     ";
           }

           for (int j = 1; j <= daysInMonth[i]; j++) {
               cout << setw(5) << j;
               currentDay++;
               if (currentDay > 6) {
                   currentDay = 0;
                   cout << "\n";
               }
           }
           if (currentDay != 0) cout << "\n";
       }
       return 0;
 }