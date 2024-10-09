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
- `Scrabble` and `wiNNeR` results in 

## References

[CS50x 2024 - Lecture 2 - Arrays (youtube.com)](https://www.youtube.com/watch?v=4vU4aEFmTSo)
[CS50 2023 - Lecture 2 - Arrays](https://cdn.cs50.net/2023/fall/lectures/2/lecture2.pdf)