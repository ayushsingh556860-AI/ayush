#include<stdio.h>
int main(){
    int a, b ,c;
    printf("The value of a is: ");
    scanf("%d", &a);  

    printf("The value of b is: ");
    scanf("%d", &b);
    
    printf("The value of c is: ");
    scanf("%d", &c); 
    
    if(a > b && a > c){
        printf("a is greatest\n");
    }
    else if(b > a && b > c){
        printf("b is greatest\n");
    }
    else if(c > a && c > b){
        printf("c is greatest\n");
    }
    else{
        printf("Some numbers are equal\n");
    }
    
    return 0;
}
