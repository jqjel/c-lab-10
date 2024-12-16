#include "word.h"
#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

int main() {
    vector<string> dictionary_words;
    ifstream inputFile("words.txt");
    if (!inputFile.is_open()) {
        cout << "The words.txt file could not be found. Program ending." << endl;
        return 1;
    }

    loadDictionary(dictionary_words, inputFile);
    
    inputFile.close();

    ifstream essayFile("essay.txt");
    if (!essayFile.is_open()) {
        cout << "The essay.txt file could not be found. Program ending." << endl;
        return 1;
    }

    ofstream outFile("essay_checked.txt");

    string word;
    while (essayFile >> word) {
        if (containsWord(dictionary_words, word)) {
            outFile << word << " ";
        } else {
            outFile << "*" << word << "* ";
        }
    }

    essayFile.close();
    outFile.close();

    cout << "Spellchecking finished!" << endl;
    cout << "Check essay_checked.txt for results." << endl;
}