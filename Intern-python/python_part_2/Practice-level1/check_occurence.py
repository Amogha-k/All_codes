'''
Given a string, write a python function to return True if the strings "mat" and "jet" appear the same number of times in the given string, else return False.

Note: Perform case insensitive string comparison wherever necessary.

Sample Input

Expected Output

Jet on the Mat but mat is too long

False

mat jet Jet Mat

True

'''
#lex_auth_0127136253311385601197

def check_occurence(string):
    cj=0 
    cm=0
    st1=string.lower()
    st=st1.split(" ")
    
    word1="jet"
    word2="mat"
    
    for i in st:
        if i==word1:
            cj=cj+1
         
    for i in st:
        if i==word2:
            cm=cm+1
    
    if cj==cm:
        return True
    else:
        return False
    #start writing your code here
        
string="Jet on the Mat but mat is too long"
print(check_occurence(string))