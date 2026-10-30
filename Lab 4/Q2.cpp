// Write a C++ program using a class to add two time values (hours, minutes, seconds)
#include <iostream>
using namespace std;

class Time {
private:
    int hours;
    int minutes;
    int seconds;

public:
    void input() {
        cout << "Enter hours: ";
        cin >> hours;
        cout << "Enter minutes: ";
        cin >> minutes;
        cout << "Enter seconds: ";
        cin >> seconds;
    }

     Time add(const Time& t) {
         Time temp;

         temp.seconds = seconds + t.seconds;
         int carryMinutes = temp.seconds / 60;
         temp.seconds %= 60;

         temp.minutes = minutes + t.minutes + carryMinutes;
         int carryHours = temp.minutes / 60;
         temp.minutes %= 60;

         temp.hours = hours + t.hours + carryHours;

         return temp;
     }

     void display() const {
         cout << hours << " hrs : " << minutes << " mins : " << seconds << " secs" << endl;
     }
};

int main() {
    Time t1, t2, result;

     cout << "=== TIME 1 ===" << endl;
     t1.input();

     cout << "\n=== TIME 2 ===" << endl;
     t2.input();

     result = t1.add(t2);

     cout << "\n-----------------------" << endl;
     cout << "Time 1     : "; t1.display();
     cout << "Time 2     : "; t2.display();
     cout << "Total Time : "; result.display();

     return 0;
}