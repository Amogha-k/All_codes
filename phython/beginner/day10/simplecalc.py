def sub(a,b):
  return a-b
def add(a,b):
  return a+b
def mul(a,b):
  return a*b
def div(a,b):
  return a/b
dictianary={
  "-":sub,
  "+":add,
  "*":mul,
  "/":div 
 }
a=int(input('enter the first number'))
b=int(input('enter the second number'))
for i in dictianary:
  print(i)
symbol=input('select one operations in above')
calc=dictianary[symbol]
answer=calc(a,b)

print(f"{a} {symbol} {b} = {answer}")
c=int(input('enter the another number '))

for i in dictianary:
  print(i)
symbol=input('select one operations in above')
calcu=dictianary[symbol]
result=calcu(answer,c)

print(f"{answer} {symbol} {c} = {result}")




  