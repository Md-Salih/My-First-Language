#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ifstream f1("file1.txt"), f2("file2.txt");
    ofstream fout("merged.txt");
    if(!f1 || !f2){ cout<<"Error opening files!"; return 1; }

    vector<int> data;
    int x;
    while(f1 >> x) data.push_back(x);
    while(f2 >> x) data.push_back(x);

    sort(data.begin(), data.end());
    for(int n : data) fout << n << " ";

    cout << "Merged and sorted data written to merged.txt";
    f1.close(); f2.close(); fout.close();
}
