/* 
Day 2 — Positive, Negative & Zero
Take N integers and count:
Positive numbers
Negative numbers
Zeros
*/
#include<stdio.h>
int main(){
    int n;
    printf("Enter a number to find Positive negative or zero : ");
    scanf("%d",&n);
    if(n > 0){
        printf(" positive number ");
    }
    else if(n < 0){
        printf(" negative number ");
    }
    else{
        printf(" zero ");
    }
    return 0;
}
// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter a number to find PNZ: ");
//     scanf("%d",&n);
//     (n>0)?printf(" positive number "):
//     (n<0)?printf(" Negative number ") : printf("Zero");
//     return 0;
// }