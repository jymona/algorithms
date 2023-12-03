# include <iostream>
# include <cstring>
# include <algorithm>
using namespace std;
const int N = 100010;

int n;
int q[N];

void quicksort(int q[], int l, int r)
{
    if (l>=r) return;
    int x = q[(l+r+1)/2];
    int i=l-1, j=r+1;
  
    while(i<j){
        do i++; while(q[i]>x);
        do j--; while(q[j]<x);
        if (i<j) swap(q[i], q[j]);
    }

    quick_sort(q, l, i-1);
    quick_sort(q, i, r);
    
}

int main(){
    cin >> n;
    for (int i=0; i<n; i++) scanf("%d", &q[i]);
    quicksort(q, 0, n-1);
    for (int i=0; i<n; i++) printf("%d, q[i]);
    return 0;  
}
