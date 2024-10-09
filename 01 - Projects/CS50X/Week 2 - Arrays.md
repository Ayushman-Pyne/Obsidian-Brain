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
Text: 
$ ./readability
$ ./readability
$
```

Making the folder and the file.
```terminal
$ mkdir readability
$ cd readability
readability/ $ code readability.c
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

## References

[CS50x 2024 - Lecture 2 - Arrays (youtube.com)](https://www.youtube.com/watch?v=4vU4aEFmTSo)
[CS50 2023 - Lecture 2 - Arrays](https://cdn.cs50.net/2023/fall/lectures/2/lecture2.pdf)