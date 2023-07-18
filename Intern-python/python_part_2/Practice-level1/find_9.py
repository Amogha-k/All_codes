'''
Given a list of numbers, write a python function which returns true if one of the first 4 elements in the list is 9. Otherwise it should return false.

The length of the list can be less than 4 also.
'''
#lex_auth_0127135811649044481146

def find_nine(nums):
    for i in range(len(nums)):
        if i<4:
            if nums[i]==9:
                return True
    return False
    #Remove pass and write your code here
	#pass
    

nums=[1,9,4,5,6]
print(find_nine(nums))