'''
Write a python function which accepts three numbers and returns True if

a. one of the three numbers is "close" to any one of the other numbers (differing from a number by at most 1), and

b.Number that is left out is "far", differing from both other values by 2 or more.

Return false if the above mentioned conditions are not satisfied.
'''
#lex_auth_0127136008767324161169

def close_number(num1,num2,num3):
    lis  = [num1, num2, num3]
    lis.sort()
    if lis[1] == lis[0]+1 or lis[1] == lis[2]-1 or lis[1] == lis[0] or lis[1] == lis[2]:
        if lis[1]+2 <= lis[2] or lis[0]+2 <=lis[1]:  
            return True
        else:
            return False
    else:
        return False
    #start writing your code here
    
print(close_number(5,4,2))