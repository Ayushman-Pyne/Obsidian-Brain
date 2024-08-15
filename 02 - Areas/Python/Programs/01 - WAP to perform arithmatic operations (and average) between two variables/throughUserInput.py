a = int(input("Enter the First Number: "))
b = int(input("Enter the Second Number: "))

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
