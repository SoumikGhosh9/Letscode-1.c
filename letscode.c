#include <stdio.h>
int main(){
    int a,b;
    int c;
    printf("Enter the value of a: ");
    scanf("%d", &a);
    printf("Entre the value of b: ");
    scanf("%d", &b);
    printf("Enter your operation: 1 for addition\n  2 for substraction\n 3 for multiplication \n 4 for division\n   5 for average\n");
    scanf("%d", &c);
    switch (c)
    {
    case 1:
        printf("%d",a+b);   // 1 for addition
        break;              // 2 for substraction
        case 2:             // 3 for multiplication
        printf("%d",a-b);   // 4 for division
        break;              // 5 for average
        case 3:
        printf("%d",a*b);
        break;
        case 4:
        printf("%d",a/b);
        break;
        case 5:
        printf("%d",(a+b)/2); // '_' is used here for calculating average
        break;
        default:
        printf("Your input is wrong\n Check again");
        break;
    
   
    }
    return 0;
}