---
Date: 2024-06-13 20:34
tags:
  - CS50X
  - Arrays
cssclasses:
  - center-titles
  - dot-grid
---
# Week 2 - Arrays

Some syntax discussed in class that will be <span style="color:GreenYellow">CRUCIAL</span> and needed when writing array or string programs.

##### Basic Array declaration and initialization
``` C
#include <stdio.h>

int main(void) 
{ 
	int array[4]; 
	array[] = {1, 2, 3, 4};
}
```

strings can also be treated as arrays of datatype char.
Some characteristics:
- If an array consists of n elements, the first element is located at index 0. The last element is located at index (n-1).
- C is very lenient. It will not prevent you from going “out of bounds” of your array.
- Multidimensional array is just the same thing with a slight different, 
``` C
#include <stdio.h>

int main(void) 
{ 
	int array[4][4];
}
```

- While we can treat individual elements of arrays as variables, we cannot treat entire arrays themselves as variables. 
- We cannot, for instance, assign one array to another using the assignment operator. That is not legal C. 
- Instead, we must use a loop to copy over the elements one at a time
- 
##### strlen

This is function in the `string.h` header file which gives the length of the string.

##### ctype.h
The functions in this header file are:
- `isalnum` - check whether a character is alphanumeric
- `isalpha` - check whether a character is alphabetical
- `isblank` - check whether a character is blank (i.e., a space or tab)
- `isdigit` - check whether a character is a digit
- `islower` - check whether a character is lowercase
- `ispunct` - check whether a character is punctuation
- `isspace` - check whether a character is whitespace (e.g., a newline, space, or tab)
- `isupper` - check whether a character is uppercase
- `tolower` - convert a char to lowercase
- `toupper` - convert a char to uppercase

##### Command Line Arguments

- `Command-line arguments` are those arguments that are passed to your program at the command line. For example, all those statements you typed after `clang` are considered command line arguments. You can use these arguments in your own programs!
- In your terminal window, type `code greet.c` and write code as follows:
 ```C
#include <cs50.h>
#include <stdio.h>

int main(void)
 {
	string answer = get_string("What's your name? ");
    printf("hello, %s\n", answer);
}
```
- Still, would it not be nice to be able to take arguments before the program even runs? Modify your code as follows:

``` C
#include <cs50.h>
#include <stdio.h>

int main(int argc, string argv[])
{
	if (argc == 2)
	{
		printf("hello, %s\n", argv[1]);
	}
	else
	{
		printf("hello, world\n");
	}
}
```

- Here `argc` stores the number of arguments given in command line separated by spaces usually.
- `argv` array stores the arguments in an array. This array also contains the command itself as a value.
- For Example:
	- the above program is run with the command `./greet Ayushman`
	- the value of `argc` is 2.
	- the value of `argv` is `{./greet , Ayushman}`.

##### Exit status

- You have probably noticed that the `main` function has a return of `int`.
- When a program ends, a special exit code is provided to the computer.
- When a program exits without error, a status code of `0` is provided the computer. 
- Often, when an error occurs that results in the program ending, a status of `1` is provided by the computer.
- Some Common exit status codes are 101, 102.


## Homework

