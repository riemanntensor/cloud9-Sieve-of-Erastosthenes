//Milton Christian Baez
//8.11.2015 - Christian
//C programming - Sieve of Erastosthenes Algorithm

#include <stdio.h>

int intArray[120],n = 0,i;

int main (){
    
    printf("check statement\n");
    
    for(i=2;i<121;i++){
        
        intArray[n] = i;
        printf("%d\n",intArray[n]);
        n += 1;
        
    }
    
    printf("%d\n",intArray[3]);
    
    
    
return 0;
}