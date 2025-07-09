#include <stdio.h>
void swap(int *a,int *b){
    int temp= *a;
    *a = *b;
    *b = temp;
    printf("%d %d",*a,*b);
}
int main(){
    int x=5,y=10;
    swap(&x,&y);
}

