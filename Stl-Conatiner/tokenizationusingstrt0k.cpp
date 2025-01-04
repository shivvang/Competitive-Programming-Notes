#include <iostream>
#include <cstring> // For strtok
using namespace std;

/*
👉 **strtok Function Overview:**  
- `char* strtok(char* s, const char* delimiters)`  
- Splits a string (`s`) into tokens using the given `delimiters`.  
- On the **first call**, pass the string to tokenize (`s`) and delimiters.  
- On **subsequent calls**, pass `NULL` instead of the string to continue tokenizing the same string.  
- Returns `NULL` when no more tokens are found.  
*/

int main() {
    char s[100] = "today is a rainy day"; // Input string to tokenize

    // Get the first token using space (" ") as a delimiter
    char *ptr = strtok(s, " ");
    while (ptr != NULL) {
        cout << ptr << endl; // Print the current token
        ptr = strtok(NULL, " "); // Get the next token
    }

    return 0;
}

/*
👉 **Code Explanation:**  
1️⃣ `strtok(s, " ")`:  
   - Extracts the **first token** ("today") from `s` using space as the delimiter.  
2️⃣ `ptr != NULL`:  
   - Loop continues as long as `ptr` is not `NULL` (i.e., tokens exist).  
3️⃣ `strtok(NULL, " ")`:  
   - Extracts the **next token** on each iteration.  
4️⃣ **Important Note:**  
   - `strtok` **modifies the original string (`s`)** by replacing delimiters with `'\0'`.  
   - It is **not thread-safe** and shouldn't be used in concurrent programs.
*/

