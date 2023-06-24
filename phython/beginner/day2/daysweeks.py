# 🚨 Don't change the code below 👇
age = input("What is your current age? ")
# 🚨 Don't change the code above 👆
newage=90-int(age)
#Write your code below this line 👇
newagedays=newage*365
ageweeks=newage*52
newmonths=newage*12
message=f"(you have {newagedays} days, {ageweeks} weeks, and {newmonths} months left.)"
print(message)