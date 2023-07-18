'''
Write a python function, nearest_palindrome() which accepts a number and returns the nearest palindrome greater than the given number. 

Sample Input

Expected Output

12300

12321

12331

12421
'''
#lex_auth_01269443664174284882
def is_palindrome(num):
    #start writitng your code here
    string=str(num)
    l1=[]
    l2=[]
    for i in string:
        l1.append(int(i))
        l2.append(int(i))
    l2.reverse()
    if l1==l2:
        return True
    else:
        False


def nearest_palindrome(number):
    n=number
    i=n+1 
    while(True):
        if is_palindrome(i)==True:
            return i 
        else:
            i=i+1

number=12300
print(nearest_palindrome(number))