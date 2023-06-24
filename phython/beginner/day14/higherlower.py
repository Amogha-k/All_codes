from art import logo
from game_data import data
import random
print(logo)
def game():
    game_not_end=True
    while game_not_end:
        a=random.choice(data)
        print(a)
        # print(vs)
        b=random.choice(data)
        print(b) 
        answer=input('select a or b')
        compare(a,b,answer)
        game_not_end=False
        
def compare(a,b,answer):
    score=0
    
    if a.data['follower_count']>b.data['follower_count']:
        if answer==a:
            print('you are rigth')
            score+=1
        else:
            print('you are wrong')
    elif (b[follower_count])>a[follower_count]:
        if answer==b:
            print('you are rigth')
            score+=1
        else:
            print('you are wrong')

game()       