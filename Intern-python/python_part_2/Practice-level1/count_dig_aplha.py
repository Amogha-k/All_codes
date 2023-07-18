'''
Write a python function which accepts a sentence and finds the number of letters and digits in the sentence.

It should return a list in which the first value should be letter count and second value should be digit count. Ignore the spaces or any other special character in the sentence.
'''
#lex_auth_0127135838317445121147

def count_digits_letters(sentence):
    count1=0 
    count2=0
    result_list=[]
    sentence=sentence.replace(" ","")
    sentence=sentence.replace(";","")
    sentence=sentence.replace("-","")
    
    for i in sentence:
        if i.isalpha():
            count1=count1+1 
        if i.isdigit():
            count2=count2+1 
            

    result_list.append(count1)
    result_list.append(count2)
        
    return result_list

sentence="Infosys Mysore 570027"
print(count_digits_letters(sentence))