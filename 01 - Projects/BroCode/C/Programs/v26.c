#include <stdio.h>
#include <string.h>

int main(){
    
    char string1[] = "Arceus";
    char string2[] = "Z2XY";

    // strlwr(string2);                // converts string to lowercase
    // strupr(string1);                // converts string to uppercase
    // strcat(string1, string2);       // appends string2 to the end of string1
    // strcat(string1, string2, 1);    // appends n charecters from string2 to string1
    // strcpy(string1, string2);       // copy string2 to string1
    // strncpy(string1, string2, 2);    // copy n characters of string2 to string1

    // strset(string1, '?');               //sets all characters of a string to a given character
    // strnset(string1, 'x', 4);            // sets first n characters of a string to a given character
    // strrev(string1);                    // reverses a string 

    int result = 0;

    result = strlen(string1);           // returns string length as an int
    // result = strcmp(string1, string2);  // string compare all characters
    // result = strncmp(string1, string2, 1);  // string compare n characters
    // result = strcmpi(string1, string2);      // string compare all (ignore case)
    // result = strnicmp(string1, string2, 3); // string compare n characters (ignore case)


    printf("%s\n", string1);
    printf("%s\n", string2);
    printf("%d\n", result);

    return 0;
}