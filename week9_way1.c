#include<stdio.h>
#include<stdlib.h>

int main()
{
// define a square
    int num,n,a,b,magicConstant,sumOb1=0,sumOb2=0;
    scanf("%d",&n);
    magicConstant = n*((n*n)+1)/2;
    int square[n][n];
    a = 0;
    b = n-1;
// magic square exist only [1,infinity)-{2} 
    if((n<1)||(n==2))
    {
        printf("No");
        exit(0);
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&num);
// and number in each positin must be between 1 to n^2 , cannot use number which already used (auto "No")
            if(num<1||num>n*n)
            {
                printf("No");
                exit(0);
            }
            square [i][j] = num;
        }
    }
// Check horizontal sum
    for(int j=0;j<n;j++)
    {
        int sumHori = 0;
        for(int i=0;i<n;i++)
        {
            sumHori = sumHori + square [i][j];
        }
        if(sumHori != magicConstant)
        {
            printf("No");
             exit(0);
        }
    }
//Check vertical sum
    for(int i=0;i<n;i++)
    {
        int sumVerti = 0;
        for(int j=0;j<n;j++)
        {
            sumVerti = sumVerti + square [i][j];
        }
        if(sumVerti != magicConstant)
        {
            printf("No");
             exit(0);
        }
    }
//Check oblique sum
    for(int i=0;i<n;i++)
    {
        sumOb1 = sumOb1 + square [i][i];
    }
    if(sumOb1 != magicConstant)
    {
        printf("No");
        exit(0);
    }
    while(a<=n-1&&b>=0)
    {
        sumOb2 = sumOb2 + square [a][b];
        ++a;
        --b;
    }
    if(sumOb2 != magicConstant)
    {
        printf("No");
        exit(0);
    }
    
    printf("Yes");
    return 0;
}
