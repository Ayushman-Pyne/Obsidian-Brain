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
- `\"` = "
- `\'` = '
- `\\` = \




## References