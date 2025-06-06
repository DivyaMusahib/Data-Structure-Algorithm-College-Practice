// https://leetcode.com/problems/first-bad-version/description/
#include<bits/stdc++.h>
using namespace std;

// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
    public:
        int firstBadVersion(int n) {
            int lo = 1, hi = n;
            while(lo < hi) {
                int mid = lo + (hi-lo)/2;
                if(isBadVersion(mid)){
                    hi = mid;
                } else {
                    lo = mid + 1;
                }
            }
            return lo;
        }
};

int main() {

}