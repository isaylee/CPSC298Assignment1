// Isa Lee
// 2343486
// isalee@chapman.edu
// CPSC 298 - 01 Interterm (C++)
// Assignment 1 - Problem 1

#include <iostream>
using namespace std;

int main()
{
  int ounces = 0;
  cout << "Weight of breakfast cereal in ounces: ";
  cin >> ounces;
  cout << "Weight in metric tons: " << ounces / 35273.92 << endl;
  cout << "One metric ton of cereal is " << 35273.92 / ounces << " boxes" << endl;
}
