#include<stdio.h>

void showmatrix(int r, int c, int arr[r][c])
{
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++) 
        {
            printf("%d  ",arr[i][j]);
            if(j == (c-1))
            {
                printf("\n");
            }
        }
    }
}

void getmatrix(int r, int c, int arr[r][c])
{
    printf("enter the matrix elements by row-");
    for(int i=0;i<r;i++)    
    {    
        for(int j=0;j<c;j++)    
        {    
            scanf("%d",&arr[i][j]);  
        }    
    }    
}


int main()
{
    int row, column,r,c,r1,c2;
    printf("Enter the row and columns of first matrix-");
    scanf("%d %d",&row,&column);
    int matrix1[row][column];
    getmatrix(row, column,matrix1);
    printf("Your matrix is:- \n");
    showmatrix(row,column, matrix1);
    c = column; r1 = row;
    
    printf("Enter the row and columns of second matrix-");
    scanf("%d %d",&row,&column);
    int matrix2[row][column];
    getmatrix(row, column,matrix2);
    printf("Your matrix is:- \n");
    showmatrix(row,column, matrix2);
    r = row;
    c2 = column;
    int mul[r1][c2];
    if(r !=c)
    {
        printf("These matrixes cannot be multiplied");
    }
    else
    {
        printf("multiply of the matrixes-\n");    
        for(int i=0;i<r1;i++)    
        {    
            for(int j=0;j<c2;j++)    
            {    
                mul[i][j]=0;    
                for(int k=0;k<r;k++)    
                {    
                    mul[i][j]+=matrix1[i][k]*matrix2[k][j];    
                }    
            }    
        }
        showmatrix(r1,c2,mul);   
    }
    
    return 0;
}