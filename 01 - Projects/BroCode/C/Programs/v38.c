#include <stdio.h>
#include <string.h>

struct Player
{
    char name[12];
    int score;

};



int main(){
    
    // struct = collection of related members ("variables")
    //          they can be of different data types
    //          listed under one name in a block of memory
    //          VERY SIMILAR to classes in other languages (but no methods)
    
    struct Player player1;
    struct Player player2;

    strcpy(player1.name, "Arceus");
    player1.score = 4;

    strcpy(player2.name, "Bruh");
    player1.score = 5;

    printf("%s has a score of %d.\n", player1.name, player1.score);
    printf("%s has a score of %d.\n", player2.name, player2.score);

    return 0;
}