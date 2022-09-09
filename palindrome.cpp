/*
* Uno Pasadhika
* Palindrome - checks if a string is a palindrome or not 
* 9/9/2022 
*/

#include <iostream>
#include <cstring>

using namespace std;

// Check if a string is a palindrome 
inline bool isPalindrome(char* s) {
  int len = strlen(s);
  for (int i = 0; i < len / 2; i++) {
    if (s[i] != s[len - i - 1]) return false;
  }
  return true;
}

int main() {
  cout << "Enter a string: ";
  char s[80];
  cin >> s;
  {
    int idx = 0;
    char s2[80];
    for (int i = 0; i < strlen(s); i++) {
      if (isalnum(s[i])) s2[idx++] = tolower(s[i]); // If it's a number tolower just returns the number 
    }
    s2[idx] = 0; // zero terminate 
    strcpy(s, s2); // copy string
  }
  cout << (isPalindrome(s) ? "Palindrome." : "Not a palindrome.") << "\n";
}
