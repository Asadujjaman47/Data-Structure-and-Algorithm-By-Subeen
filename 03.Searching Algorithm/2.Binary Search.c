#include<stdio.h>

int binary_search(int A[], int n, int x)
{
    int left, right, mid;
    left = 0;
    right = n-1;

    while(left <= right)
    {
        mid = left + (right - left)/2;

        if(A[mid] == x){
            return mid;
        }

        if(A[mid] < x){
            left = mid+1;
        }
        else{
            right = mid-1;
        }
    }
    return -1;
}

int main()
{
    int A[]={1,2,3,4,5,6,7};
    int n, x, i;

    n = sizeof(A)/sizeof(A[0]);
    x=6;

    i = binary_search(A, n, x);

    if(i == -1)
    {
        printf("Not found!");

    }
    else
    {
        printf("Found at index %d", i);
    }

}
