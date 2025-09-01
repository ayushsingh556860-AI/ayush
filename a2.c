#include<stdio.h>
int main(){
    int a, b;
    printf("The value of a is: ");
    scanf("%d", &a);  

    printf("The value of b is: ");
    scanf("%d", &b);
    
    if(a > b){
        printf("a is greater than b\n");
    }
    else if(a < b){
        printf("b is greater than a\n");
    }
    else{
        printf("a and b are equal\n");
    }
    return 0;
}
