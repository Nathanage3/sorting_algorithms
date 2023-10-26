Sorting algorithms are fundamental in computer science, and they serve to arrange data in a particular order, most commonly numerical or lexicographical. Here are some common sorting algorithms with brief explanations:

1. Bubble Sort:
Description: Repeatedly steps through the list, compares adjacent items, and swaps them if they are in the wrong order. The process is repeated until no more swaps are needed.
Complexity: Average and worst-case time complexity 
n is the number of items being sorted.
2. Selection Sort:
Description: Divides the input list into two parts: a sorted and an unsorted region. It repeatedly selects the smallest (or largest, depending on sorting order) element from the unsorted subarray and moves it to the end of the sorted subarray.
Complexity: Always takes 

n is the number of items.
3. Insertion Sort:
Description: Builds a sorted array (or list) one item at a time by repeatedly taking one element from the input data and inserting it in the correct position in the already sorted list.
Complexity: Best-case time complexity is 
O(n) (when the list is already sorted), but average and worst-case time complexity is 
O(n^2).
4. Merge Sort:
Description: A divide-and-conquer algorithm that divides the list into halves, sorts the halves, and then merges them.
Complexity: Always takes 

O(nlogn) time, where 
�
n is the number of items.
5. Quick Sort:
Description: Also a divide-and-conquer algorithm. It works by selecting a 'pivot' element and partitioning the array such that all the elements less than the pivot are on the left, and all elements greater than the pivot are on the right. The pivot is then in its sorted position, and the left and right subarrays are recursively sorted.
Complexity: Average time complexity is 
�
(
�
log
⁡
�
)
O(nlogn), but the worst-case time complexity is 
�
(
�
2
)
O(n 
2
 ).
6. Heap Sort:
Description: Takes advantage of the properties of a heap data structure. Converts the input data into a max-heap (or min-heap) and then repeatedly extracts the maximum element from the heap and reconstructs the heap until it's empty, resulting in a sorted list.
Complexity: Always takes 
�
(
�
log
⁡
�
)
O(nlogn) time.
7. Radix Sort:
Description: A non-comparative sorting algorithm that works by sorting numbers digit by digit, starting from the least significant digit (LSD) to the most significant digit (MSD), or vice-versa.
Complexity: When 
�
d is the number of digits, and 
�
n is the number of numbers, the time complexity is 
�
(
�
×
�
)
O(n×d).
8. Shell Sort:
Description: A generalization of insertion sort that allows elements to move apart from each other, determined by a "gap" sequence.
Complexity: Worst-case time complexity depends on the gap sequence, with the best-known being 
�(�log⁡2�)
O(nlog 2n).
In the context of the C programming language, these sorting algorithms would be implemented using loops, conditional statements, and functions. Recursive algorithms like Merge Sort and Quick Sort would also utilize recursion in their C implementations.
