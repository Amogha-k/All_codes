import random
rock = '''
    _______
---'   ____)
      (_____)
      (_____)
      (____)
---.__(___)
'''

paper = '''
    _______
---'   ____)____
          ______)
          _______)
         _______)
---.__________)
'''

scissors = '''
    _______
---'   ____)____
          ______)
       __________)
      (____)
---.__(___)
'''
gameimages=[rock,paper,scissors]
a=input(print('what do you choose 0=rock 1=paper 2=scissors'))
a=int(a)
print('your choose:')
if a>3 or a<0:
    print("good byee")
else :
    print(gameimages[a])
# elif a==1:
#     print(paper)
# else:
#  print(scissors) 


n=random.randint(0,2)
print("computer choose:")
print(gameimages[n])



if a==n:
    print("draw match")
elif a==0 and n==1:
    print("computer wins")   
elif a==0 and n==2:
    print("you win")
elif a==1 and n==0:
    print("you win")
elif a==1 and n==2:
    print("computer wins")
elif a==2 and n==0:
    print("computer  win")
elif a==2 and n==1:
    print("you win")