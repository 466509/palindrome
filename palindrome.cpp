#include <iostream>
#include <cstring>

using namespace std;

int main() {
  char input[81];
  char text[81];
  cout << "Enter some text: ";
  cin.getline(input, 81);
  strcpy (text, input);
  for (int i=0, i < strlen(input), i++) {
    if (input[i] != isalpha()) {
      text.erase(i, 1);
    }
  }
  cout << input << endl;
  cout << text << endl;
  return 0;
}
