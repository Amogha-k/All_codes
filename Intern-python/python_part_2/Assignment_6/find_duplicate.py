'''
Write a python function find_duplicates(), which accepts a list of numbers and returns another list containing all the duplicate values in the input list and the order should be same as in the input list. If there are no duplicate values, it should return an empty list.

Sample Input

Expected Output

[12,54,68,759,24,15,12,68,987,758,25,69]

[12, 68]


'''
#lex_auth_01269443477535129681

def find_duplicates(list_of_numbers):
    s=set()
    for i in range(0,len(list_of_numbers)):
        for j in range(i+1,len(list_of_numbers)):
            if(list_of_numbers[j]==list_of_numbers[i]):
                
                s.add(list_of_numbers[i])
    
    l=[]
    for i in s:
        l.append(i)
    return l

list_of_numbers=[12,54,68,759,24,15,12,68,987,758,25,69]
list_of_duplicates=find_duplicates(list_of_numbers)
print(list_of_duplicates)