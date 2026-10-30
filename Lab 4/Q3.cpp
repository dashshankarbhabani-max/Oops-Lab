//Write a C++ program using a class to add two matrices

#include <iostream>
 using namespace std;

 class Matrix {
 private:
     int rows;
     int cols;
     int mat[10][10];

 public:
     Matrix(int r = 0, int c = 0) : rows(r), cols(c) {}

      void input() {
          cout << "Enter elements for " << rows << "x" << cols << " matrix:" << endl;
          for (int i = 0; i < rows; i++) {
              for (int j = 0; j < cols; j++) {
                  cout << "Element [" << i << "][" << j << "]: ";
                  cin >> mat[i][j];
              }
          }
      }

      Matrix add(const Matrix& m) {
          Matrix temp(rows, cols);
          for (int i = 0; i < rows; i++) {
              for (int j = 0; j < cols; j++) {
                  temp.mat[i][j] = mat[i][j] + m.mat[i][j];
              }
          }
          return temp;
      }

      void display() const {
          for (int i = 0; i < rows; i++) {
              for (int j = 0; j < cols; j++) {
                  cout << mat[i][j] << "\t";
              }
              cout << endl;
          }
      }
 };

 int main() {
     int r, c;
     cout << "Enter number of rows and columns for matrices: ";
     cin >> r >> c;

      Matrix m1(r, c), m2(r, c), result(r, c);

      cout << "\n=== MATRIX 1 ===" << endl;
      m1.input();

      cout << "\n=== MATRIX 2 ===" << endl;
      m2.input();

      result = m1.add(m2);

      cout << "\n--- Matrix 1 ---" << endl;
      m1.display();

      cout << "\n--- Matrix 2 ---" << endl;
      m2.display();

      cout << "\n--- Resultant Matrix (Sum) ---" << endl;
      result.display();

      return 0;
 }