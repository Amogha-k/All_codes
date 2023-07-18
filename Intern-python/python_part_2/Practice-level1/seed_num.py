'''
Given two numbers, write a python function which returns true if first number is a seed of second number. Otherwise it returns false.

A number X is said to be a seed of number Y, if multiplying X by its each digit equates to Y

For example, 123 is a seed of 738 as 123*1*2*3 = 738.
'''
#lex_auth_0127135857243832321154

def seed_no(number,ref_no):
    st=str(number)
    total=1 
    for i in st:
        total=total*int(i)
    if(total*number==ref_no):
        return True
    return False
    
    
    
number=123
ref_no=738
print(seed_no(number,ref_no))