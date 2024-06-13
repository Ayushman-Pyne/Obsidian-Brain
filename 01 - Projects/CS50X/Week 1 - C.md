---
Date: 2024-05-10 20:04
Status: Ongoing
tags:
  - CS50X
  - C
cssclasses:
  - center-titles
  - dot-grid
---
# Week 1 - C

Some syntax discussed in class that will be <span style="color:GreenYellow">CRUCIAL</span> and needed when writing code for the first time.

##### Basic format that u cannot go wrong with:

``` C
#include <stdio.h>

int main(void) 
{ 
	printf("hello, world\n");
}
```

##### Basic first time use terminal commands:

- `code hello.c` used to make the C source code file and enter it to write code. Here it creates `hello.c` file and opens it in the editor.
- `make hello` used to turn the source code into machine code(which is in binary) and store it in the same path as the `hello.c` but with a different file extension. Here the source code `hello.c` is being converted to machine code `hello`.
- `./hello` is used to run the machine code by opening it in the terminal. Here the machine code `hello` is being run.

##### Escape sequence
Some commonly used escape sequences:
- <span style= "color:Yellow"> \n </span> - Next line
- <span style= "color:Yellow"> \' </span> - '
- <span style= "color:Yellow"> \"  </span> - "

##### Input commands

There is this another header file `cs50.h` that we will use for talking inputs now. It's a header file provided by the course and can be accessed. Check out their [Documentation](https://manual.cs50.io/#cs50.h) for the function names.

The Functions with their use are listed here:
- `get_char` - prompts user for a line of text from stdin and returns...
- `get_double` - prompts user for a line of text from stdin and returns...
- `get_float` - prompts user for a line of text from stdin and returns...
- `get_int` - prompts user for a line of text from stdin and returns...
- `get_long` - prompts user for a line of text from stdin and returns...
- `get_long_long` - prompts user for a line of text from stdin and returns...
- `get_string` - prompts user for a line of text from stdin and returns...

