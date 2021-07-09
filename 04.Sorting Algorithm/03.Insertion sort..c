#include<stdio.h>

void insertion_sort(int A[], int n)
{
    int i, j, item;

    for(i=1; i<n; i++){
        item = A[i];

        j = i-1;

        while(j >= 0 && A[j] > item){
            A[j+1] = A[j];
            j = j-1;
        }

        A[j+1] = item;
    }
}

int main()
{
    int A[] = {3,7,4,7,5};
    int n, i;

    n = sizeof(A)/sizeof(A[0]);

    insertion_sort(A, n);

    for(i=0; i<n; i++)
    {
        printf("%d, ", A[i]);
    }

    return 0;
}
