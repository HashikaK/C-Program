#include <stdio.h>
int main() {
    int num_inputs;
    float time, heat;
    printf("Enter the number of items: ");
    scanf("%d", &num_inputs);
    printf("Enter the single item heating time: ");
    scanf("%f", &time);
     if (num_inputs==1){
        printf("The recommended time %d",time);
    }
    else if (num_inputs>1){
        printf("The recommended heating time is %f",(time+(time/2)));
    }else if(num_inputs>2){
        printf("The recommended heating time is %f",time*2);        
    }else{
        printf("Not recommended");
    }
}
