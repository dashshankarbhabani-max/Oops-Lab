//Write a C++ program to demonstrate constructor overloading (default, parameterized and copy constructors) using a Student class.

#include <iostream>
 #include <string>

 using namespace std;

 class Student {
 private:
     string name;
     int rollNumber;
     double gpa;

 public:
     Student() {
         name = "Unassigned";
         rollNumber = 0;
         gpa = 0.0;
         cout << "[Default Constructor Called]" << endl;
     }

      Student(string sName, int sRoll, double sGpa) {
          name = sName;
          rollNumber = sRoll;
          gpa = sGpa;
          cout << "[Parameterized Constructor Called]" << endl;
      }

      Student(const Student &obj) {
          name = obj.name;
          rollNumber = obj.rollNumber;
          gpa = obj.gpa;
          cout << "[Copy Constructor Called]" << endl;
      }

      void display() const {
          cout << "Name: " << name
               << " | Roll No: " << rollNumber
               << " | GPA: " << gpa << endl;
          cout << "---------------------------------------" << endl;
      }
 };

 int main() {
     cout << "=== CONSTRUCTOR OVERLOADING DEMO ===\n" << endl;

      Student s1;
      cout << "s1 Details: ";
      s1.display();

      Student s2("Alice", 101, 3.9);
      cout << "s2 Details: ";
      s2.display();

      Student s3(s2);
      cout << "s3 Details (Copied from s2): ";
      s3.display();

      return 0;



 }