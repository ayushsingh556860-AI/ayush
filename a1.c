#include<stdio.h>
int main(){
    int a;
    printf("The number a is:");
    scanf("%d",&a);
    if(a%2 ==0){
        printf("The number is even\n");
    }
    else{
        printf("The number is odd");
    }
    return 0;
}
