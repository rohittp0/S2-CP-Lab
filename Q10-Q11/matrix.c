#include <stdio.h>

int* readMatrix(int* mat,int m, int n)
{
    for(int i=0;i<m;i++)
        for(int j=0; j<n; j++)
            scanf("%d",(mat+i*m)+j);

    return mat;        
}

void printMatrix(int *matPtr, int n, int m)
{
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++)
            printf("%2d ",*((matPtr+i*m)+j));
        printf("\n");    
    }
}

int multiplyMatrix(int *mat1, int *mat2,int m, int n, int p, int q)
{
    if(n != p)
        return printf("Cant find product with these dimensions.\n"),1;

    int product[m][q];

    for(int i=0; i<m; i++)
        for(int j=0; j<q; j++)
            for(int k=0; k<n; k++)
                product[i][j] = *((mat1+m*i)+k) * *((mat2+k*p)+j) + product[i][j]*(k > 0);    

    printf("Matrix product = \n");
    printMatrix(*product,m,q);            
}

int addMatrix(int *mat1, int *mat2,int m, int n, int p, int q)
{
    if(m != p || n != q)
        return printf("Cant add matrix of this order\n"), 1;

    printf("Matrix 1 + Matrix 2 = \n");

    for(int i=0; i<m; i++)
        for(int j=0; j<n; j++)
            *((mat1+i*m)+j) += *((mat1+i*m)+j);

    printMatrix(mat1,m,n);    
}


int main()
{
    int m,n,p,q;

    printf("Enter dimensions of first matrix : ");
    scanf("%d %d",&m, &n);

    printf("Enter first matrix \n");

    int tmp1[m][n];
    int *mat1 = readMatrix(*tmp1,m,n);

    printf("Enter dimensions of second matrix : ");
    scanf("%d %d",&p, &q);

    printf("Enter second matrix \n");

    int tmp2[p][q];
    int *mat2 = readMatrix(*tmp2,p,q);

    return multiplyMatrix(mat1, mat2,m,n,p,q) + addMatrix(mat1, mat2,m,n,p,q);  
}