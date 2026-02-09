replacement of array
syntax
vector <int> arr;// vector of integers with size 0
// vector is a dynamic array, can grow and shrink in size
// vector can be initialized with a list of values
// vector<int> arr = {1, 2, 3, 4, 5}; // vector of integers 
// vector can be initialized with a size
// vector<int> arr(5); // vector of integers with 5 elements       
inserting do not use [] 
#push back 
// arr.push_back(6); // add element to the end of vector
// arr.push_back(7); // add another element to the end of vector
#push back increase the capacity of array if full it doubles it
but it does not the size of the vector

arr.size()      1 2 3 4 5 6 7 8 9 
// arr.size() returns the number of elements in the vector
arr.capacity()  1 2 4 4 8 8 8 8 16
// arr.capacity() returns the number of elements that can be stored in the vector without reallocating memory

pop_back
// arr.pop_back(); // remove last element from vector
// arr.pop_back(); // remove another last element from vector

size decreases but capacity does not change

// arr.clear(); // remove all elements from 

// vector<int> arr(5); // vector of integers with 5 elements       by default all elements are 0
// arr.resize(10); // change size of vector to 10, new elements are initialized to 0

vector<int> arr(5, 10); // vector of integers with 5 elements initialized to 10

for(int i = 0; i < arr.size(); i++) {
    int x;
    cin>>x;
    arr.push_back(x); // add element to the end of vector
}

at function
// arr.at(0); // returns first element of vector
cout << arr.at(0) << endl; // prints first element of vector


sort 
// sort(arr.begin(), arr.end()); // sort vector in ascending order

dutch flag algorithm
// vector<int> arr = {1, 0, 2, 1, 0, 2, 1, 0}; // vector of integers
// int low = 0, mid = 0, high = arr.size() - 1; 
// while(mid <= high) {
//     if(arr[mid] == 0) {      
//         swap(arr[low], arr[mid]);
//         low++;
//         mid++;
//     } else if(arr[mid] == 1) {
//         mid++;
//     } else {
//         swap(arr[mid], arr[high]);
//         high--;

//     }
