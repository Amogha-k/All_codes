import util

degree_centi = float(input("Enter the degree centigrade : "))
print(f'{degree_centi} degree centigrade = {round(util.convert_centigrade_to_fahrenheit(degree_centi),2)} degree fahrenheit ')

print() 

degree_frani = float(input("Enter the degree fahrenheit : "))
print(f'{degree_frani} degree fahrenheit = {round(util.convert_fahrenheit_to_centigrade(degree_frani),2)} degree centigrade')