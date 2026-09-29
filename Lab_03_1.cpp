//Lab_03_1.cpp
//Білоус Катерина
//Лабораторна робота № 3.1
//Розгалуження, задане формулою: функція однієї змінної.
//Варіант 2

#include <iostream>
#include <cmath>

using namespace std;

int main () {
  double x; //вхідний параметр
  double y; // резултат обчислення 
  double A; // проміжний результат - функціонально стала частина виразу
  double B; // проміжний результат - функціонально змінна частина виразу

  cout << "x = "; cin >> x; 

  A = 1.0 / 4.0 + 4;

  if (x < 1)
    B = 0.65 * x + 8;
  if (x >= 1 && x < 5) 
    B = atan((x + 6.1)/2 + exp(x));
  if (x >= 5)
    B = sqrt(1 + sqrt(x));

  y = A - B;

  cout << endl;
  cout << "1) y = " << y << endl;

  if (x < 1)
    B = 0.65 * x + 8;
  else
    if (x >= 1 && x < 5) 
      B = atan((x + 6.1) / 2 + exp(x));
    else
      B = (sqrt(1 + sqrt(x)));

  y = A - B;

  cout << "2) y = " << y << endl;

  cin.get();
  return 0;
}