#include <stdio.h>

int main() {
    int num1,num2;
    
    printf("Enter num1: ");
    scanf("%d",&num1);
    
    printf("Enter num2: ");
    scanf("%d",&num2);
    
    if(num1%num2==0){
        printf("num1 is divisible by num2\n");
        printf("and the value is ");
        printf("%d",num1/num2);
    }
    
    else {
        printf("num1 is not divisible by num2\n");
    }

    return 0;
}
