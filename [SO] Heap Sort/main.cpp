#include <iostream>
#include "heapSort.h"
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int> vector1(n);
    for (int i = 0; i < n; ++i) {
        cin >> vector1[i];
    }
    heapSort(vector1,0,vector1.size()-1);
    return 0;
}