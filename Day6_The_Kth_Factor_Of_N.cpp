class Solution {
public:
    int kthFactor(int n, int k) {
    vector<int> v;
    int temp=k;
    for (int i = 1; i <= n/2 && temp!=v.size(); i++) {
        if (n % i == 0) {
            v.push_back(i);
        }
    }
    v.push_back(n);
    
    if (k <= v.size()) {
        return v[k-1];
    }
    return -1;
}

};