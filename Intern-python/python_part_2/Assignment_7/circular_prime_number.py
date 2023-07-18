'''
The number, 197, is called a circular prime because all rotations of the digits: 197, 971, and 719, are themselves prime.

There are thirteen such primes below 100: 2, 3, 5, 7, 11, 13, 17, 31, 37, 71, 73, 79, and 97.

Write a python program to find and display the number of circular primes less than the given limit.
'''
#lex_auth_01269446157664256093

def check_prime(number):
    #pass #remove pass and write your logic here. if the number is prime return true, else return false
    for i in range(2,(number//2)+1):
        if number%i==0:
            return False
    return True
    

def rotations(num):
    #pass #remove pass and write your logic here. It should return the list of different combinations of digits of the given number.
	#Rotation should be done in clockwise direction. For example, if the given number is 197, the list returned should be [197, 971, 719]
	l1=[]
	m=str(num)
	for i in m:
	    l1.append(int(m))  #add to list
	    m=m[1:]+m[0]  #perform rotation:[197,971,719] 
    return l1
	    

def get_circular_prime_count(limit):
    #pass #remove pass and write your logic here.It should return the count of circular prime numbers below the given limit.
    count=0
    for i in range (2,limit):
        list=rotations(i)
        flag=1
        for j in list:
            num=check_prime(int(j))
            if num==False:
                flag=0
                break
        if flag==1:
            count+=1
    return count

#Provide different values for limit and test your program
print(get_circular_prime_count(1000))