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
        print(a, " / ", b, " = ", div)
    else:
        div = b/a
        print(b, " / ", a, " = ", div)
else:
    print("Cannot Divide by 0")
if b != 0:
    if a>=b:
        rem = a%b
        print(a, " % ", b, " = ", rem)
    else:
        rem = b%a
        print(b, " % ", a, " = ", rem)
else:
    print("Cannot find remainder with 0")

