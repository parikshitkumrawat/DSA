#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int s = 1;
        int e = nums.size() - 1;

        while (s < e) {
            int m = s + (e - s) / 2;
            int c = 0;

            for (int i : nums) {
                if (i <= m) {
                    c++;
                }
            }

            if (c > m) {
                e = m;
            } else {
                s = m + 1;
            }
        }

        return s;
    }
};

int main() {
    int n;

    cout << "Enter size of array: ";
    cin >> n;

    vector<int> nums(n);

    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    Solution obj;
    cout << "Duplicate Number: " << obj.findDuplicate(nums) << endl;

    return 0;
}