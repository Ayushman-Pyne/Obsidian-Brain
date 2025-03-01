#include <stdio.h>

enum Day{Sun = 1, Mon = 2, Tue = 3, Wed = 4, Thu = 5, Fri = 6, Sat = 7};

int main(){
    
    // enum = a user defined type of named integer identifiers
    //        helps make a program more readable

    enum Day today = Fri;

    // printf("%d", today);    // enums are NOT STRINGS, but they can be treated as int

    if(today == Sun || today == Sat){
        printf("It is the weekend, Party TIME!!!");
    }
    else{
        printf("I have to work today! :(");
    }
    
    return 0;
}