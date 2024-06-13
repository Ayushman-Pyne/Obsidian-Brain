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

The `\n` in the print string doesn't get printed in the output. This is a escape sequence. The common format is usually a backslash (`\`) followed by one or more characters. These tell the computer to print th8ings that are not easily represented on a keyboard. For example, Let's take a file named `hello.c` and print a the line "Hello, World".

Start on the terminal
```Terminal
code hello.c
```
This will create a file named `hello.c` and u can edit this file now in the editor.

In the file let's input the following:
```c
#include <stdio.h>
int main(void){
	printf("Hello, World");
}
```

Now in the terminal,
```Terminal
make hello
./hello
```
This will convert the source code to machine code and run it.

The terminal looks something like this now
```Terminal
$make hello
$./hello
Hello, World$
```


👇🏻All the lecture notes are present here 
[Lecture 1 - CS50x 2024 (harvard.edu)](https://cs50.harvard.edu/x/2024/notes/1/)


## Homework



## References

[CS50x 2024 - Lecture 1 - C (youtube.com)](https://www.youtube.com/watch?v=cwtpLIWylAw)
[CS50 2023 - Lecture 1 - C](https://cdn.cs50.net/2023/fall/lectures/1/lecture1.pdf)