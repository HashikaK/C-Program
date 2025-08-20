#include <stdio.h>

int main(){
    int rows;
    printf("Enter number of rows: ");
    scanf("%d",&rows);
    for(int i=0;i<rows;i++){
        for(int j=1;j<=rows;j++){
            printf("%d ",(i+j)%2);
        }
        printf("\n");
    }
    return 0;
}