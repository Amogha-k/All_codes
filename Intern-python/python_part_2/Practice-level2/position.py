'''
Part-1:
Write a python function which accepts a string of words and a target word, and returns the list of the positions of the target word in the string of words.

Sample input	Expected output
input String- we dont need no education we dont need no thought control no we dont
target word- dont	[1, 6, 13 ]
Part-2:
Write a python function which accepts a string of words and returns a dict which contains the words in the input string as key and the list of positions of these words in the input string as value. Use the function written in part-1.

Sample input	Expected output
we dont need no education we dont need no thought control no we dont	{'no': [3, 8, 11], 'thought': [9], 'dont': [1, 6, 13], 'need': [2, 7], 'control': [10], 'we': [0, 5, 12], 'education': [4]}
Note:
1.The words are separated by a single space.
2.There are no punctuation marks or upper case letters.
'''
#lex_auth_0127136518921830401222

def find_target_positions(input_string, target_word):
    target_list=[]
    #Start writing your code here
    input_string=input_string.split(" ")
    count=0 
    for i in input_string:
        if i==target_word:
            target_list.append(count)
        count=count+1
    return target_list

def find_inverted_index(input_string):
    target_dict={}
    #Start writing your code here
    input_string=input_string.split(" ")
    for i in input_string:
        target_dict[i]=find_target_positions(" ".join(input_string),i)
    return target_dict
    
    
input_string="we dont need no education we dont need no thought control no we dont"
result_dict=find_inverted_index(input_string)
print(result_dict)