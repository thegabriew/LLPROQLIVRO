#include<stdio.h>

int main (){
	
    int i,a, b;
    
    for(a = 1;a <= 10;a++){
        i = 0;
        for(b = 1; b <= 10; b++){
            i = a + b;
            printf("\t%d + %d = %d \t\n",a,b,i);
        }
        printf("\t\n");
    }
    
    return 0;

}

