#include <stdio.h>

int main(){
    int *p,n ;
    printf("Enter the value of n:") ;
    scanf("%d",&n);
    p = (int*)calloc(n,sizeof(int));
    if (p==NULL) {
        printf("CANNOT ALLOCATE THE MEMORY");
    }
    else {
        for (int i = 0; i < n; i++)
        {
            scanf("%d",p+i) ;
        }
    }

    int max=1,min=__INT_MAX__;
    for (int i = 0; i < n; i++)
    {
        if(*(p+i)<min) {
            min=*(p+i) ;
        }
        if (*(p+i)>max) {
            max=*(p+i) ;
        }
    }
    printf ("MAX VALUE:%d\nMIN VALUE:%d\n",max,min);
    free(p);
    return 0 ;
}

    
