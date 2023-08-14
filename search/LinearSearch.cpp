#include <iosream>

using namespace std; 

//  ฅ^•ﻌ•^ฅ

bool LinearSearch(int a[], int n, int value){
  for(int i = 0; i < n; i++)
    if(a[i] == value)
        return true;

  return false;
}
