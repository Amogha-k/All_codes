# Given a list of strings, count and print the number of strings where the string 
# length is 2 or  more & the 1st & last characters are same

# Python code snippet that counts and prints the number of strings meeting the given criteria:

# ```python
def count_strings(strings):
    count = 0
    for string in strings:
        if len(string) >= 2 and string[0] == string[-1]:
            count += 1
    return count

# Example usage:
string_list = ["hello", "world", "level", "good", "eye"]
count = count_strings(string_list)
print("Number of strings meeting the criteria:", count)

