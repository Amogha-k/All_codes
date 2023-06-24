def primechk(n):
    is_prime=True
    for i in range(2,n-1):
     if n%i==0:
        is_prime=False
    if is_prime:
     print("its prime")
    else:
     print("its not a prime")      
num=int(input("enter a number"))
primechk(num) 
 