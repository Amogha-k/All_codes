'''
Write a python function, find_pairs_of_numbers() which accepts a list of positive integers with no repetitions 
and returns count of pairs of numbers in the list that adds up to n. 
The function should return 0, if no such pairs are found in the list.
'''
#lex_auth_01269438594930278448

def find_pairs_of_numbers(num_list,n):
    #pass
    #Remove pass and write your logic here
    a=num_list
    count=0 
    for i in a:
        for j in a:
            if i+j==n:
                count=count+1 
    return count//2 #count is divived because, the 2 occurances are calculated
        
num_list=[1, 2, 4, 5, 6]
#num_list=[1, 2, 7, 4, 5, 6, 0, 3]
n=6
print(find_pairs_of_numbers(num_list,n))