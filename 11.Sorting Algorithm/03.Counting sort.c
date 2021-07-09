#include<stdio.h>

int main()
{
    int A[] = {3, 4, 1, 6, 2, 4, 9, 7, 8, 4, 2, 1};

    int n = sizeof(A)/sizeof(A[0]); //12

    int i, x, j;

    int count[11];

    for(i=0; i<11; i++){
        count[i] = 0;
    }

    for(i=0; i<n; i++){
        x = A[i];
        count[x] = count[x] + 1;
    }

    for(i=0; i<11; i++){
        printf("index : %d, value : %d\n", i, count[i]);
    }

    for(i=0; i<11; i++){
        //printf("index : %d, value : %d\n", i, count[i]);
        for(j=0; j<count[i]; j++){
            printf("%d ", i);
        }
        //printf("\n");
    }


    return 0;
}
