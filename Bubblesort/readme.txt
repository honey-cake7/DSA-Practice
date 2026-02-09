bubble sort algorithm
// Bubble sort is a simple sorting algorithm that repeatedly steps through the list, compares adjacent elements and swaps them if they are in the wrong order. The pass through the list is repeated until the list is sorted. The algorithm gets its name from the way smaller elements "bubble" to the top of the list.        

5 3 2 1 4
first pass:
5 compared with 3, 5 > 3, swap
3 5 2 1 4
5 compared with 2, 5 > 2, swap
3 2 5 1 4
5 compared with 1, 5 > 1, swap
3 2 1 5 4
5 compared with 4, 5 > 4, swap
3 2 1 4 5
second pass:
3 compared with 2, 3 > 2, swap
2 3 1 4 5
3 compared with 1, 3 > 1, swap
2 1 3 4 5
third pass:
2 compared with 1, 2 > 1, swap
1 2 3 4 5


obeservations:
1. The algorithm is not efficient for large datasets.
2. The nth max element goes to the end of the array
3. if there are n element it takes n - 1 passes to sort the array
4. The algorithm is stable, meaning that it maintains the relative order of equal elements.
5. The time complexity is O(n^2) in the worst and average case, and O(n) in the best case (when the array is already sorted).
6. The space complexity is O(1) since it only requires a constant amount of additional space for the swap operation.
7. The algorithm can be optimized by adding a flag to check if any swaps were made in a pass. If no swaps were made, the array is already sorted and the algorithm can terminate early.

stable and unstable sort 
// Stable sort: maintains the relative order of equal elements 
// Unstable sort: does not maintain the relative order of equal elements
bubble sort is a stable sort because it maintains the relative order of equal elements. For example, if two elements have the same value, their order in the sorted array will be the same as their order in the original array.