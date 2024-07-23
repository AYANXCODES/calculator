#include <stdio.h>
int main (){
    int a,b,res;
    char opr;
    printf("enter the operator\n");
    scanf("%c",&opr);
    printf("Enter the first number\n");
    scanf("%d",&a);
    printf("Enter the second  number\n");
    scanf("%d",&b);
    switch (opr)
    {
    case '+':
        res=a+b;
        printf("your answer is %d",res);
        break;
    case '-':
        res=a-b;
        printf("your answer is %d",res);
        break;   
    case '*':
        res=a*b;
        printf("your answer is %d",res);
        break;
    case '/' :
         float res=  a/b;
         printf("your answer is %.2f",res);
        break;
    
    
    default:
        printf("your opertor is wrong try again");
        break;
    }
   
    return 0;
}
