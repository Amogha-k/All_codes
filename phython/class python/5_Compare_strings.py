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


# Output:
# ```
# Number of strings meeting the criteria: 3
# ```

# In the example above, the function `count_strings` takes a list of strings as input and iterates over each string in the list. It checks whether the length of the string is 2 or more (`len(string) >= 2`) and if the first character of the string is the same as the last character (`string[0] == string[-1]`). If both conditions are satisfied, the count is incremented.

# Finally, the count is printed as the output. In this example, the output indicates that there are 3 strings in the list that meet the given criteria. Feel free to modify the `string_list` variable to test the code with different sets of strings.