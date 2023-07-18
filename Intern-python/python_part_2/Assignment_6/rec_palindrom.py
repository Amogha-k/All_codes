'''
Write a recursive function, is_palindrome() to find out whether a string is a palindrome or not. The function should return true, if it is a palindrome. Else it should return false. 

Note- Perform case insensitive operations wherever necessary.
'''
#lex_auth_01269442114344550475

def is_palindrome(word):
    word=word.lower()
    if(len(word)==1):
        return True
    elif(len(word)==2):
        if(word[0]==word[1]):
            return True
        else:
            return False
    elif(len(word)>2 and word[0]==word[-1]):
        word=word[1:-1]
        result=is_palindrome(word)
        if(result):
            return True
        else:
            return False
    else:
        return False
    
#Provide different values for word and test your program
result=is_palindrome("yn")
if(result):
    print("The given word is a Palindrome")
else:
    print("The given word is not a Palindrome")