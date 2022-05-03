#include<stdio.h>

int check(int num){
    if(num%2==0){
        return 1;
    }
    else{
        return 0;
    }
}

int main(){

    int a;
    printf("Enter any number: \n");
    scanf("%d", &a);

    if(check(a) == 1){
        printf("%d number is even", a);
    }
    else{
        printf("%d number is odd", a);
    }

    return 0;
}