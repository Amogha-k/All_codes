capital_letters = [chr(i) for i in range(65 , 65+26)]
small_letters = [chr(i) for i in range(97 , 97+26)]

def find_next_char(i):
    if i in small_letters :
        return small_letters[(small_letters.index(i)+1)%len(small_letters)]
    elif i in capital_letters :
        return capital_letters[(capital_letters.index(i)+1)%len(capital_letters)]
    else :
        return i

characters = input("Enter 4 Character : ")[:4]

next_characters = ""

for i in characters:
    next_characters += find_next_char(i)
        
print(next_characters)