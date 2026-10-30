// Write a C++ program using a parameterized constructor and a copy constructor to check whether a number is an Armstrong number.

#include <iostream>
 #include <cmath>
 using namespace std;

 class Armstrong {
 private:
     int number;

 public:
     Armstrong(int num) {
         number = num;
     }

      Armstrong(const Armstrong &obj) {
          number = obj.number;
      }

      bool isArmstrong() {
          int temp = number;
          int originalNumber = number;
          int count = 0;
          int sum = 0;

          while (temp > 0) {
              count++;
              temp /= 10;
          }

          temp = originalNumber;
          while (temp > 0) {
              int remainder = temp % 10;
              sum += pow(remainder, count);
              temp /= 10;
          }

          return (sum == originalNumber);
      }

      void displayResult() {
          if (isArmstrong()) {
              cout << number << " is an Armstrong number." << endl;
          } else {
              cout << number << " is NOT an Armstrong number." << endl;
          }
      }
 };

 int main() {
     int num;
     cout << "Enter a number: ";
     cin >> num;

      Armstrong obj1(num);

      Armstrong obj2 = obj1;




      cout << "\n[Checking using Copied Object]" << endl;
      obj2.displayResult();

      return 0;
 }
