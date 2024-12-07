#include <iostream>
#include <bits/stdc++.h>
#include <sstream>
#include <string>
#include <vector>
#include <random>
#include "wordList.cpp"

using namespace std;

int main() {
    int randNum;
    string word;
    istringstream wordStream(wordList);
    vector<string> wordList;
    random_device rd;

    mt19937 eng(rd());

    while(getline(wordStream, word)) {
        wordList.push_back(word);
    }

    uniform_int_distribution<> distr(0, wordList.size() - 1);

    word = wordList.at(distr(eng));
    randNum = eng() % 10000;

    cout << word << randNum << endl;

    return 0;
}
