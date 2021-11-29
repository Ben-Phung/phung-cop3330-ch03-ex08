/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Ben Phung
 */

#include <iostream>
#include "std_lib_facilities.h"

using namespace std;

int main() {

  int input;

  cout << "Enter a number: ";
  cin >> input;
  
  if(input%2 == 0)
  {
    cout << "The value "<<input<<" is an even number";
  }
  else
  {
    cout << "The value "<<input<<" is an odd number";
  }
} 