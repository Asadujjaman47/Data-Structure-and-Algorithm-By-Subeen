#include<stdio.h>

void bubble_sort(int A[], int n)
{
    int i, j, temp;

    for(i=0; i<n; i++){
        for(j=0; j<n-i-1; j++)
        {
            if(A[j] > A[j+1]){
                temp = A[j];
                A[j] = A[j+1];
                A[j+1] = temp;
            }
        }
    }
}

int main()
{
    int A[] = {3,7,4,7,5};
    int n, i;

    n = sizeof(A)/sizeof(A[0]);

    bubble_sort(A, n);

    for(i=0; i<n; i++)
    {
        printf("%d, ", A[i]);
    }

    return 0;
}

