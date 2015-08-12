//Milton Christian Baez
//8.11.2015 - Christian
//C programming - Sieve of Erastosthenes Algorithm
//Ongoing project to keep my coding skills in check

#include <stdio.h>

int intArray[120],n = 0,i,l;

int main (){
    
    //statement to detect changes in code - debug
    printf("check statement\n");
    
    //initial for loop for creating an array with all the numbers from 2 to 120
    for(i=2;i<121;i++){
        
        intArray[n] = i;
        
        printf("%d\n",intArray[n]);
        
        n += 1;
        
    }
    
    for(i=3;i<121;i++){
        
        for(l=2;l<121;l++){
            
            if(i % l == 0){
                
                intArray[i] = 0;
                
            }
        }
        
    }
    
    
    
return 0;
}