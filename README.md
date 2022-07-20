## Sorting algorithm

- Sorting as the name suggest, its a way of making sure that a given elements are on the right order
- The same with sorting algorithm, its an algorithm that putsa elements of a list into an order

## Important of sorting

- Efficient sorting is important for optimizing the efficiency of other algorithms such as:
	- Search
	- merge

A Sorting algorithm must satisy two condition:

- The output is in monotonic order (each element is no smaller/larger than the previous element, according to the required order).
- The output is a permutation (a reordering, yet retaining all of the original elements) of the input. 

# Stability
 - A stable sort algorithm sort equal elements in the same order that they appear in the input
 - also Stability is important topreserver order over multiple sorts on the same data set
	### for example:
	- say you have students records consisting of name and a class section, when you implement an algorithm for sorting first by name then by class:
		- a stable algorith when used in both cases, a sort by class section will not change the name order
		- with an unstable sort, it could be that the sorting by section shuffles the name order, resulting in a nonalphabetical list of students
