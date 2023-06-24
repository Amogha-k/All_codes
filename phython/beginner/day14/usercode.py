import random
from game_data import data
from art import logo,vs
from replit import clear
is_game_over=False
score=0
A=random.choice(data) 
while not is_game_over: 
 
  B=random.choice(data)
  print(logo)
  print(f"Comapre A: {A['name']}, a {A['description']}, from {A['country']}")
  print(vs)
  print(f"Against B: {B['name']}, a {B['description']}, from {B['country']}")
 
  if A["follower_count"]>B["follower_count"]:
    answer="a"
  else:
    answer="b"
  print(answer)
 
  user_choice=(input("Who has more followers? Type 'A' or 'B': ")).lower()
 
  if user_choice==answer:
      score=score+1
      clear()
      print(f"You're right! Current score: {score}")
     
  else:
    clear()
    print(logo)
    print(f"Sorry You're Wrong! You're score: {score}")
    is_game_over=True
 
  A=B