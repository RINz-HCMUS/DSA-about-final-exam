#include <iostream>


using namespace std;

//  ฅ^•ﻌ•^ฅ

void Quicksort(int a[], int l, int r)
{
    if (l < r)
    {
        int i = l, j = r;
        int m = (l + r) / 2;

        int pivot = a[m];

        while(i <= j){
            // find a[i] > pivot from a[l] to [m]
            while(a[i] < pivot){
                i++;
            }
            // find a[j] < pivot from a[r] to a[m]
            while(a[j] > pivot){
                j--;
            }

            if(i <= j){
                swap(a[i], a[j]);
                i++;
                j--;
            }
        }

        if (l < j)
            Quicksort(a, l, j);
        if (i < r)
            Quicksort(a, i, r);
    }
}


int main(){
    int n = 8;
    int a[] = {100, 23, 31, 54, 232, 2004, 11, 1};

    Quicksort(a, 0, n - 1);

    for(int i = 0; i < n; i++)
        cout << a[i] << " ";

    return 0;
}
