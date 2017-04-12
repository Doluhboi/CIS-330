
	
#include <stdio.h>
#include <stdlib.h>
int main(){
    int *a = malloc(21*sizeof(int));
    a[0] = 0;
    a[1] = 1;
    
    for (int i = 2; i < 21; i ++){
        a[i] = a[i-1]+a[i-2];
	printf("%d\n" ,a[i]);
    }
    int *b[3] = {a,a+7,a+14};
   
   
    printf("\n%p\n",b[0] ); 
}

