#include <iostream>

using namespace std;

//  ฅ^•ﻌ•^ฅ

// Note: a[] is an ordered array
bool BinarySearch(int a[], int n, int value){
  int left = 0, right = n - 1, mid;
  
  while(left <= right){
    mid = left + (right - left) / 2;
    if(a[mid] == value)  
      return true;            
    else if(a[mid] < value)
      left = mid + 1;
    else
      right = mid - 1;
  }

  return false;
}
