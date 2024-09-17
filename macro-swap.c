#include<stdio.h>

int swap(int x, int y, int temp){
    temp = x;
    x = y;
    y = temp;
    printf("After swapping: a = %d and b = %d\n",x,y);
}

int main(){
    int a,b,temp;
    printf("Input 2 numbers to swap: ");
    scanf("%d%d",&a,&b);
    swap(a, b, temp);
    printf("Before swapping: a = %d and b = %d\n",a,b);
    return 0;
}
