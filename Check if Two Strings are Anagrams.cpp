#include <iostream>
#include <unordered_map>
using namespace std;

bool areAnagrams(string str1, string str2) {
    if (str1.length() != str2.length())
        return false;
    unordered_map<char, int> freq;
    for (char c : str1)
        freq[c]++;
    for (char c : str2) {
        freq[c]--;
        if (freq[c] < 0)
            return false;
    }
    return true;
}

int main() {
    string str1 = "listen";
    string str2 = "silent";
    if (areAnagrams(str1, str2))
        cout << "The strings are anagrams" << endl;
    else
        cout << "The strings are not anagrams" << endl;
    return 0;
}
