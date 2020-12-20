#include <iostream>
#include <fstream>
#include <array>

using namespace std;

class Sort{
  public:
    int midpoint;
    int minimum;
    double arr = new array[];

    //Quick, Merge, Selection, Insertion, Bubble
    void quick(double arr[], int start, int finish);
    void merge(double arr[], int left, int right);
    void selection(double arr[], int r);
    void insertion(double arr[]);
    void bubble(double arr[]);

    void partition(double arr[], int start, int finish);

  private:
}
