#include<stdio.h>
int main(){
    int a,b;
    char ch;
    printf("Enter 1 to input ASCII value and 2 to input a character: ");
    scanf("%d", &a);
    if (a == 1){
        printf("Enter the ASCII value: ");
        scanf("%d",&b);
        if ((b >= 65 && b <= 90 ) || ( b >= 97 && b <= 122 )){
            if (b == 65 || b == 69 || b == 73 || b == 79 || b == 85 || b == 97|| b == 101 || b == 105 || b == 111 || b == 107){
                printf("The given ASCII value is of a vowel");
            }
            else{
                printf("The given ASCII value is not of a vowel");
            }
    }
        else{
            printf("The given ASCII value is not of an alphabet");
        }
    }
    else if (a == 2){
        printf("Enter a single character: ");
        scanf("%c", &ch);
        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' || ch <= 'Z') ){
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'|| ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U'){
                printf("The given character is a vowel");
            }  
            else{
                printf("The given character is not a vowel");
            }
        }
        else{
            printf("Invalid input. Please enter an alphabet.");
        }
    }
    else{
        printf("Invalid input");
    }
    return 0;
}