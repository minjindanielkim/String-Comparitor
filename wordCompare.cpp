#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
  string word1;
  cout << "write the word that you are comparing it to: ";
  cin >> word1;

  cout << endl;

  string word2;
  cout << "write the word that you wrote: ";
  cin >> word2;

  cout << endl;
  
  if(word1 == word2) {
    cout << "matches!" << endl;
  }

  else {
    if(word1.size() != word2.size()) {
      cout << "word size does not match by " << max(word2.size(), word1.size()) - min(word2.size(), word1.size()) << endl;
    }
    else {
      for(int i = 0; i < word1.size(); i++) {
        if(word1[i] != word2[i]) {
          cout << "at position " << i << ", word1 is " << word1[i] << " and word2 is " << word2[i] << endl;  
        }
      }
    }
  }

}
