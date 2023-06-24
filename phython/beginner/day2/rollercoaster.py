height=int(input("enter your height "))
bill=0
if height>120:
    print("you can ride")
    age=int(input("enter your age "))
    if age < 12:
        print("pay $5")
        bill=5
    elif age <= 18:
        print("pay $8")
        bill=8
    elif age>=45 and age<=55:
        print("everything is ok have a free ride.")    
    else :
        print("pay $12")
        bill=12
    wants_photo=input("want a photo y for yes n for no ")
    if wants_photo=="y":
        bill+=3
    if 45<age<55:
     bill=0    

    print(f"you have to pay ${bill}")    
else :
    print ("grow taller")               
