#include <stdio.h>
void add(int *a,int *b){
    int c= *a + *b;
    printf("%d",c);
}

int main() {
    int x=5,y=10;
    add(&x,&y);
}
