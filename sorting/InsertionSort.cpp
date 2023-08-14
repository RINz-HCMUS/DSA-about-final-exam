#include <iostream>

using namespace std;

//  ฅ^•ﻌ•^ฅ

void InsertionSort(int a[], int n){
    int tmp, j;
    
    for(int i = 1; i < n; i++){
        tmp = a[i];
        j = i - 1;

        while (0 <= j && a[j] > tmp){
            a[j + 1] = a[j];
            j = j - 1;
        }
        a[j + 1] = tmp;
    }

    return;
}


int main(){
    int n = 5;
    int a[] = {5, 4, 3, 2, 1};
    
    InsertionSort(a, n);

    for(int i = 0; i < n; i++)
        cout << a[i] << " ";

    return 0;
}
