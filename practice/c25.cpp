#include <iostream>
#include <string>

using namespace std;

char findKthCharacter(int k) {
    string word = "a";
    int index = 0;

    while (word.size() < k) {
        string new_word = "";
        for (char c : word) {
            new_word += (c == 'z') ? 'a' : char(c + 1); 
        }
        word += new_word;
        index += word.size() / 2;
    }

    return word[k - 1]; 
}

int main() {
    int k;
    cout<<"Enter k:";
    cin>>k;
    char result = findKthCharacter(k);
    cout << "The " << k << "-th character is: " << result << endl;
    return 0;
}