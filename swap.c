#include <stdio.h>
void swap(int *a, int *b);
int main(){
    int *x = 5;
    int *y = 10;
    printf("x:   %p\n",x);
    printf("y:   %p\n",y);
    swap(x,y);
    printf("x:   %p\n",x);
    printf("y:   %p\n",y);
    printf("x..%d  y..%d\n",*x,*y);
    return 0;
}
void swap(int *a, int *b){
    int *temp;
    temp = a;
    a = b;
    b =temp;
}
