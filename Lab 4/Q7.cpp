// Write a C++ program using a constructor, an object pointer and a friend function to find the sum of the elements of a dynamically allocated array.

#include <iostream>
 using namespace std;

 class ArraySum;

 int calculateSum(const ArraySum* ptr);

 class ArraySum {
 private:
     int* arr;
     int size;

 public:
     ArraySum(int n) {
         size = n;
         arr = new int[size];

          cout << "Enter " << size << " elements:" << endl;
          for (int i = 0; i < size; i++) {
              cout << "Element " << i + 1 << ": ";
              cin >> arr[i];
          }
      }

      ~ArraySum() {
          delete[] arr;
      }

      friend int calculateSum(const ArraySum* ptr);
 };

 int calculateSum(const ArraySum* ptr) {
     int sum = 0;

      for (int i = 0; i < ptr->size; i++) {
          sum += ptr->arr[i];
      }

      return sum;
 }

 int main() {
     int n;
     cout << "Enter the size of the array: ";
     cin >> n;

      if (n <= 0) {
          cout << "Invalid array size!" << endl;
          return 1;
      }

      ArraySum obj(n);

      ArraySum* ptr = &obj;



    int totalSum = calculateSum(ptr);

    cout << "\n----------------------------------------" << endl;
    cout << "Sum of all array elements = " << totalSum << endl;
    cout << "----------------------------------------" << endl;

    return 0;
}