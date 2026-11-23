#include <iostream>
#include <queue>
#include <vector>
#include <functional>
using namespace std;

int main() {
    int n;
    cout << "Enter N: ";
    cin >> n;
    priority_queue<int, vector<int>, greater<int>> minHeap;
    cout << "Enter " << n << " numbers: ";
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        minHeap.push(x);
        if (minHeap.size() > 3)
            minHeap.pop();
    }
    vector<int> top;
    while (!minHeap.empty()) {
        top.push_back(minHeap.top());
        minHeap.pop();
    }
    cout << "Three largest (descending): ";
    for (int i = (int)top.size() - 1; i >= 0; i--) {
        cout << top[i] << " ";
    }
    cout << endl;
    return 0;
}
