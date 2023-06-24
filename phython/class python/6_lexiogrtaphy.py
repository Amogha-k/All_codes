# Write a python program to accept a sequence of whitespace separated words as input and 

# prints the words after removing all duplicate words and sorting them alphanumerically.



#lexicographic

# Lexicographic sorting, also known as lexicographical sorting or dictionary ordering,

#  is a way of sorting elements based on their dictionary or alphabetical order




# Certainly! Here's a Python program that accepts a sequence of whitespace-separated words as input, removes duplicate words, and sorts them alphanumerically:


def jls_extract_def():
    # Remove duplicates by converting to a set and back to a list
    return 


def remove_duplicates_and_sort_words(input_string):
    words = input_string.split()  # Split the input string into a list of words

    unique_words = list(set(words))  # Remove duplicates by converting to a set and back to a list = jls_extract_def()
    sorted_words = sorted(unique_words)  # Sort the unique words alphanumerically
    return sorted_words


# Accept input from the user
input_sequence = input("Enter a sequence of whitespace-separated words: ")

# Remove duplicates and sort the words
result = remove_duplicates_and_sort_words(input_sequence)

# Print the sorted words
print("Words after removing duplicates and sorting:")
for word in result:

    print(word)



# In this program, the `remove_duplicates_and_sort_words` function takes an input string and performs the following steps:

# 1. Split the input string into individual words using the `split()` method.

# 2. Convert the list of words into a set to remove duplicates, and then convert it back to a list.

# 3. Sort the unique words alphanumerically using the `sorted()` function.

# 4. Return the sorted words.


# The program then accepts an input sequence from the user and calls the `remove_duplicates_and_sort_words` function to get the sorted words without duplicates. Finally, it prints each word from the result on separate lines.


# Example usage:

# ```

# Enter a sequence of whitespace-separated words: apple banana orange apple cherry banana

# Words after removing duplicates and sorting:
# apple

# banana

# cherry
# orange

# ```


# In the above example, the user inputs the sequence "apple banana orange apple cherry banana". The program removes the duplicate words ("apple" and "banana") and sorts the remaining words alphanumerically. The result is printed, showing the words "apple", "banana", "cherry", and "orange" in alphabetical order.