This week's Project topics are as follows:
1. Submit [Scrabble](https://cs50.harvard.edu/x/2024/psets/2/scrabble/).
2. Submit [Readability](https://cs50.harvard.edu/x/2024/psets/2/readability/).
3. Submit one of:
    - [Caesar](https://cs50.harvard.edu/x/2024/psets/2/caesar/), if feeling less comfortable.
    - [Substitution](https://cs50.harvard.edu/x/2024/psets/2/substitution/), if feeling more comfortable.
For Full Questions click on the links,

#### 1. Scrabble
This was a very straight forward problem, that takes two string inputs and calculate score based on the following table and display the winner,

| A   | B   | C   | D   | E   | F   | G   | H   | I   | J   | K   | L   | M   | N   | O   | P   | Q   | R   | S   | T   | U   | V   | W   | X   | Y   | Z   |
| --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- |
| 1   | 3   | 3   | 2   | 1   | 4   | 2   | 4   | 1   | 8   | 5   | 1   | 3   | 1   | 1   | 3   | 10  | 1   | 1   | 1   | 1   | 4   | 4   | 8   | 4   | 10  |

``` terminal
$ make scrabble
$ ./scrabble
Player 1: Question?
Player 2: question!
Tie!
$ ./scrabble
Player 1: red
Player 2: wheelbarrow
Player 2 wins!
$./scrabble
Player 1: COMPUTER
Player 2: science
Player 1 wins!
$
```

Making the directory and the C file.
``` terminal
$ mkdir scrabble
$ cd scrabble
scrabble/ $ code scrabble.c
```

``` C
#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int p[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};
int compute_score(string a);

int main(void)
{
    string p1 = get_string("Player 1: ");
    string p2 = get_string("Player 2: ");

    int p1_score = compute_score(p1);
    int p2_score = compute_score(p2);

    if (p1_score > p2_score)
    {
        printf("Player 1 wins!\n");
    }
    else if (p1_score < p2_score)
    {
        printf("Player 2 wins!\n");
    }
    else
    {
        printf("Tie!\n");
    }
}

int compute_score(string a)
{
    int score = 0;
    for (int i = 0, n = strlen(a); i < n; i++)
    {
        if (islower(a[i]))
        {
            a[i] = toupper(a[i]);
        }
    }
    for (int i = 0, n = strlen(a); i < n; i++)
    {
        if (a[i] >= 'A' && a[i] <= 'Z')
        {
            score = score + p[a[i] - 'A'];
        }
        else
        {
            continue;
        }
    }
    return score;
}
```

Output
```terminal
scrabble/ $ make scrabble
scrabble/ $ ./scrabble
Player 1: Ayushman
Player 2: ayushman
Tie!
scrabble/ $
```

Test input:
- `red` and `wheelbarrow` results in wheelbarrow winning.
- `Question?` and `Question!` results in a Tie.
- `Scrabble` and `wiNNeR` results in scrabble winning.

Checking and submitting commands

- `check50 cs50/problems/2024/x/scrabble` - Test the program
- `style50 scrabble.c` - stylize the file to make it look more aesthetically pleasing.
- `submit50 cs50/problems/2024/x/scrabble` - Submit the program

#### 2. Readability

A simple program that counts sentences and words and characters. and putting them in a formula to get the suitable readability age. $$index = 0.0588 * L - 0.296 * S - 15.8$$
- $L \to$ number of letters per 100 words in text.
- $S \to$ number of sentences per 100 words in text.

```terminal
$ make readability
$ ./readability
Text: One fish. Two fish. Red fish. Blue fish.
Before Grade 1
$ ./readability
Text: Congratulations! Today is your day. You're off to Great Places! You're off and away!
Grade 3
$ ./readability
Text: Harry Potter was a highly unusual boy in many ways. For one thing, he hated the summer holidays more than any other time of year. For another, he really wanted to do his homework, but was forced to do it in secret, in the dead of the night. And he also happened to be a wizard.
Grade 5
$ ./readability
Text: When he was nearly thirteen, my brother Jem got his arm badly broken at the elbow. When it healed, and Jem's fears of never being able to play football were assuaged, he was seldom self-conscious about his injury. His left arm was somewhat shorter than his right; when he stood or walked, the back of his hand was at right angles to his body, his thumb parallel to his thigh.
Grade 8
$
```

Making the folder and the file.
```terminal
$ mkdir readability
$ cd readability
readability/ $ code readability.c
```

The program has mainly 3 loops;
- number of words
- number of letters
- number of sentences
and then just find the value of L and S; $$\begin{matrix}L = (letters / words) * 100 \\ S = (sentences / words) * 100\end{matrix}$$
Then calculate the index through the formula, $$index = 0.0588 * L - 0.296 * S - 15.8$$
```C
#include <cs50.h>
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <string.h>

int countl(string a);
int countw(string a);
int counts(string a);

int main(void)
{
    string s = get_string("Text: ");

    float letters = countl(s);
    float words = countw(s);
    float sentences = counts(s);

    float L = (letters / words) * 100;
    float S = (sentences / words) * 100;

    int index = round((0.0588 * L) - (0.296 * S) - 15.8);

    if (index >= 16)
    {
        printf("Grade 16+\n");
    }
    else if (index < 1)
    {
        printf("Before Grade 1\n");
    }
    else
    {
        printf("Grade %i\n", index);
    }
}

int countl(string a)
{
    int counter = 0;
    for (int i = 0, n = strlen(a); i < n; i++)
    {
        if (isspace(a[i]) != 0 || ispunct(a[i]) != 0)
        {
            continue;
        }
        else
        {
            counter = counter + 1;
        }
    }
    return counter;
}

int countw(string a)
{
    int counter = 0;
    for (int i = 0, n = strlen(a); i < n; i++)
    {
        if (isspace(a[i]) != 0)
        {
            counter = counter + 1;
        }
        else
        {
            continue;
        }
    }
    return counter + 1;
}

int counts(string a)
{
    int counter = 0;
    for (int i = 0, n = strlen(a); i < n; i++)
    {
        if (a[i] == '!' || a[i] == '.' || a[i] == '?')
        {
            counter = counter + 1;
        }
        else
        {
            continue;
        }
    }
    return counter;
}
```

Output
```terminal
readability/ $ ./readability
Text: Harry Potter was a highly unusual boy in many ways. For one thing, he hated the summer holidays more than any other time of year. For another, he really wanted to do his homework, but was forced to do it in secret, in the dead of the night. And he also happened to be a wizard.
Grade 5
readability/ $ 
```

Test inputs:
- `One fish. Two fish. Red fish. Blue fish.` (Before Grade 1)
- `Would you like them here or there? I would not like them here or there. I would not like them anywhere.` (Grade 2)
- `Congratulations! Today is your day. You're off to Great Places! You're off and away!` (Grade 3)
- `Harry Potter was a highly unusual boy in many ways. For one thing, he hated the summer holidays more than any other time of year. For another, he really wanted to do his homework, but was forced to do it in secret, in the dead of the night. And he also happened to be a wizard.` (Grade 5)
- `In my younger and more vulnerable years my father gave me some advice that I've been turning over in my mind ever since.` (Grade 7)
- `Alice was beginning to get very tired of sitting by her sister on the bank, and of having nothing to do: once or twice she had peeped into the book her sister was reading, but it had no pictures or conversations in it, "and what is the use of a book," thought Alice "without pictures or conversation?"` (Grade 8)
- `When he was nearly thirteen, my brother Jem got his arm badly broken at the elbow. When it healed, and Jem's fears of never being able to play football were assuaged, he was seldom self-conscious about his injury. His left arm was somewhat shorter than his right; when he stood or walked, the back of his hand was at right angles to his body, his thumb parallel to his thigh.` (Grade 8)
- `There are more things in Heaven and Earth, Horatio, than are dreamt of in your philosophy.` (Grade 9)
- `It was a bright cold day in April, and the clocks were striking thirteen. Winston Smith, his chin nuzzled into his breast in an effort to escape the vile wind, slipped quickly through the glass doors of Victory Mansions, though not quickly enough to prevent a swirl of gritty dust from entering along with him.` (Grade 10)
- `A large class of computational problems involve the determination of properties of graphs, digraphs, integers, arrays of integers, finite families of finite sets, boolean formulas and elements of other countable domains.` (Grade 16+)

Checking and submitting commands

- `check50 cs50/problems/2024/x/readability - Test the program
- `style50 readability.c` - stylize the file to make it look more aesthetically pleasing.
- `submit50 cs50/problems/2024/x/readability` - Submit the program

#### 3_2. Caesar

First Encryption program! It's a simple Caesar cipher,
Some Specifications given important:

- mplement your program in a file called `caesar.c` in a directory called `caesar`.
- Your program must accept a single command-line argument, a non-negative integer. Let’s call it k for the sake of discussion.
- If your program is executed without any command-line arguments or with more than one command-line argument, your program should print an error message of your choice (with `printf`) and return from `main` a value of `1` (which tends to signify an error) immediately.
- If any of the characters of the command-line argument is not a decimal digit, your program should print the message `Usage: ./caesar key` and return from `main` a value of `1`.
- Do not assume that k will be less than or equal to 26. Your program should work for all non-negative integral values of k less than 231−26. In other words, you don’t need to worry if your program eventually breaks if the user chooses a value for k that’s too big or almost too big to fit in an `int`. (Recall that an `int` can overflow.) But, even if k is greater than 26, alphabetical characters in your program’s input should remain alphabetical characters in your program’s output. For instance, if k is 27, `A` should not become `\` even though `\` is 27 positions away from `A` in ASCII, per [asciitable.com](https://www.asciitable.com/); `A` should become `B`, since `B` is 27 positions away from `A`, provided you wrap around from `Z` to `A`.
- Your program must output `plaintext:` (with two spaces but without a newline) and then prompt the user for a `string` of plaintext (using `get_string`).
- Your program must output `ciphertext:` (with one space but without a newline) followed by the plaintext’s corresponding ciphertext, with each alphabetical character in the plaintext “rotated” by _k_ positions; non-alphabetical characters should be outputted unchanged.
- Your program must preserve case: capitalized letters, though rotated, must remain capitalized letters; lowercase letters, though rotated, must remain lowercase letters.
- After outputting ciphertext, you should print a newline. Your program should then exit by returning `0` from `main`.



Test inputs:
- `./caesar 42` and 

Checking and submitting commands

- `check50 cs50/problems/2024/x/caesar` - Test the program
- `style50 caesar.c` - stylize the file to make it look more aesthetically pleasing.
- `submit50 cs50/problems/2024/x/caesar` - Submit the program
#### 3_2. Substitution



## References

[CS50x 2024 - Lecture 2 - Arrays (youtube.com)](https://www.youtube.com/watch?v=4vU4aEFmTSo)
[CS50 2023 - Lecture 2 - Arrays](https://cdn.cs50.net/2023/fall/lectures/2/lecture2.pdf)