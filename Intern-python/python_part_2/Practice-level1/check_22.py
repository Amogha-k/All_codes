'''
Write a python function which accepts a list of numbers and returns true if the list contains a 2 next to a 2. Otherwise it should return false.
'''
#lex_auth_0127136075580375041172

def check_22(num_list):
    for i in range(len(num_list)-1):
        #if ((num_list[i]==2) and (num_list[i+1]==2)):
        if num_list[i]==num_list[i+1]==2:
            return True
    return False
    #start writing your code here
        
print(check_22([3,2,5,1,2,1,2,2]))