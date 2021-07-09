#include<stdio.h>

int linear_search(int A[], int n, int x)
{
    int i;
    for(i=0; i<n; i++)
    {
        if (A[i]  == x){
            return i;
        }
    }

    i = -1;
    return i;
}

int main()
{
    int A[]={9,8,7,6,5,4};
    int n, x, i;

    n = sizeof(A)/sizeof(A[0]);
    x=5;

    i = linear_search(A, n, x);

    if(i != -1)
    {
        printf("Found at index %d", i);
    }
    else
    {
        printf("Not found!");
    }

}
