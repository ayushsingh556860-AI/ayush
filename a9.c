#include <stdio.h>

int main() {
    int marks;
    
    printf("Enter marks: ");
    scanf("%d",&marks);
    
    if(marks<=100 && marks>=90){
        printf("Your Grade is 'A' ");
    }
     
    else if(marks<90 && marks>=75){
        printf("Your Grade is 'B' ");
    }    
        
    else if(marks<75 && marks>=60){
        printf("Your Grade is 'C' ");
    }       
    
    else if(marks<60 && marks>=40){
        printf("Your Grade is 'D' ");
    }    
      return 0;
}
