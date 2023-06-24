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
def caluculator():
  a=float(input('enter the first number'))
  # b=int(input('enter the second number'))
  for i in dictianary:
    print(i)
  should_continue=True
  while should_continue:
    symbol=input('select one operations in above')
    b=float(input('enter the next number'))
    
    calc=dictianary[symbol]
    answer=calc(a,b)
    
    print(f"{a} {symbol} {b} = {answer}")
    

    if input(f"Type y to calc with {answer} or n to restart ")=="y":
      a=answer
    
    else:
      should_continue=False
      print('the new claculator')
      caluculator()
    
  
caluculator()    
    
    