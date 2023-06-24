#simple calculator

a=int(input("Enter a "))
b=int(input("enter b "))

operator=input("Enter the operator ")[0]

if(operator=='+'):
    print(a+b)
if(operator=='-'):
    print(a-b)
if(operator=='*'):
    print(a*b)
if(operator=='/'):
    print(a/b)

