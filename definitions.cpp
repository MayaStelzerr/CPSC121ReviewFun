/*
 Name: Maya Stelzer
 Class: CPSC 122, Spring 2023
 Date: January 26, 2023
 Description:
 Notes:
*/

#include "header.h"

void fillVector(vector<int> &vector) {
  int num;
  for (int i = 0; i < 5; i++) {
    cout << "Enter an integer: ";
    cin >> num;
    vector.push_back(num);
  }
}

int findSmallest(vector<int> &vector){
  int smallest = vector.at(0); 
  for (int i = 0; i < vector.size(); i++){
    if (vector.at(i) < smallest){
      smallest = vector.at(i);
    }
  }
  return smallest;
}

int findLargest(vector<int> & vector){
  int largest = vector.at(0);
  for (int i = 0; i < vector.size(); i++){
    if (vector.at(i) > largest){
      largest = vector.at(i);
    }
  }
  return largest;
}