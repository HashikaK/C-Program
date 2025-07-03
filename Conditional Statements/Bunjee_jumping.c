#include <stdio.h>
int main() {
    int age, weight;
    printf("Enter your age and height: ");
    scanf("%d %d", &age,&weight);    
    if(age>=12){
        if(weight>=40 && weight<=110){
            printf("You can do bunjee jumping");
        }else{
            printf("You cant do bunjee jumping");
        }
    }else{
        printf("Your age exceeds the limit");
    }
}
