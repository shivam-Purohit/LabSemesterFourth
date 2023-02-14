#include <iostream>
#include <vector>
#include<algorithm>

using namespace std;

vector<int> addBigIntegers(vector<int> &a, vector<int> &b) {
    vector<int> result;
    int carry = 0;
    int i = a.size() - 1;
    int j = b.size() - 1;
    while (i >= 0 || j >= 0 || carry > 0) {
        int sum = carry;
        if (i >= 0) sum += a[i--];
        if (j >= 0) sum += b[j--];
        result.push_back(sum % 10);
        carry = sum / 10;
    }
    reverse(result.begin(), result.end());
    return result;
}

int main() {
    vector<int> a = {9, 9, 9};
    vector<int> b = {1, 0, 0, 0};
    vector<int> c = addBigIntegers(a, b);
    for (int i : c) cout << i;
    cout << endl;
    return 0;
}
