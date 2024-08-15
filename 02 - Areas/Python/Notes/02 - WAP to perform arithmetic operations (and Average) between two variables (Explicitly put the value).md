---
cssclasses:
  - dot-grid
  - no-embed-border
Status:
  - Not Started
title: 02 - WAP to perform arithmetic operations (and Average) between two variables (Explicitly put the value)
Date: 2024-08-15 22:29
Language:
  - Python
---
# 02 - WAP to perform arithmetic operations (and Average) between two variables (Explicitly put the value)

## Algorithm

```Algorithm

Step 1: Start The program
Step 2: Initialize the variables with the values
Step 3: For the arithmatic functions with no exceptions sample snippet
	sum = a+b
	diff = a-b
	pro = a*b
	avg = (a+b)/2
Step 4: For exceptions like if second number is 0 then put an else statement to avoid RunTime error
Step 5: 
if b != 0:
    if a>=b:
        div = a/b
        rem = a%b
        print(a, " / ", b, " = ", div)
        print(a, " % ", b, " = ", rem)
    else:
        div = b/a
        rem = b%a
        print(b, " / ", a, " = ", div)
        print(b, " % ", a, " = ", rem)
else:
    print("Cannot Divide by 0")
Step 6: End the program.

```

## Program

```Python
a = 2
b = 3
  
sum = a+b
diff = a-b
pro = a*b
avg = (a+b)/2
  
print(a, " + ", b, " = ", sum)
print(a, " - ", b, " = ", diff)
print(a, " * ", b, " = ", pro)
print("Average = ", (a+b)/2)
if b != 0:
    if a>=b:
        div = a/b
        rem = a%b
        print(a, " / ", b, " = ", div)
        print(a, " % ", b, " = ", rem)
    else:
        div = b/a
        rem = b%a
        print(b, " / ", a, " = ", div)
        print(b, " % ", a, " = ", rem)
else:
    print("Cannot Divide by 0")
```

## Output

![[Pasted image 20240815224110.png]]
![[Pasted image 20240815224637.png]]