'''
Write a python function to find out whether a number is divisible by the sum of its digits. If so return True,else return False.
'''
#lex_auth_0127136251125350401190

def divisible_by_sum(number):
    a=sum=0
    temp=number
    
    while(number):
        a=number%10 
        sum=sum+a
        number=number//10
        
    if temp%sum==0:
        return True
    else:
        return False
    
        
    
    
    #start writing your code here

    
number=42
print(divisible_by_sum(number))