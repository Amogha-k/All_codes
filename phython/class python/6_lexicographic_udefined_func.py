def remove_duplicates_and_sort_words(input_string):
    words = input_string.split()  # Split the input string into a list of words
    unique_words = list(set(words))  # Remove duplicates by converting to a set and back to a list
    sorted_words = insertion_sort(unique_words)  # Sort the unique words alphanumerically using insertion sort
    return sorted_words

def insertion_sort(arr):
    for i in range(1, len(arr)):
        key = arr[i]
        j = i - 1
        while j >= 0 and arr[j] > key:
            arr[j + 1] = arr[j]
            j -= 1
        arr[j + 1] = key
    return arr

# Accept input from the user
input_sequence = input("Enter a sequence of whitespace-separated words: ")

# Remove duplicates and sort the words
result = remove_duplicates_and_sort_words(input_sequence)

# Print the sorted words
print("Words after removing duplicates and sorting:")
for word in result:
    print(word)
