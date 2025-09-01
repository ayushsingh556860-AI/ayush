#include <stdio.h>

int main() {
    char letter;
    
    printf("Enter letter: ");
    scanf("%c",&letter);
    
    if(letter >= 'a' && letter <= 'z'){
        printf("It belongs to Lower case");
        
    }
    else if(letter >= 'A' && letter <= 'z'){
        printf("It belongs to Upper case");
    }
    
    else {
        printf("Not a valid letter");
    }

    return 0;
}
