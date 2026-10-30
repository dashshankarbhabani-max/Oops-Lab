//Write a C++ program to reverse a sentence using recursion.


#include <iostream>
 using namespace std;

 void reverseSentence() {
     char c;
     cin.get(c);
     if (c != '\n' && c != EOF) {
         reverseSentence();
         cout << c;
     }
 }

 int main() {
     cout << "Enter a sentence: ";
     reverseSentence();
     cout << endl;
     return 0;
 }