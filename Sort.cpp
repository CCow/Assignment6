#include "Sort.h"

void Sort::swap(int *arr[x], int *arr[y]){ //https://www.geeksforgeeks.org/quick-sort/
  double temp = *arr[x];
  *arr[x] = *arr[y];
  *arr[y] = temp;
}

void Sort::partition(int arr[], int lowIndex, int highIndex){ //https://www.geeksforgeeks.org/quick-sort/ (3-14)
  int pivot = arr[highIndex];
  int x = lowIndex-1;
  for(int y = loxIndex; y <= highIndex - 1; ++y){
    if(arr[y] < pivot){
      ++y;
      swap(int arr[x], int arr[y]);
    }
  }
}

void Sort::quick(int arr[], int start, int finish){ //https://www.geeksforgeeks.org/quick-sort/
  if(start < finish){
    double pi = partition(arr[], start, finish);

    quickSort(arr, start, pi - 1); //https://www.geeksforgeeks.org/quick-sort/
    quickSort(arr, pi + 1, finish);
  }
}

void Sort::merge(double arr[], int left, int right){ //https://www.geeksforgeeks.org/merge-sort/
  if(left < right){
    midpoint = ()(left + right) / 2); //lost how to finish this method
    //...
  }
}

void Sort::selection(double arr[], int r){ //https://www.geeksforgeeks.org/selection-sort/
  for(int x = 0; x < r - 1; ++x){
    minimum = x; //minimum had issues even when it was declared in header
    for(y = x + 1; y < r; ++x){
      if(arr[y] < arr[minimum]){
        minimum = y;
      }
      swap(arr[minimum], arr[x]);
    }
  }
}

void Sort::insertion(double arr[]){ //https://www.geeksforgeeks.org/insertion-sort/
  for(int x = 0; x < arr[].size; ++x){
    double temp = arr[x];
    int ins = x;
    for(int y = 0; y <= temp; ++y){
      --ins;
    }
    arr[ins] = temp;
  }
}

void Sort::bubble(double arr[]){ //https://www.geeksforgeeks.org/bubble-sort/
  for(int x = 0; x < arr[].size; ++x){
    int temp = 0;
    for(int y = 0; y < arr[].size - 1; ++y){
      if(arr[y]>arr[x]){
        swap(int arr[x], int arr[y]);
      }
    }
  }
}
// geeks for geeks had great visuals for how to work these into code while walking you through the steps
