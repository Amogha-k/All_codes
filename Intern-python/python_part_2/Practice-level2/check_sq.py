'''
Given an integer n, write a python function to return true, if it is possible to represent it as a sum of the squares of two different integers, else return false.
'''
#lex_auth_0127136357122129921205

def check_squares(number):
    i=1 
    while(i*i<=number):
        j=1 
        while(j*j<=number):
            if(i*i+j*j==number):
                return True
            j=j+1
        i=i+1
    return False
    #start writing your code here


number=68
print(check_squares(number))