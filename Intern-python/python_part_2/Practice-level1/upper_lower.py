'''
Write a python function which accepts a sentence and returns a list in which first value is the count of upper case letters and second value is the count of lower case letters in the sentence. Ignore spaces, numbers and other special characters if any.

Sample Input

Expected Output

Hello world!

[1,9]

Welcome to Mysore

[2,13]


'''
#lex_auth_0127136021907046401165

def find_upper_and_lower(sentence):
    upper=0 
    lower=0 
    for i in sentence:
        if i.isupper():
            upper=upper+1 
        elif i.islower():
            lower=lower+1 
        
    result_list=[]
    result_list.append(upper)
    result_list.append(lower)
    #start writing your code here
       
    return result_list

sentence="Come Here"
print(find_upper_and_lower(sentence))