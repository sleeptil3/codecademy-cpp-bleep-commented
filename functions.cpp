#include <string>
#include <cctype>

// define bleep function
void bleep(std::string word, std::string &text) {
  // variable to count number of correct hits as you check for the full 'word' match
  int count = 0;

  // iterate over the text, looking for the first character of 'word'
  for (int i = 0; i < text.size(); i++) {
    // if the first char of 'word' is found...
    if (tolower(text[i]) == word[0]) {
      // iterate over 'word' checking each char matches corresponding text index
      for (int j = 0; j < word.size(); j++) {
        if (tolower(text[i + j]) == word[j]) { count++; }
      }
      // check if 'count' equals the length of 'word', indicating complete match
      // if true, then iterate starting at 'i' over the length of 'word'
        // replace char at each index with '*'
      if (count == word.size()) {
        for (int l = i; l < i + word.size(); l++) {
          text[l] = '*';
        }
      }
      // reset 'count' to 0 for next possible match
      count = 0;
    }
  }
}