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
- `make hello` used to turn the source code into machine code(which is in binary) and store it in the same path as the `hello.c` but with a different file extension.
- `./hello` is used to run the machine code by opening it in the terminal.

##### The Print function

To display something on the terminal when a code is run we use the `printf();` function. the syntax is very simple. Just add the String within "double quotes". For example, `printf("Hello, World\n")` will give output `Hello, World`.

##### Escape sequence

The `\n` in the print string doesn't get printed in the output. This is a escape sequence. The common format is usually a backslash (`\`) followed by one or more characters. These tell the computer to print th8ings that are not easily represented on a keyboard. For example, Let's take a file named `hello.c` and print a the line "Hello, World".

Start on the terminal



👇🏻All the lecture notes are present here 
[Lecture 1 - CS50x 2024 (harvard.edu)](https://cs50.harvard.edu/x/2024/notes/1/)


## Homework



## References

[CS50x 2024 - Lecture 1 - C (youtube.com)](https://www.youtube.com/watch?v=cwtpLIWylAw)
[CS50 2023 - Lecture 1 - C](https://cdn.cs50.net/2023/fall/lectures/1/lecture1.pdf)