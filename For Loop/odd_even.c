#include <stdio.h>

int main() {
    int num=10;
    //scanf("%d",&num);
    for(int i=0;i<=num;i++){
        if(i%2==0){
            printf("%d even\n",i);
        }
        else{
            printf("%d odd\n",i);
        }
     }
    return 0;
}
