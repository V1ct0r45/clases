#include <stdio.h>

int main()
{
    int m[2][2];
    int j =0, i=0;

    int *ptr=*m;
        for (int i = 0; i < 4; i++)
        {
            (*(ptr+i))=i;
        }
        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                printf("%d ",m[i][j]);
            }
            
        }
        


    
    return 0;
}

