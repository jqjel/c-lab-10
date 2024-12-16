#include <vector>
#include <iostream>
#include <string>


void loadDictionary(std::vector<std::string> &dictionary_words, std::istream &dictionary_stream);


bool containsWord(const std::vector<std::string> &dictionary_words, std::string &word);