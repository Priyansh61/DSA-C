#include <stdio.h>
#include <stdlib.h>  
#include <time.h>

void populate(int *A, int *B, int *C,int n , int m){
    int num, i;  
    time_t t1;
    srand ( (unsigned) time (&t1));
    for (int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            *(A+i+j)=rand();
        }
    }
    
    for (int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            *(B+i+j)=rand();
        }
    }
       
    for (int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            *(C+i+j)=rand();
        }
    }
}

void subtract(int **A,int **B,int **C,int n,int m)
{
    int INPUT_CHOICE;
    printf  ("FOR THE A-B INPUT CHOICE IS 1\nFOR THE B-C INPUT CHOICE IS 2\nFOR THE A-C INPUT CHOICE IS 3\n");
    printf ("PRESS THEE INPUT CHOICE:");
    scanf ("%d",&INPUT_CHOICE);
    if (INPUT_CHOICE==1)
    {
        for (int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                printf ("%d ",((*A+i+j)-(*B+i+j)));
            }
           printf("\n");
        }
    } 

    else if (INPUT_CHOICE==2)
    {
        for (int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                printf ("%d ",((*B+i+j)-(*C+i+j)));
            }
            printf("\n");
        }
     } 
     else
     {
         for (int i=0;i<n;i++)
         {
            for(int j=0;j<m;j++)
            {
                printf ("%d ",((*C+i+j)-(*A+i+j)));
            }
           printf("\n");
        }
    }  
}


int main() {
    int n,m;
    int *A,*B,*C;
    printf ("ENTER THE VALUE OF N:");
    scanf("%d",&n);
    printf ("ENTER THE VALUE OF M:");
    scanf("%d",&m);
    A=(int*)calloc(n*m,sizeof(int)) ;
    B=(int*)calloc(n*m,sizeof(int));
    C=(int*)calloc(n*m,sizeof(int));

    if(A==NULL || B==NULL || C==NULL) {
        printf ("CANNOT ALLOCATE THE MEMORY");
        return 0;
    }
    populate(&A,&B,&C,n,m);
    subtract(&A,&B,&C,n,m);
    free(A);
    free(B);
    free(C);

   return 0;
}