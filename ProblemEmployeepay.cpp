// Isa Lee
// 2343486
// isalee@chapman.edu
// CPSC 298 - 01 Interterm (C++)
// Assignment 1 - Problem 3

#include <iostream>
using namespace std;

int main()
{
  double hoursWorked = 0;
  double standardHours = 0;
  double overtimeHours = 0;
  double grossPay = 0;
  double ssTax = 0;
  double fiTax = 0;
  double siTax = 0;
  double medicalInsurance = 10.0;
  double takeHome = 0;

  cout << "Number of hours worked in a week: ";
  cin >> hoursWorked;

  if(hoursWorked > 40)
  {
    overtimeHours = hoursWorked - 40;
    standardHours = 40;
  }
  else
  {
    standardHours = hoursWorked;
  }

  grossPay = standardHours * 16.0 + overtimeHours * 24.0;
  ssTax = grossPay * 0.06;
  fiTax = grossPay * 0.14;
  siTax = grossPay * 0.05;
  takeHome = grossPay - ssTax - fiTax - siTax - medicalInsurance;

  cout << "Gross pay: $" << grossPay << endl;
  cout << "Social Security tax: $" << ssTax << endl;
  cout << "Federal Income tax: $" << fiTax << endl;
  cout << "State Income tax: $" << siTax << endl;
  cout << "Net take-home pay: $" << takeHome << endl;
}
