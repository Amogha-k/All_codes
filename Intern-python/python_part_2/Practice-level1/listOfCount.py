'''
Write a python function that accepts a list of words and returns the list of integers representing the length of the corresponding words.
'''
#lex_auth_0127136291543285761194

def list_of_count(word_list):
    count_list=[]
    for i in range(len(word_list)):
        count_list.append(len(word_list[i]))
    #start writing your code here
    return count_list

word_list=["COme","here"]
print(list_of_count(word_list))