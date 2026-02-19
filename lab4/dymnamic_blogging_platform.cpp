#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string author, topic;

    cout << "Enter author name: ";
    getline(cin, author);

    cout << "Enter blog topic: ";
    getline(cin, topic);

    
    author.erase(remove(author.begin(), author.end(), ' '), author.end());
    topic.erase(remove(topic.begin(), topic.end(), ' '), topic.end());

    
    transform(author.begin(), author.end(), author.begin(), ::tolower);
    transform(topic.begin(), topic.end(), topic.begin(), ::tolower);

    string contentID = author + "_" + topic;

    cout << "Generated Content ID: " << contentID << endl;

    return 0;
}
