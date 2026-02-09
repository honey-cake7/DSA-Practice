Binary search - Works only if array is sorted
// Binary search is an efficient algorithm for finding an item from a sorted list of items. It works by repeatedly dividing the search interval in half. If the value of the search key is less than the item in the middle of the interval, narrow the interval to the lower half. Otherwise, narrow it to the upper half. Repeatedly check until the value is found or the interval is empty.
code
// Binary search algorithm
// 1. Start with the entire array as the search interval.
// 2. Find the middle element of the array.
// 3. If the middle element is equal to the target value, return its index.
// 4. If the target value is less than the middle element, narrow the search interval to the lower half of the array.
// 5. If the target value is greater than the middle element, narrow the search interval to the upper half of the array.
// 6. Repeat steps 2-5 until the target value is found or the search interval is empty.
// 7. If the search interval is empty, return -1 to indicate that the target value is not in the array.
Time complexity
O(logn) for the best and average cases, O(n) for the worst case when the array is not sorted or the target value is not present in the array.
Space complexity
O(1) since it only requires a constant amount of additional space for variables used in the
