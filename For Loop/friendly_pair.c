#include<stdio.h>
int main(){
   int n1,n2,r1=0,r2=0;
   printf("Enter two numbers:");
   scanf("%d %d",&n1,&n2);
   
   for(int i=1;i<n1;i++){
      if(n1 % i == 0){
         r1= r1 +i;
      }
   }
   for(int i=1;i<n2;i++){
      if(n2 % i == 0){
         r2=r2+i;
      }
   }
   if(r1==n1 && r2==n2)
      printf("Friendly Pair");
   else
      printf("Not Friendly Pairs");
   return 0;
}