In case you want to include the `cs50.h` in offline Projects. [Check This Out](https://stackoverflow.com/questions/76893704/how-can-i-include-the-cs50-h-file) 

##### Variable Types
Some common variable types
- bool
- char
- double
- float
- int
- long
- string
##### Print variables

We use placeholders in the String of the `printf` function. The Syntax follows:
```C
printf("%s Sample text", variable);
```
Here `%s` is the placeholder that tells the function that there is a string supposed to he here which is a `variable` mentioned later.

List Of Placeholders and the variable type they refer to:
- `%c` - char
- `%f` - float
- `%i` - int
- `%li` - long
- `%s` - string

##### Command Line commands
Some common Command Line Commands:
- `cd` - Change Directory
- `cp` - Copy a file to a directory. Syntax `cp [options(s)] [source_file_name(s)] [Destination_file_name]`
- `ls` - List the items in the current directory
- `mkdir` - Make Directory in the current directory
- `mv` - Move files to a directory. Syntax `mv [options(s)] [source_file_name(s)] [Destination_file_name]`
- `rm` - Remove file
- `rmdir` - Remove Directory



👇🏻All the lecture notes are present here 
[Lecture 1 - CS50x 2024 (harvard.edu)](https://cs50.harvard.edu/x/2024/notes/1/)


## Homework
Well, This week there were many parts to the homework.

1. Complete [Hello, World](https://cs50.harvard.edu/x/2024/psets/1/world/).
2. Submit [Hello, It’s Me](https://cs50.harvard.edu/x/2024/psets/1/me/).
3. Submit one of:
    - [this version of Mario](https://cs50.harvard.edu/x/2024/psets/1/mario/less/), if feeling less comfortable
    - [this version of Mario](https://cs50.harvard.edu/x/2024/psets/1/mario/more/), if feeling more comfortable
4. Submit one of:
    - [Cash](https://cs50.harvard.edu/x/2024/psets/1/cash/), if feeling less comfortable
    - [Credit](https://cs50.harvard.edu/x/2024/psets/1/credit/), if feeling more comfortable
For the full questions click on the links.
#### 1. Hello, World

This was a Very Easy intro program.
```terminal
$mkdir world
$cd world
$code hello.c
```

```C
#include <stdio.h>

int main(void) 
{ 
	printf("hello, world\n");
}
```

Output
```terminal
$make hello.c
$./hello
hello, world 
$
```
#### 2. Hello, It's Me

Still an easy task of taking input and displaying the same.

```terminal
$mkdir me
$cd me
me/ $code hello.c
```

```C
#include <cs50.h>
#include <stdio.h>
  
int main(void)
{
    string name = get_string("What's your name? ");
    printf("hello, %s\n", name);
}
```

Output
```terminal
me/ $ make hello
me/ $ ./hello
What's your name? Ayushman
hello, Ayushman
me/ $
```

Checking and submitting commands

- `check50 cs50/problems/2024/x/me` - Test the program
- `style50 hello.c` - stylize the file to make it look more aesthetically pleasing.
- `submit50 cs50/problems/2024/x/me` - Submit the program
#### 3_1. Mario-less
A loop question to display a right aligned pyramid whose height will be taken from the user. Sample output
```terminal
$make mario
$./mario
$Height: -1
$Height: 6
$     #
$    ##
$   ###
$  ####
$ #####
$######
$
```


The program is fairly simple. Just a reverse pyramid of " " and a pyramid of "#" printed together.
```terminal
$ mkdir mario-less
$ cd mario-less
mario-less/ $ code mario.c
```

```C
#include <cs50.h>
#include <stdio.h>

void print_row(int l);

int main(void)
{
    int n;
    do
    {
        n = get_int("Height: ");
    }
    while (n < 1 | n > 8);
 
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n - 1; j++)
        {
            printf(" ");
        }
        print_row(i + 1);
        printf("\n");
    }
}
void print_row(int l)
{
    for (int k = 0; k < l; k++)
    {
        printf("#");
    }
}
```

Output
```terminal
mario-less/ $ make mario
mario-less/ $ ./mario
Height: -1
Height: 7
      #
     ##
    ###
   ####
  #####
 ######
#######
mario-less/ $ 
```

Test inputs
- `-1` or other negative numbers?
- `0`?
- `1` or other positive numbers?
- letters or words?
- no input at all, when you only hit Enter?

Checking and submitting commands

- `check50 cs50/problems/2024/x/me` - Test the program
- `style50 hello.c` - stylize the file to make it look more aesthetically pleasing.
- `submit50 cs50/problems/2024/x/me` - Submit the program

#### 3_2. Mario-more

This was the same code basically like the Mario-less just had a small change that there was 2 spaces in each row and another left aligned triangle. Sample output
```terminal
$make mario
$./mario
$Height: -1
$Height: 6
$     #  #
$    ##  ##
$   ###  ###
$  ####  ####
$ #####  #####
$######  ######
$
```
It is the same program as mario-less. with the addition of another for loop to display another triangle.
```terminal
$ mkdir mario-more
$ cd mario-more
mario-more/ $ code mario.c
```

```C
#include <cs50.h>
#include <stdio.h>

void print_row(int l);
  
int main(void)
{
    int n;
    do
    {
        n = get_int("Height: ");
    }
    while (n < 1 | n > 8);
 
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n - 1; j++)
        {
            printf(" ");
        }
        print_row(i + 1);
        printf("\n");
    }
}
void print_row(int l)
{
    for (int k = 0; k < l; k++)
    {
        printf("#");
    }
    printf("  ");
    for (int k = 0; k < l; k++)
    {
        printf("#");
    }
}
```

Output
```terminal
mario-more/ $ make mario
mario-more/ $ ./mario
Height: 6
     #  #
    ##  ##
   ###  ###
  ####  ####
 #####  #####
######  ######
mario-more/ $ 
```

Test inputs
- `-1` (or other negative numbers)?
- `0`?
- `1` through `8`?
- `9` or other positive numbers?
- letters or words?
- no input at all, when you only hit Enter?

Checking and submitting commands

- `check50 cs50/problems/2024/x/me` - Test the program
- `style50 hello.c` - stylize the file to make it look more aesthetically pleasing.
- `submit50 cs50/problems/2024/x/me` - Submit the program

#### 4_1. Cash

#### 4_2. Credit

## References

[CS50x 2024 - Lecture 1 - C (youtube.com)](https://www.youtube.com/watch?v=cwtpLIWylAw)
[CS50 2023 - Lecture 1 - C](https://cdn.cs50.net/2023/fall/lectures/1/lecture1.pdf)