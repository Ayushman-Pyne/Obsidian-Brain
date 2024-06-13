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
##### Conditionals
- `&&` - and
- `||` - or
- `!` - not

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

- `check50 cs50/problems/2024/x/mario/less` - Test the program
- `style50 mario.c` - stylize the file to make it look more aesthetically pleasing.
- `submit50 cs50/problems/2024/x/mario/less` - Submit the program

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

- `check50 cs50/problems/2024/x/mario/more` - Test the program
- `style50 mario.c` - stylize the file to make it look more aesthetically pleasing.
- `submit50 cs50/problems/2024/x/mario/more` - Submit the program

#### 4_1. Cash

This was kind of a curveball to what i had done before. The concept is kinda easy to explain. There are 4 types of change: quarters (25¢), dimes (10¢), nickels (5¢), and pennies (1¢). And we have to make a program that tells the least number of coins needed to give the change back. Sample Output
```terminal
$ make cash
$ ./cash
Change owed: 25
1
$ ./cash
Change owed: 70
4
$ ./cash
Change owed: 113
8
```


The Program uses only the operators and just keeps deducting from change it is divisible by each of the values of change.
```terminal
$mkdir cash
$cd cash
me/ $code cash.c
```

```C
#include <cs50.h>
#include <stdio.h>
 
int main(void)
{
    const int quarter = 25;
    const int dime = 10;
    const int nickel = 5;
    int cents;
    do
    {
        cents = get_int("Change Owed: ");
    }
    while (cents < 0);
    int change = 0;
    while (cents > 0)
    {
        int l = cents / quarter; //number of possible quarters
        cents = cents % quarter; // money left after taking quarters out
        change += l;
        l = cents / dime; //number of possible dimes
        cents = cents % dime; // money left after taking dimes out
        change += l;
        l = cents / nickel; //number of possible nickels
        cents = cents % nickel; //money left after taking nickels out
        change += l;
        l = cents; //number of possible pennies
        cents = cents - l; //money left after taking pennies out ideally here cents should always come to an end
        change += l;
    }
    printf("%i \n", change);
}
```

Output
```terminal
cash/ $ make cash
cash/ $ ./cash
Change Owed: 113
8 
cash/ $ 
```

Test inputs

- If you input `-1`, does your program prompt you again?
- If you input `0`, does your program output `0`?
- If you input `1`, does your program output `1` (i.e., one penny)?
- If you input `4`, does your program output `4` (i.e., four pennies)?
- If you input `5`, does your program output `1` (i.e., one nickel)?
- If you input `24`, does your program output `6` (i.e., two dimes and four pennies)?
- If you input `25`, does your program output `1` (i.e., one quarter)?
- If you input `26`, does your program output `2` (i.e., one quarter and one penny)?
- If you input `99`, does your program output `9` (i.e., three quarters, two dimes, and four pennies)?

Checking and submitting commands

- `check50 cs50/problems/2024/x/cash - Test the program
- `style50 cash.c` - stylize the file to make it look more aesthetically pleasing.
- `submit50 cs50/problems/2024/x/cash` - Submit the program
#### 4_2. Credit
This was the longest thinking i had to until now. Many steps to check... Let's take this from the top

1. 1st condition is the checksum
	- For the sake of discussion, let’s first underline every other digit, starting with the number’s second-to-last digit:
	    4003600000000014
	    Okay, let’s multiply each of the underlined digits by 2:
	    1•2 + 0•2 + 0•2 + 0•2 + 0•2 + 6•2 + 0•2 + 4•2
	    That gives us:
	    2 + 0 + 0 + 0 + 0 + 12 + 0 + 8
	    Now let’s add those products’ digits (i.e., not the products themselves) together:
	    2 + 0 + 0 + 0 + 0 + 1 + 2 + 0 + 8 = 13
	- Now let’s add that sum (13) to the sum of the digits that weren’t multiplied by 2 (starting from the end):
	    13 + 4 + 0 + 0 + 0 + 0 + 0 + 3 + 0 = 20
	- Yup, the last digit in that sum (20) is a 0, so David’s card is legit!

2. 2nd condition type of Credit Cards
	- American express
		- 15 digits starts with 34 or 37
	- MasterCard
		- 16 digits starts with 51,52,53,54, or 55
	- VISA
		- 13 or 16 digits starts with 4
It will follow a path of checks. 1st check will be the number of digits if they will be 13, 15, or 16. Then check for the checksum. Then check the type of card.
Checksum follows the Luhn’s Algorithm. The algorithm is explained in the 1st condition.
```terminal
$ mkdir credit
$ cd credit
credit/ $ code credit.c
```

```C
#include <cs50.h>
#include <stdio.h>
  
int sod(int s);
 
int main(void)
{
    long cn;
    do
    {
        cn = get_long("Number: ");
    }
    while (cn < 0);
    int d = 0;
    long cp = cn;
    do
    {
        d++;
        cp = cp / 10;
    }
    while (cp > 0);
    if (d == 13 || d == 15 || d == 16)
    {
    }
    else
    {
        printf("%i INVALID\n", d);
        return 0;
    }
 
    int l;
    int c = 0;
    long n = cn;
    int sum = 0;
    while (n > 0)
    {
        c++;
        l = n % 10;
        if (c % 2 == 0)
        {
            sum += sod(l * 2);
        }
        else
        {
            sum += l;
        }
        n = n / 10;
    }
    if (sum % 10 == 0)
    {
    }
    else
    {
        printf("INVALID\n");
        return 0;
    }
  
    long st = cn;
    while (st > 100)
    {
        st = st / 10;
    }
    if (d == 15 && (st == 34 || st == 37))
    {
        printf("AMEX\n");
    }
    else if (d == 16 && (50 < st && st < 56))
    {
        printf("MASTERCARD\n");
    }
    else if ((d == 13 || d == 16) && (st / 10 == 4))
    {
        printf("VISA\n");
    }
    else
    {
        printf("INVALID\n");
    }
}
  
int sod(int s)
{
    if (s / 10 == 0)
    {
        return s;
    }
    else
    {
        return (s / 10 + s % 10);
    }
}
```

Output
```terminal
credit/ $ make credit
credit/ $ ./credit
Number: iuvyrgfdi
Number: 4003600000000014
VISA
credit/ $ 
```


## References

[CS50x 2024 - Lecture 1 - C (youtube.com)](https://www.youtube.com/watch?v=cwtpLIWylAw)
[CS50 2023 - Lecture 1 - C](https://cdn.cs50.net/2023/fall/lectures/1/lecture1.pdf)