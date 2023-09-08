from art import logo
print(logo)
alphabets=['a','b','c','d', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', 'a' ]
def ceaser(word,shift,direction):
    end_word=""
    if direction=="decode":
        shift*=-1
    for char in word:
        if char in alphabets:
            i=alphabets.index(char)
            j=i+shift
            end_word+=alphabets[j]
        else:
            end_word+=char
    print(f"the {direction}d result:{end_word}")
end=False
while not end:
    direction = input("Type 'encode' to encrypt, type 'decode' to decrypt:\n")
    text = input("Type your message:\n")
    shift = int(input("Type the shift number:\n"))
    shift%=26
    ceaser(text,shift,direction)
    restrat=input("want to do again ?")
    if restrat=="no":
        end=True
        print("good bye Thank you.")


