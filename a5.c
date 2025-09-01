#include <stdio.h>
int main(){
    int a;
    
    printf("Enter number a:");
    scanf("%d",&a);
    
    if(a>0){
        printf("The number a is positive");
    }
    
    else if(a<0){
        printf("The number a is negative");
    }
    
    else {
        printf("The number a is zero");
    }
    return 0;
}
