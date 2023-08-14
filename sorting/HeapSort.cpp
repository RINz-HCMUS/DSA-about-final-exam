#include <iostream>


using namespace std;

//  ฅ^•ﻌ•^ฅ

// Time Comp: O(n log n)
// Space Comp: O(log n)

void heapify(int a[], int n, int i){
    int idx = i;
    int l = i * 2 + 1;
    int r = i * 2 + 2;

    if(l < n && a[idx] < a[l]){
        idx = l;
    }

    if(r < n && a[idx] < a[r]){
        idx = r;
    }

    if(idx != i){
        swap(a[i], a[idx]);
        heapify(a, n, idx);
    }
}


void HeapSort(int a[], int n){
    for(int i = n / 2 - 1; i >= 0; i--)
        heapify(a, n , i);
    
    for(int i = n - 1; i > 0; i--){
        swap(a[0], a[i]);
        heapify(a, i, 0);
    }

}
int main(){
    int n = 10;
    int a[] = {2023, 23, 2, 2004, 123, 6, 43, 21, 99, 12};

    HeapSort(a, n);

    for(int i = 0 ; i < n; i++)
        cout << a[i] << " ";

    return 0;
}
