evensum=0
oddsum=0
for i in range(1,101):
    if(i%2==0):
        evensum+=i
    else:
        oddsum+=i

print(f"even sum is {evensum} and oddsum is {oddsum}")