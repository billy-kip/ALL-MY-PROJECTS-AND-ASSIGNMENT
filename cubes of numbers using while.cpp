// cube of numbers using while
#include <stdio.h>

int main() {
    int n,i,cube;
    
    printf("enter the number:");
    scanf("%d",&n);
    printf("number is %d\n",n);
    
    while(i<=n){
        cube=i*i*i;
        printf("the number is %d\n",i);
        printf("the cube of %d is %d\n",i,cube);
        i++;
    }
    return 0;
}
