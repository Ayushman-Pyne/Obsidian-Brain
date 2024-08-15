a = int(input("Enter the First Number: "))
b = int(input("Enter the Second Number: "))


print(a, " + ", b, " = ", a+b)
print(a, " - ", b, " = ", a-b)
print(a, " * ", b, " = ", a*b)
if b != 0:
    if a>=b:
        print(a, " / ", b, " = ", a/b)
    else:
        print(b, " / ", a, " = ", b/a)
if b != 0:
    if a>=b:
        print(a, " % ", b, " = ", a%b)
    else:
        print(b, " % ", a, " = ", b%a)
print("Average = ", (a+b)/2)
