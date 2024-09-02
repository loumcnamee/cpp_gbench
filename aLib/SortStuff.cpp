#include "SortStuff.h"



SortStuff::SortStuff()
{
}


SortStuff::~SortStuff()
{
}

void SortStuff::SlowSort(int a[], int i, int j) {
    if (i >= j)
        return;
    int m = i + (j - i) / 2;  // midpoint, implemented this way to avoid
                              // overflow
    int temp;
    SlowSort(a, i, m);
    SlowSort(a, m + 1, j);
    if (a[j] < a[m]) {
        temp = a[j];  // swapping a[j] & a[m]
        a[j] = a[m];
        a[m] = temp;
    }
    SlowSort(a, i, j - 1);
}
