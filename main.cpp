#include "Sort.h"
#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char **argv){
  cout << "Enter sorting method" << endl;
  cout << "(Q)uickSort" << endl;
  cout << "(M)ergeSort" << endl;
  cout << "(S)electionSort" << endl;
  cout << "(I)nsertionSort" << endl;
  cout << "(B)ubbleSort" << endl;
  cin << input;

  ifstream readInput(input);
  file.open(input.txt);

  Sort *sort = new Sort();
  sort->Sort();

  return 0;
}

//no problems here when I compiled
