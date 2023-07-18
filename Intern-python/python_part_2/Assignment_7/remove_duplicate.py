'''
Write a python function, remove_duplicates() which accepts a string and removes all duplicate characters from the given string and return it.

Sample Input

Expected Output

1122334455ababzzz@@@123#*#*

12345abz@#*


'''
#lex_auth_01269446319507046499

def remove_duplicates(value):
    #start writing your code here
    l1=[]
    l2=[]
    
    for i in value:
        l1.append(i)
        
    for i in l1:
        if i not in l2:
            l2.append(i)
            
            
    st=''
    for i in l2:
        st=st+i
    return st

        

print(remove_duplicates("11223445566666ababzzz@@@123#*#*"))