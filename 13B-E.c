#include<stdio.h>
int main()
{
    int i, j, k=5;
    
    for(i = 1; i <= k; i++)
    {
        for(j = 1; j <= k; j++)
        {
            if(i == 1 || i == k || j == 1 || j == k )
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }         
        }
        printf("\n");   
    }
}
