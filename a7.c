#include <stdio.h>

int main() {
    int num1,num2;
    char operators;
    
    printf("Enter an operator(+,/,-,*):");
    scanf("%c",&operators);
    
    printf("Enter num1:");
    scanf("%d",&num1);
    
    printf("Enter num2:");
    scanf("%d",&num2);
    
    if(operators =='+'){
        printf("%d",num1+num2);
    }
    
    else if(operators =='-'){
        printf("%d",num1-num2);
    }
    
    else if(operators =='/'){
        if(num1%num2==0){
            printf("num1 is divisible by num2\n");
            printf("%d\n",num1/num2);
            
        }
        
        else if(num1/num2!=0){
            printf("num1 is not divisible by num2\n");
            printf("%.3f\n",num1/num2);
        }
        
        else {
            printf("The value cannot be find");
        }
    }
    
    else if(operators =='*'){
        printf("%d",num1*num2);
    }

    return 0;
}
