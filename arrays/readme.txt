array  - list of ordered elements of the same type
// array is a fixed size, contiguous block of memory
int a[] = {1, 2, 3, 4, 5}; // array of integers
// array can be initialized with a list of values       
int b[5]; // array of integers with 5 elements
b[0] = 1; // assign value to first element
b[1] = 2; // assign value to second element
int n = sizeof(b) / sizeof(b[0]); // get number of elements in array
// sizeof(b) returns the size of the array in bytes
cout<<array[0]<<endl; // print first element of array
cout<<array <<endl; // print array address in memory
cout<<&array<<endl; // print address of first element of array
** passing array to function    
//arr and a points to the same memory location
// so we can use either name to access the array elements
// array is a pointer to the first element of the array
// so we can use pointer arithmetic to access the elements
//sizeof a return the size of pointer, not the size of the array
//so we need ot pass the size of the array to the function
*** arrays and pointers
// array is a pointer to the first element of the array
// so we can use pointer arithmetic to access the elements
int *ptr = a; // pointer to first element of array
 ptr points to the same memory location as a
ptr[0] = 10; // change first element of array
ptr[0] is the same as a[0]
*ptr = 20; // change first element of array
ptr++; // move pointer to next element(according to size)
cout<<*ptr<<endl; // print second element of array
