#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a=0,b=1,nt;
    printf("%d %d ",a,b);
    for (int i=2;i<=n;i++){
        nt=a+b;
        a=b;
        b=nt;
        printf("%d ",nt);
    }
    return 0;
}