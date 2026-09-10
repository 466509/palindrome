#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;

int main() {
  char input[81] = "";
  char text[81] = "";
  cout << "Enter some text: ";
  cin.getline(input, 81);

  int j=0;
  for (int i=0; i < strlen(input); i++) {
    if (isalpha(input[i])) {
      text[j++] = tolower(input[i]);
    }
  }
  text[strlen(text)] = '\0';

  char reverse[81] = "";
  strcpy(reverse, text);
  int start=0;
  int end = strlen(text)-1;
  while (start < end) {
    char ch = text[start];
    reverse[start] = reverse[end];
    reverse[end] = ch;
    start++;
    end--;
  }

  if (strcmp(text, reverse) == 0) {
    cout << "Palindrome" << endl;
  } else {
    cout << "Not a palindrome" << endl;
  }
  return 0;
}
