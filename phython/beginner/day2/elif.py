height=int(input("enter your height"))
if height>120:
    print("you can ride")
    age=int(input("enter your age"))
    if age < 12:
        print("pay $5")
    elif age <= 18:
        print("pay $8")
    else :
        print("pay $12")
else :
    print ("grow taller")               
