#include <iostream>

using namespace std;

//  ฅ^•ﻌ•^ฅ

void SelectionSort(int a[], int n){
    int min_idx = 0;

    for(int i = 0; i < n - 1; i++){
        min_idx = i;
        
        // "select" Minium number from (i + 1) to (n - 1)
        for(int j = i; j < n; j++){
            if(a[min_idx] > a[j]){
                min_idx = j;
            }
        }

        // compare 
        if(a[i] > a[min_idx]){
            swap(a[i], a[min_idx]);
        }
    }

    return;
}


int main(){
    int n = 5;
    int a[] = {5, 4, 3, 2, 1};
    
    SelectionSort(a, n);

    for(int i = 0; i < n; i++)
        cout << a[i] << " ";

    return 0;
}
