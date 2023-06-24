import random 

ranks = ['Ace', '2', '3', '4', '5', '6', '7', '8', '9', '10', 'Jack', 'Queen', 'King']
suits = ['Spades', 'Hearts', 'Diamonds', 'Clubs']
deck = [rank+" of "+suit
 for suit in suits
    for rank in ranks]

random.shuffle(deck)
print(deck[:5])

random_card = random.choice(deck)

sample_of_cards = random.sample(deck, 2)

print('Random card : ',random_card)
print('Random sample of 2 cards : ',sample_of_cards)