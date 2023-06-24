
#HINT: You can call clear() to clear the output in the console.
from art import logo
print(logo)
highestbid=[]
def bid(name, amount):
  new_bid={}
  new_bid["name"]=name
  new_bid["amount"]=amount
  highestbid.append(new_bid)

print('welcome to bid')
def ask_to_bid():
  name=input('enter your name')
  price=int(input('enter the price'))
  bid(name,price)

ask_to_bid()
rpeat=True


while rpeat:
  repeat=input("is there another person in room")
  if repeat=="yes":
    clear()
    ask_to_bid()
  else:
    rpeat=False
higbid=0
for i in highestbid:
  
  bid_amount = new_bid["amount"]
  if higbid<bid_amount:
    higbid=bid_amount
    winner=name 
print(f"the winner is {winner} with a bid{higbid}")
