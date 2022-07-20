##  Merge Sort 
	- Its an algorithm where an elements in alist for example, is sorted by first dividing the list into halves:
		
		- Sorting the first halve then the second one and merging them afterwards
  	
	- This is an example of divide and conquer strategy

### Example in pseudocode
	
		If only one number
			Quit
		Else
			Sort left half of numbers
			Sort right half of numbers
			Merge sorted halves 

- This is an example of a recursive algorithm that continuously divide a list into halves untill it cannot further be divide

- The first line of the pseudocode acts as the base case to stop the algorithm from running when the is not further dividing needed
