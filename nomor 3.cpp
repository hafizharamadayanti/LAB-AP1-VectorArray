#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void moveZerosToFront(vector<int>& v) {
    int n = v.size();
    int j=0;
    
    for (int i = 0; i < n; i++) {
        if (v[i] != 0) {
           swap(v[i], v[j]);
            j++;
        }
    }

    while (j < n) {
        v[j] = 0;
        j++;
    }
}

int main() {
    vector<int> v = {1, 2, 3, 0, 4, 5, 0, 0};
    
    cout << "input: ";
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;
    
    moveZerosToFront(v);
    sort(v.begin(), v.end());
    cout << "output: ";
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    return 0;
}