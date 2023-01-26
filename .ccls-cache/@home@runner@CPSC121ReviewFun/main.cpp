/*
 Name: Maya Stelzer
 Class: CPSC 122, Spring 2023
 Date: January 26, 2023
 Description:
 Notes:
*/

#include "header.h"

int main() {
  vector<int> userNums;
  cout << "Hello World!\n";
  fillVector(userNums);
  cout << "size: " << userNums.size() << endl;

  cout << "The smallest number is " << findSmallest(userNums) << endl;
  cout << "The largest number is " << findLargest(userNums) << endl;
}