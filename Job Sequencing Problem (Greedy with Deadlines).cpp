#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Job {
    char id;
    int deadline, profit;
};

bool compare(Job a, Job b) {
    return a.profit > b.profit;
}

int main() {
    int n;
    cout << "Enter number of jobs: ";
    cin >> n;
    vector<Job> jobs(n);
    cout << "Enter job id, deadline, profit:\n";
    for (int i=0;i<n;i++) cin >> jobs[i].id >> jobs[i].deadline >> jobs[i].profit;

    sort(jobs.begin(), jobs.end(), compare);

    int maxDeadline=0;
    for (auto j : jobs) maxDeadline = max(maxDeadline, j.deadline);

    vector<char> schedule(maxDeadline, '-');
    int totalProfit=0;

    for (auto j : jobs) {
        for (int t=j.deadline-1; t>=0; t--) {
            if (schedule[t]=='-') {
                schedule[t]=j.id;
                totalProfit += j.profit;
                break;
            }
        }
    }

    cout << "Job sequence: ";
    for (char c : schedule) if (c!='-') cout << c << " ";
    cout << "\nTotal Profit = " << totalProfit << endl;
}
