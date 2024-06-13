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

##### The Print function

To display something on the terminal when a code is run we use the `printf();` function. the syntax is very simple. Just add the String within "double quotes". For example, `printf("Hello, World\n")` will give output `Hello, World`.

##### Escape sequence
Some commonly used escape sequences:
-  - Next line
- `\"` - 

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

##### Print variables
Variable explained in [[01 - Projects/CS50X/Week 0 - Scratch|Week 0 - Scratch]]

👇🏻All the lecture notes are present here 
[Lecture 1 - CS50x 2024 (harvard.edu)](https://cs50.harvard.edu/x/2024/notes/1/)


## Homework



## References

[CS50x 2024 - Lecture 1 - C (youtube.com)](https://www.youtube.com/watch?v=cwtpLIWylAw)
[CS50 2023 - Lecture 1 - C](https://cdn.cs50.net/2023/fall/lectures/1/lecture1.pdf)