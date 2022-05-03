#include <stdio.h>

void swap(int x, int y){
    int temp;

    temp = x;
    x = y;
    y = temp;

    printf("After swapping: a = %d and b = %d\n", x, y);
}

int main(){
    
    int a, b;

    printf("Enter any two integers\n");
    scanf("%d%d", &a, &b);

    printf("Before swapping: a = %d and b = %d\n", a, b);

    swap(a, b);

    return 0;
}