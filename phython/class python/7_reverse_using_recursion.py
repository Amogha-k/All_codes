def reverse_string (string) :
    if len(string) <= 1:
         return string
    else:
        return reverse_string(string [1:]) + string [0]
String = str(input("Enter the string to reverse :"))

reversed_string= reverse_string(String) 
print (reversed_string)

