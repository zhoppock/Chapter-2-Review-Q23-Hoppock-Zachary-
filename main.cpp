//Zachary Hoppock
//multiplication.cpp
//9/13/2020
//Multiply a set of numbers altogether
//Version #1
#include <iostream>
#include <cmath>

using namespace std;
int main()
{

  cout << "Calculate the following:\n3 * 1000 * 1000 * 10003.0 * 1000 * 1000 * 1000" << endl;
  int number_1 = 3;
  int number_2 = 1000;
  double number_3 = 10003.0;

  cout << "Here are the numbers that will be multiplied together:" << endl;
  cout << number_1 << endl;
  cout << number_2 << endl;
  cout << number_2 << endl;
  cout << number_3 << endl;
  cout << number_2 << endl;
  cout << number_2 << endl;
  cout << number_2 << endl;

  double product = number_1 * pow(number_2, 5) * number_3;
  cout << "The product of all these numbers is " << product;
  return 0;
}