import math
height=int(input("enter the height of the wall="))
width=int(input("enter the width of the wall="))
coverage=5
def paint_cal(h,w,c):
    number_of_cans=(h*w)/c
    number_of_cans=math.ceil(number_of_cans)
    print(f"cans required are {number_of_cans}")

paint_cal(h=height,w=width, c=coverage)
