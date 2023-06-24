def length(str):
    if str == "":
        return 0
    return 1 + length(str[1:])


str = input("Enter the string to count ")
print("length of", str, "is", length(str))