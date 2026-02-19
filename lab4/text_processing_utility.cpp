#include <iostream>
#include <string>
using namespace std;

int main() {
    string paragraph, word, replacement;

    cout << "Enter paragraph: ";
    getline(cin, paragraph);

    cout << "Enter word to search: ";
    cin >> word;

    cout << "Enter replacement word: ";
    cin >> replacement;

    size_t pos = 0;

    while ((pos = paragraph.find(word, pos)) != string::npos) {
        paragraph.replace(pos, word.length(), replacement);
        pos += replacement.length();
    }

    cout << "Updated Paragraph: " << paragraph << endl;

    return 0;
}
