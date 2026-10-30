//  Write a C++ program using a class to add two complex numbers.

#include <iostream>
 using namespace std;

 class Complex {
 private:
     float real;
     float imag;

 public:
     void input() {
         cout << "Enter real part: ";
         cin >> real;
         cout << "Enter imaginary part: ";
         cin >> imag;
     }

      Complex add(const Complex& c) {
          Complex temp;
          temp.real = real + c.real;
          temp.imag = imag + c.imag;
          return temp;
      }

      void display() const {
          if (imag >= 0)
               cout << real << " + " << imag << "i" << endl;
          else
               cout << real << " - " << -imag << "i" << endl;
      }
 };

 int main() {
     Complex c1, c2, result;

      cout << "=== COMPLEX NUMBER 1 ===" << endl;
      c1.input();

      cout << "\n=== COMPLEX NUMBER 2 ===" << endl;
      c2.input();

      result = c1.add(c2);

      cout << "\n-----------------------" << endl;
      cout << "First Number : "; c1.display();
      cout << "Second Number : "; c2.display();
      cout << "Sum           : "; result.display();

      return 0;
 }