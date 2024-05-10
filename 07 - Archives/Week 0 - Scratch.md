---
Type: Rough
---
2024-05-06 01:36

Tags:  [[Scratch]] [[CS50X|CS50X]]


# Week 0 - Scratch

The first video starts off as an introduction to computational thinking, i.e. thinking in algorithms. 
The class then continues to explain the unary operator using fingers. For example if the 1st finger of the hand is ☝🏻 then it stands for one and for 2 fingers ✌🏻 it's two. here the order is not prioritized. Just to represent a number N, a symbol representing one is repeated N times. This represents the base system of one. cool

Base represents the number of different digits used to represent a number. Here Base is 1 because one is only repeated and no other digit is used. 

But that only leads us to get up to 5 in one hand, 10 if both hands are used, 20 if u count your toes too. But what if we need to count higher than that we would need more fingers. This is where more base numbers come in play. As for computers, they use a base system of 0s and 1s. And the order is given priority. 0 represents OFF, 1 represents ON. These are basically on and off states of a transistor in the computer CPU. A computer CPU consists of millions of transistors.

A binary digit in the computer is also called a Bit. 1 bit represents only 2 states ON and OFF.

The System we use to represent numbers is the decimal system. It has a base of 10, i.e. it has 10 base digits that are used to represent all the numbers. by using their position. 
![[Pasted image 20240507082121.png|200]]

Similarly the binary digits can be used to represent numbers or data in general.
![[Pasted image 20240507082403.png |200]]
A one in the 4th place from the left would represent 8.
![[Pasted image 20240507082607.png|200]]

A byte consists of 8 bits. 
![[Pasted image 20240507083549.png|200]]

To represent the symbols that represent letters and convey them to the computer a byte follows a specific set of rules called the ASCII to interpret for the computer.
![[Pasted image 20240507084332.png |500]]

The above table represents the ASCII equivalent to represent letters. For Example: 65 in binary would be interpreted by the computer as the letter **'A'** or 01000001 will be **'A'**. 
Only points to remember from the table are number of A-Z and a-z.

Unicode is another way to represent the same. Unicode usually is 32 bits.

#### U+1F602 is used to represent the 😂 face in Unicode.

Another interesting thing about unicode is the combining of emojis or different elements of an emoji. For example: There is this 👍 emoji and this 👍🏻 emoji, they both represent thumbs up but are different in skin color. To represent them in unicode there were two ways. The first being to assign a different value for both the emojis, but that would create problems when there are more than one hand sign and 5 skin tones. The problem being that there would be 5 times the number of emojis needed and will use more space. so this will not be the approach. Unicode developers decided to implement a completely different approach which was efficient and used less space. They decided to add modifiers which would instruct the computer that the emoji will have some of it's features will change.
For the above mentioned example 👍 is represented by U+1F44D and the emoji 👍🏻 is represented by U+1F44D U+1F3FB the second unicode is to tell the computer to make the necessary changes to the thumbs up emoji.

Similarly, 
![[Pasted image 20240507093333.png|300]]
the ones written in yellow are unicode for individual emojis girl, love sign and boy connected by the modifier unicode U+200D. Another example of how this works is by changing the last boy emoji to another girl's emoji.
![[Pasted image 20240507093650.png|300]]


Representing Pictures in computer language i.e. binary. A common way of representing images is by showing millions of pixels each of which is colored. to represent color in commonly used convention is RGB. In theory, all colors are just combinations of Red, Green and Blue, so by adjusting the intensity of each color from range 0 to 255 for each of Red, Green and Blue. 



### Searching Problem (Algorithmic thinking)
Now let's see a phonebook. If we need to find a name in the book there are many approaches. One of which being to search the name by cross referencing it with each name. Now the time taken at maximum will be N times the time taken to cross reference one name. N being the total number of names in the phone book.

But this isn't efficient. Its rather time consuming if the name starts with a letter that shows up at the very last part of the book.

An approach would be to divide the book in half and look for the name in the half that it'll most likely be in. this halves the time taken.

A more efficient approach will be to repeat this process again and again until u reach the page where the name is. Elaborating on that, if u divide the half again and keep the one where the name would be the time taken now will be exponentially less.
![[Pasted image 20240507111510.png|500]]

The last approach in algorithm format would be:
![[Pasted image 20240507111613.png|500]]

To develop this computational thinking more, Scratch is introduced. Scratch is a visual puzzle type programming language used for making games, videos, etc. 

The Scratch interface is a familiar one so i wont bother explaining. For namesakes here's the page
![[Pasted image 20240507112315.png|500]]
Check it out here: [Scratch - Imagine, Program, Share (mit.edu)](https://scratch.mit.edu/)
And the next slides were pretty much all known and basic so i wont bother explaining.

Well, turns out all this is nicely documented in CS50 website. So ill just stop and link the notes in every page.
[Lecture 0 - CS50x 2024 (harvard.edu)](https://cs50.harvard.edu/x/2024/notes/0/)
## Homework

The homework i made was a scratch ping pong game that had a soothing background music and some sound effects. three sprites with different costumes and different backdrops with level changing features.

Here's the link to the .sb3 file: [[The Ultimate ping pong game.sb3]]

Here's the file on scratch website for demo purposes: [The Ultimate ping pong game on Scratch (mit.edu)](https://scratch.mit.edu/projects/1011592037/)

## References

[Week 0 Scratch - CS50x 2024 (harvard.edu)](https://cs50.harvard.edu/x/2024/weeks/0/)
[CS50x 2024 - Lecture 0 - Scratch - YouTube](https://www.youtube.com/watch?v=3LPJfIKxwWc)
[CS50 2023 - Lecture 0 - Scratch](https://cdn.cs50.net/2023/fall/lectures/0/lecture0.pdf)
