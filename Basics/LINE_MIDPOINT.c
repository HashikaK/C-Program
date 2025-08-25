#include <stdio.h>

int main(){
    int x1,x2,y1,y2,x,y;
    printf("Enter the co-ordinates: ");
    scanf("%d %d %d %d",&x1,&x2,&y1,&y2);
    x=(x1+x2)/2;
    y=(y1+y2)/2;
    printf("The Location is at (%d,%d)",x,y);

    return 0;

}