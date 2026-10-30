// Write a C++ program using a class with a default constructor to generate the Fibonacci series up to n terms

#include <iostream>
 using namespace std;

 class Fibonacci {
 private:
     int n;
     int first;
     int second;

 public:
     Fibonacci() {
         n = 0;
         first = 0;
         second = 1;
     }

      void input() {
          cout << "Enter the number of terms (n): ";
          cin >> n;
      }

      void generate() {
          if (n <= 0) {
              cout << "Please enter a positive integer." << endl;
              return;
          }

          cout << "Fibonacci Series (" << n << " terms): ";

          int a = first;
          int b = second;

          for (int i = 1; i <= n; i++) {
              cout << a << " ";
              int nextTerm = a + b;
              a = b;
              b = nextTerm;
          }
          cout << endl;
      }
 };





 int main() {
     Fibonacci fib;

      fib.input();
      fib.generate();

      return 0;
 }