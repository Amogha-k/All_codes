// C++ program to print all 
// permutations with duplicates allowed 
#include <bits/stdc++.h> 
using namespace std; 

/* Function to swap values at two pointers */
void swap(char *x, char *y) 
{ 
	char temp; 
	temp = *x; 
	*x = *y; 
	*y = temp; 
} 

/* Function to print permutations of string 
This function takes three parameters: 
1. String 
2. Starting index of the string 
3. Ending index of the string. */
void permute(char *a, int left, int right) 
{ 
	//int i; 
	if (left == right) 
		cout<<a<<endl; 
	else
	{ 
		for (int i = left; i <= right; i++) 
		{ 
			swap((a+left), (a+i)); //swaping the same alphabet
			permute(a, left+1, right); //we are fixing the left one
			swap((a+left), (a+i)); //backtrack 
		} 
	} 
} 

/* Driver program to test above functions */
int main() 
{ 
	char str[] = "ABCD"; 
	int n = strlen(str); 
	permute(str, 0, n-1); 
	return 0; 
} 

// This is code is contributed by rathbhupendra 