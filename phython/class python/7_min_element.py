
def findMinRec(A, n):
    if (n == 1):
        return A[0]
    return min(A[n - 1], findMinRec(A, n - 1))
 
# Driver Code
   
# A = [1, 4, 45, 6, -50, 10, 2]

number_of_elements=int(input('e the number of elements in list'))
# print("enter the elements")
num=[]
i=0
while(i<number_of_elements):
    a=int(input("enter the elements "))
    num.append(a)
    i+=1

n = len(num)
print(findMinRec(num, n))