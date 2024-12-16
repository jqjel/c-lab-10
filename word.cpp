#include "word.h"
#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

void loadDictionary(vector<string> &dictionary_words, istream &dictionary_stream){
    string word;
    while (dictionary_stream >> word){
        dictionary_words.push_back(word);
    }
}

bool containsWord(const vector<string> &dictionary_words, string &word){
    for (int i = 0; i < dictionary_words.size(); ++i){
        if (dictionary_words.at(i) == word){
            return true;
        }
    }
}