#include <stdio.h>

int main() {
    int age, income;
     printf("please enter age:\n");
    scanf("%d",&age);
    printf("please enter income:\n");
     scanf("%d", &income);
     if (age>= 21 && income>= 21000){
     printf("congragulations you qualify for a loan");
     }
     
    
    else{
        printf("no loan");
   
    }
    
    return 0;
}
