#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void removeDuplicates(vector<int>& v) {
    sort(v.begin(), v.end()); 
    v.erase(unique(v.begin(), v.end()), v.end()); 
}

int main() {
    vector<int> nums = {1, 2, 2, 3, 4, 5, 5};
    cout << "before = " ;
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;
    
    removeDuplicates(nums);
    
    cout << "after = ";
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;
    
    return 0;
}