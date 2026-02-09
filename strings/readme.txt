strings are character arrays
// C++ strings are a part of the standard library and provide a more convenient way to handle strings than character arrays.

char str1[] = {'H', 'e', 'l', 'l', 'o' } 
Automatically null-terminated \0 

cout<<(int)(str1[5]); // Outputs 0, the null terminator
for(int i = 0; str[i] != '\0' i++) {
    cout << str1[i]; // Outputs Hello
}
cout << str1; // Outputs Hello

string as data type
string str2 = "Hello"; // Automatically null-terminated
updation of singke char
in c++ strings are mutable  
str2[0] = 'h'; // Modify first character
string str3;
cin>>str3; // Reads a string until whitespace
getline(cin, str3); // Reads a full line including 
 

built in string functions
1.size() // Returns the length of the string
cout << str2.size(); // Outputs 5
2.length() // Same as size()
cout << str2.length(); // Outputs 5 
3.push_back() // Adds a character to the end of the string
str2.push_back('!'); // Adds '!' to the end
cout << str2; // Outputs Hello!
4.pop_back() // Removes the last character
str2.pop_back(); // Removes the last character
cout << str2; // Outputs Hello
5.reverse
reverse(str2.begin(), str2.end()); // Reverses the string
cout << str2; // Outputs olleH

6.Concatenation
string str4 = str2 + " World"; // Concatenates strings
cout << str4; // Outputs olleH World

substring
string str5 = str4.substr(2); // Extracts substring from index 2 to the end
cout << str5; // Outputs leH World
string str6 = str4.substr(2, 5); // Extracts substring from index 2 with length 5
cout << str6; // Outputs leH W 

integer to str
int num = 123;
string str7 = to_string(num); // Converts integer to string
cout << str7; // Outputs 123

sorting a string usnig sort function
sort(str2.begin(), str2.end()); // Sorts the string in ascending order
cout << str2; // Outputs Hello // ascii order: 'H' < 'e' < 'l' < 'o'

// Note: The sort function requires the <algorithm> header


stringstream
#include <iostream>
#include <sstream>

stringstream ss("Hello World"); // Create a stringstream with initial content
std::string word;
while (ss >> word) { // Extract words from the stringstream
    std::cout << word << std::endl; // Outputs each word on a new line
}

string to int
stoi

// Converts string to integer
int num2 = stoi("123"); // Converts string "123" to integer 123
stoll // Converts string to long long
stoll("1234567890123456789"); // Converts string to long long





