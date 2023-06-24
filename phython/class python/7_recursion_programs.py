'''1.Length of the string
2.Smallest element in a list
3.reverse of a string'''
def find_length(string):
    if string == "":
        return 0
    else:
        return 1 + find_length(string[1:])




def find_smallest(lst):
    if len(lst) == 1:
        return lst[0]
    else:
        return min(lst[0], find_smallest(lst[1:]))



def reverse_string(string):
    # Base case: If the string is empty or contains only one character, return the string
    if len(string) <= 1:
        return string
    # Recursive case: Reverse the substring starting from the second character and append the first character
    else:
        return reverse_string(string[1:]) + string[0]




print("1.String length\n2.Smallest Element\n3.String Reverse")
choice=int(input("Enter your choice: "))
if choice==1:
    my_string = input("Enter the string to calculate length: ")
    length = find_length(my_string)
    print("Length of the string:", length)
elif choice==2:
    my_list = [5, 2, 9, 2, 7]
    smallest = find_smallest(my_list)
    print("Smallest element in the list:", smallest)

elif choice==3:
    string = input("Enter the string to reverse: ")
    reversed_string = reverse_string(string)
    print(reversed_string)