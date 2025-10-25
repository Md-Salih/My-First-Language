#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;

int main() {
    ifstream fin("input.txt");
    ofstream fout("output.txt");
    string target, replace;
    cout << "Enter word to replace: "; cin >> target;
    cout << "Enter new word: "; cin >> replace;

    string line;
    while(getline(fin, line)) {
        stringstream ss(line);
        string word;
        while(ss >> word) {
            if(word == target) fout << replace << " ";
            else fout << word << " ";
        }
        fout << "\n";
    }
    fin.close(); fout.close();
    cout << "Replacement complete! Check output.txt";
}
