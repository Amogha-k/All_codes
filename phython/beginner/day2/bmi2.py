# 🚨 Don't change the code below 👇
height = float(input("enter your height in m: "))
weight = float(input("enter your weight in kg: "))
# 🚨 Don't change the code above 👆

#Write your code below this line 👇
bmi=round(weight/(height*height))
if bmi<18.5:
    print(f"Your BMI is {bmi}, you are under weight.")
elif 18.5<bmi<25:
    print(f"Your BMI is {bmi}, you have a normalweight.")
elif 25<bmi<30:
    print(f"Your BMI is {bmi}, you are slightly overweight.")
elif 30<bmi<35:
    print(f"Your BMI is {bmi}, you are obese.")
else:
    print(f"Your BMI is {bmi}, you are clinically obese.")    
