#include <iostream>
using namespace std;

void Construct(string alfa, string& word, int k) {
    if (word.size() >= k)
        return;

    string temp = "\0";
    for (int i = 0; i < word.size(); i++) {
        int index = alfa.find(word[i]);
        temp += alfa[(index + 1) % 26];
    }
    word += temp;

    Construct(alfa, word, k);
}

int main()
{
    string alfa = "abcdefghijklmnopqrstuvwxyz";
    string word;
    int k;

    cin >> word;
    cin >> k;

    Construct(alfa, word, k);

    cout << word[k - 1];
}

