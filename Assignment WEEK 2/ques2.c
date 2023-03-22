#include <stdio.h>
int main()
{
    int a1[4] = {9, 8, 7, 6};
    int a2[5] = {5, 4, 3, 2, 1};
    int merge[9], i, j,k;
    for (i = 0; i < 4; i++)
    {
        merge[i] = a1[i];
    }
        for (j = 0; j < 5; j++)
        {
            merge[i + j] = a2[j];
        }
    for(k=8;k>=0;k--){
        printf("%d",merge[k]);
    }
    return 0;
}