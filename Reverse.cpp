#include <iostream>
#include <fstream>
#include <sstream>
#include <algorithm>
using namespace std;

int countVowels(const string& text) {
    int count = 0;
    for (char c : text) {
        char lower = tolower(c);
        if (lower=='a'||lower=='e'||lower=='i'||lower=='o'||lower=='u') count++;
    }
    return count;
}

int countWords(const string& text) {
    stringstream ss(text);
    string word;
    int count = 0;
    while (ss >> word) count++;
    return count;
}

string Reverse(const string& text) {
    string rev = text;
    reverse(rev.begin(), rev.end());
    return rev;
}

string capitalizeSecondLetter(const string& text) {
    stringstream ss(text);
    string word, result;
    while (ss >> word) {
        if (word.size() > 1) word[1] = toupper(word[1]);
        result += word + " ";
    }
    return result;
}

int main() {
    ifstream file("data.txt"); // file must contain: "This is the Advanced Computer Programming Module"
    string fileData;
    getline(file, fileData);
    file.close();

    cout << "File data: " << fileData << endl;
    cout << "Number of vowels: " << countVowels(fileData) << endl;
    cout << "Number of words: " << countWords(fileData) << endl;
    cout << "Reversed: " << Reverse(fileData) << endl;
    cout << "Second letter capitalized: " << capitalizeSecondLetter(fileData) << endl;

    return 0;
}