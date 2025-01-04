#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

// Custom comparator function for sorting strings
// If two strings have the same length, they are sorted lexicographically (alphabetical order).
// Otherwise, they are sorted by length in descending order.
bool compare(string a, string b) {
    if (a.length() == b.length()) {
        return a < b; // Lexicographical comparison
    }
    return a.length() > b.length(); // Longer strings come first
}


int main() {
//🚀 **C++ String Class – Competitive Programming Notes** 🚀  

//In **competitive programming**, the `std::string` class offers powerful tools for text manipulation, substring operations, and efficient memory handling compared to traditional `char` arrays. 



// 📚 **1. String Initialization**  


string s0;                  // Empty string
string s1("hello world");   // Direct initialization
string s2 = "helllooooo world"; // Copy initialization
string s3(s2);              // Copy constructor
string s4 = s3;             // Assignment
char arr[] = {'a', 'b', 'c', '\0'};  
string s5(arr);            // From character array


// ✅ **Use Case:** Choose `std::string` over `char[]` for easier concatenation, resizing, and built-in utility functions.



// 🔍 **2. Check if String is Empty**  


if (s0.empty()) 
    cout << "String is empty" << endl;


//✅ **Use Case:** Check if input or result strings are empty before proceeding.



// ➕ **3. String Concatenation**  

// Method 1: `append()`

s0.append("I love C++");

//Method 2: `+=` Operator

s0 += " and maybe Java someday";


//✅ **Use Case:** Combine multiple substrings efficiently.


//🧹 **4. Clear String**  


cout << s0.length() << " before clear" << endl;
s0.clear();
cout << s0.length() << " after clear" << endl;


//✅ **Use Case:** Reset string after use to free memory.



//📊 **5. Compare Strings**  


s0 = "apple";
s1 = "mango";
cout << s1.compare(s0) << endl; // Returns >0 if s1 > s0, <0 if s1 < s0, 0 if equal


//Lexicographical Comparison*

if (s1 > s0)
    cout << "Mango is lexicographically greater than Apple" << endl;


//✅ Use Case:Sorting strings, dictionary-order checks.


//🔎 6. Find Substring


string s = "I want to have apple juice";
int index = s.find("apple");
if (index != string::npos)
    cout << "'apple' found at index " << index << endl;


//✅ **Use Case:** Find patterns or keywords in problem constraints.


//📝 7. Remove Substring or Word 


string word = "apple";
int len = word.length();
s.erase(index, len + 1); // +1 for space or punctuation after word
cout << s << endl;


//✅ Use Case: Text processing, removing stopwords, or unwanted data.



//🔄. Iterate Over a String

//Using Index-Based Loop

for (int i = 0; i < s.length(); i++) {
    cout << s[i] << ":";
}
cout << endl;


//Using Iterators

for (auto it = s.begin(); it != s.end(); it++) {
    cout << (*it) << ",";
}
cout << endl;


//Using Range-Based For Loop

for (auto c : s) {
    cout << c << ",";
}
cout << endl;

//✅ Use Case: Parsing strings, character-wise operations, frequency analysis.


//⚙️ String Substring


string sub = s.substr(0, 5); // Extracts 5 characters starting from index 0
cout << sub << endl;


//✅Use Case: Extract tokens, substring matching, or segment-based processing.


    //sorting  the string 

      int n;
    cin >> n; 
    cin.get(); // Clear the input buffer after reading an integer
    
    // Array to store n strings
    string star[100]; 

    // Input n strings using getline to handle spaces
    for (int i = 0; i < n; i++) {
        getline(cin, star[i]);
    }

    // Sort the strings using the custom compare function
    sort(star, star + n, compare);

    // Output the sorted strings
    for (int i = 0; i < n; i++) {
        cout << star[i] << endl;
    }

    return 0;



    return 0;
}
