---
Date: 2025-02-18 18:50
tags:
  - C
  - BroCode
cssclasses:
  - center-titles
  - dot-grid
---
# BROCode C
## C Boilerplate
- Every C program is written on top of the same boiler plate.
```C
#include <stdio.h>

int main(){
	/*Your Code here*/
	return 0;
}
```
## To run a C file in CMD
- `cd` to the file directory
- run `gcc test.c -o test`
	- this creates a compiled `.exe` file named `test.exe`
	- if this shows no error then continue to next step
- run `test`
	- the `.exe` name should run the program

>[!note] `gcc test.c` also works but gives an exe named `a.exe`

## Comments
```C
// Single Line Comment
/*
	this
	is 
	a
	multiline
	comment.
*/
```
## Escape sequence
- Character combination of backslash (`\`) followed by a letter or a combination of digits.
- Specify actions within a line or string of text.
- `\n` = new line
- `\t` = tab
- `\"` = `"`
- `\'` = `'`
- `\\` = `\`

## Variables
- A variable is an allocated space in memory to store a value.
- We refer to the variable name to access the stored value.
- That variable now behaves as it it was the value it contains.
- But we need to declare what type of data we are storing.
- A variable definition consists of two essential steps:
	- Declaration
	- Initialization
```C
int x;// Declaration
x = 123;// Initialization
```
- Declaration and initialization can be also done in one single line:
```C
int y = 321;
```
- here
	- `int` is the variable type
	- `y` is the variable name
	- = is the Assignment operator
	- and `321` is the integer value stored in `y`

## Data type
```C
#include <stdio.h>
#include <stdbool.h>

int main(){
    char a = 'C';// single character %c
    printf("%d\n", sizeof(a));
    char b[] = "Bro";// array of characters %s
  
    float c = 3.141592;// 4 bytes (32 bits of precision) 6 - 7 digits %f
    double d = 3.141592653589793;// 8 bytes (64 bits of precision) 15 - 16 digits %lf
  
    bool e = true;// 1 byte (true or false) %d
    char f = 120;// 1 byte (-128 to +127) %d or %c
    unsigned char g = 255;// 1 byte (0 to +255) %d or %c
  
    short h = 32767;// 2 bytes (−32,768 to +32,767) %d
    unsigned short i = 65535;// 2 bytes (0 to +65,535) %d
  
    int j = 2147483647;// 4 bytes (-2,147,483,648 to +2,147,483,647) %d
    unsigned int k = 4294967295;// 4 bytes (0 to +4,294,967,295) %u
  
    long long int l = 9223372036854775807;// 8 bytes (-9 quintillion to +9 quintillion) %lld
    unsigned long long int m = 18446744073709551615U; // 8 bytes (0 to +18 quintillion) %llu
  
    printf("%c\n", a);  // char
    printf("%s\n", b);  // character array
    printf("%f\n", c);  // float
    printf("%lf\n", d); // double
    printf("%d\n", e);  // bool
    printf("%d\n", f);  // char as numeric value
    printf("%d\n", g);  // unsigned char as numeric value
    printf("%d\n", h);  // short
    printf("%d\n", i);  // unsigned short
    printf("%d\n", j);  // int
    printf("%u\n", k);  // unsigned int
    printf("%lld\n", l);  // long long int
    printf("%llu\n", m);  // unsigned long long int
  
    return 0;
}
```

## Format Specifier
- defines and formats a type of data to be displayed
- `%c` = character
- `%s` = string (array of characters)
- `%f` = float
- `%lf` = double
- `%d` = integer

- `%.1` = decimal precision
- `%1` = minimum field Width
- `%-` = left align

## Constant
- fixed value that cannot be altered by the program during its execution
```C
const float PI = 3.14;
```

## Arithmetic Operators
- `+` (addition)
- `-` (subtraction)
- `*` (multiplication)
- `/` (division)
- `%` (modulus)
- `++`  increment
- `--`  decrement

## Augmented Assignment operator

- used to replace a statement where an operator takes a variable as one of its arguments and then assigns the result back to the same variable.
```C
x = x + 2;
x += 2;

x = x - 2;
x -= 2;

x = x * 2;
x *= 2;

x = x / 2;
x /= 2;

x = x % 2;
x %= 2;
```






## References