#include <stdio.h>

// Function to read a matrix
void readMatrix(int a[10][10], int r, int c)
{
    int i, j;
    printf("Enter matrix elements:\n"); 

    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
}

// Function to display a matrix
void displayMatrix(int a[10][10], int r, int c)
{
    int i, j;

    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
}

// Function for matrix addition
void addition(int a[10][10], int b[10][10],
              int r, int c)
{
    int i, j, sum[10][10];

    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }

    printf("Matrix Addition:\n");
    displayMatrix(sum, r, c);
}

// Function for matrix multiplication
void multiplication(int a[10][10], int b[10][10],
                    int r1, int c1, int c2)
{
    int i, j, k, product[10][10];

    for(i = 0; i < r1; i++)
    {
        for(j = 0; j < c2; j++)
        {
            product[i][j] = 0;

            for(k = 0; k < c1; k++)
            {
                product[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    printf("Matrix Multiplication:\n");
    displayMatrix(product, r1, c2);
}

// Function for matrix transpose
void transpose(int a[10][10], int r, int c)
{
    int i, j, trans[10][10];

    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            trans[j][i] = a[i][j];
        }
    }

    printf("Matrix Transpose:\n");
    displayMatrix(trans, c, r);
}

int main()
{
    int a[10][10], b[10][10];
    int r1, c1, r2, c2;

    printf("Enter rows and columns of Matrix A: ");
    scanf("%d%d", &r1, &c1);

    printf("Enter rows and columns of Matrix B: ");
    scanf("%d%d", &r2, &c2);

    printf("Enter Matrix A:\n");
    readMatrix(a, r1, c1);

    printf("Enter Matrix B:\n");
    readMatrix(b, r2, c2);

    if(r1 == r2 && c1 == c2)
        addition(a, b, r1, c1);
    else
        printf("Addition not possible\n");

    if(c1 == r2)
        multiplication(a, b, r1, c1, c2);
    else
        printf("Multiplication not possible\n");

    transpose(a, r1, c1);

    return 0;
}
