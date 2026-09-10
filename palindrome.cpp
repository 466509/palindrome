#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;

// Jinyao Zhu, 9/10/26, Palindrome
// This program allows the user to input a series of characters (max 80), and checks to see if the input is a palindrome

int main() {
  // Initialize input and text (clean version of input)
  char input[81] = "";
  char text[81] = "";
  cout << "Enter some text: ";
  cin.getline(input, 81);

  // only copy alphabetical characters from the input into text
  int j=0;
  for (int i=0; i < strlen(input); i++) {
    if (isalpha(input[i])) {
      text[j++] = tolower(input[i]);
    }
  }
  text[strlen(text)] = '\0';

  // Reverse text
  char reverse[81] = "";
  strcpy(reverse, text); // Make a copy
  int start=0;
  int end = strlen(text)-1;
  // Reverse the characters
  while (start < end) {
    char ch = text[start];
    reverse[start] = reverse[end];
    reverse[end] = ch;
    start++; // Move indices closer to the center
    end--;
  }

  // Check to see if the reverse is the same as text
  // If so, it's a palindrome!
  if (strcmp(text, reverse) == 0) {
    cout << "Palindrome" << endl;
  } else {
    cout << "Not a palindrome" << endl;
  }
  return 0;
}
