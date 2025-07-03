#include <stdio.h>

int main() {
    int price, sold,cp,sp,x,y;
    printf("Enter the price of dozen mangoes and SP of 1 mango: ");
    scanf("%d %d",&price,&sold);
    sp=sold*12;
    x=sp-price;
    y=price-sp;
    if(sp>price){
        printf("profit of %d",x);
    }
    else if(price>sp){
        printf("Loss of %d",y);
    }
    else{
        printf("No gain no loss");
    }
  return 0;
}
