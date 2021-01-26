// Isa Lee
// 2343486
// isalee@chapman.edu
// CPSC 298 - 01 Interterm (C++)
// Assignment 1 - Problem 2

#include <iostream>
using namespace std;

int main()
{
  int roomCapacity = 0;
  int attendees = 0;

  cout << "Room capacity: ";
  cin >> roomCapacity;
  cout << "Number of meeting attendees: ";
  cin >> attendees;

  if(attendees <= roomCapacity)
    cout << "It is legal to hold the meeting. Number of possible additional attendees: " << roomCapacity - attendees << endl;
  else
    cout << "The meeting exceeds the maximum room capacity and cannot be held as planned due to fire regulations. Number of people that must be excluded in order to meet fire regulations: " << attendees - roomCapacity << endl;
}
