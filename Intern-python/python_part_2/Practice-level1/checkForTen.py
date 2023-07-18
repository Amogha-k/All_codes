'''
Given 2 positive integers, write a python function to return True if one of them is 10 or if their sum is 10, else return False.
'''
#lex_auth_0127136303145779201199

def check_for_ten(num1,num2):
    if num1==10 or num2==10:
        return True
    elif num1+num2==10:
        return True
    else:
        return False
    #start writing your code here
    
print(check_for_ten(10,9))