#include <stdio.h>

int main(){
    
    // continue = skips rest of code and forces the next iteration of the loop
    // break = exits a loop/switch
    printf("Continue At 13\n");
    for(int i = 1; i <= 20; i++){
        if(i == 13){
            continue;
        }
        printf("%d\n", i);
    }
    printf("For Break\n");
    for(int i = 1; i <= 20; i++){
        if(i == 13){
            break;
        }
        printf("%d\n", i);
    }
    
    return 0;
}