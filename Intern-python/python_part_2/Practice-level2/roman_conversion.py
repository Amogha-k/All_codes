'''
Write a python function which accepts any number in the range of 1 to 4999 (both inclusive) and returns the equivalent roman numeral of it.
'''
#lex_auth_0127136447430656001216

def convert_to_roman(num):
    #Start writing your code here
     # Storing roman values of digits from 0-9
    # when placed at different places
    m = ["", "M", "MM", "MMM","MMMM"]
    c = ["", "C", "CC", "CCC", "CD", "D",
         "DC", "DCC", "DCCC", "CM"]
    x = ["", "X", "XX", "XXX", "XL", "L",
         "LX", "LXX", "LXXX", "XC"]
    i = ["", "I", "II", "III", "IV", "V",
         "VI", "VII", "VIII", "IX"]
  
    # Converting to roman
    thousands = m[num // 1000]  #DIVIDE to give 1000 place
    hundreds = c[(num % 1000) // 100]  #find remainder and divide with 100 place
    tens = x[(num % 100) // 10] # find remainder and divide with 10 place
    ones = i[num % 10]  #finally remainder
  
    ans = (thousands + hundreds +
           tens + ones)
  
    return ans


for num in range(1,5000):    
    print(num," : ",convert_to_roman(num))