#include <iostream>
#include <iomanip>
using namespace std;

int main(){
  float counterPal = 0, checkCounter = 0;
  char pal;
  int i;
  string phrase;

  cin >> pal;
  cin.ignore();
  getline(cin, phrase);

  //counting unique words and letter occurance
  string word = "";
  int wordCount = 0;
  bool found = false;
  for (int i = 0; i < phrase.length(); i++) {
    if (phrase[i] != ' ') {
      word += phrase[i];
      if (phrase[i] == pal && !found) {
        counterPal++;
        found = true;
      }
    }
    else {
        if (word != "") {
            wordCount++;
            found = false;
            word = "";
        }
    }
  }
  if (word != "") {
    wordCount++;
  }
  checkCounter = (counterPal / (float)wordCount) * 100;
  cout << setprecision(1) << fixed;
  cout << checkCounter;
  return 0;
}
