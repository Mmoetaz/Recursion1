/*TOPIC:
    Create a function that calculates the factorial result of a given number using recursion.
    ej:factorial of 5 is ==> 5!=1x2x3x4x5=120

*/
#include<stdio.h>
int fact (int n){
    if(n==0)
        return 1;
    else return n*fact(n-1);

}



int main(){
    int n;
    printf("Number:\t");
    scanf("%d",&n);
    printf("\n%d!=%d",n,fact(n));
    return 0;
}
