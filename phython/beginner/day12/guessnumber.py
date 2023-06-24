from art import logo 
import random
print(logo)
print('welcome to guess number game')
def guess():
    a=random.randint(1,100)
    b=int(input("guess a number"))
    attemts=10
    if input('enter the level')=="hard":
        attemts=5
    attemts_remaing=True
    while attemts_remaing:
        result=chk(a,b)
        if result!=1:
            attemts-=1
        else:
            attemts_remaing=False
            print('you got it rigth')

def chk(a,b,attempts):
    if a>b:
        print('too low')
        attempts-=1
    elif a<b:
        print('too high')
        attempts-=1 
    elif a==b:
        print('you got it right')  
guess()