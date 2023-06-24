#1 program to read a string of 4 characters from user.
#convert each of char to next alphabet


input_string = input("Enter a string of 4 characters: ")[:4]
output_string = ""
for char in input_string:
    if char == 'z':
        output_string += 'a'
    elif char == 'Z':
        output_string += 'A'
    else:
        output_string += chr(ord(char) + 1)
print("Output string: ", output_string)


