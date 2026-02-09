Time complexity is a measure of the amount of time an algorithm takes to complete as a function of the length of the input. It is often expressed using Big O notation, which describes the upper bound of the time complexity in terms of the input size.
Space complexity is a measure of the amount of memory an algorithm uses as a function of the length of the input. It is also often expressed using Big O notation, which describes the upper bound of the space complexity in terms of the input size.

O(nk) where k is constant = O(n)
// O(n^2 + n ) = O(n^2)

// O(n^2 + n^3) = O(n^3)

// O(n^2 + n^3 + n^4) = O(n^4)

O(n + m) = O(n + m) // where n and m are the sizes of two different inputs working in two loops

O(nm) = O(nm) // where n and m are the sizes of two different inputs working in two nested loops 

for(int i = 0 ; i < n ; i*=k){
    c++;
}
time complexity is O(log n) // where k is a constant not equal to 1
for(int i = 0 ; i < n ; i++){
    for(int j = i+1 ; j < m ; j++){
        c++;
    }
}
// Time complexity is O(n*m) // where n and m are the sizes of two different inputs working in two nested loops
for(int i = 1 ; i < n ; i+=i){
    for(int j = 0 ; j < i ; j++){
        c++;
    }
}
O(n) // where n is the size of the input working in two nested loops
1+2+4+8+16+...+n = O(n) // where n is the size of the input working in two nested loops




