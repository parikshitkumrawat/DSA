class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        vector<long long>newarr;
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix.size();j++){
                newarr.push_back(matrix[i][j]);
            }
       }
       sort(newarr.begin(),newarr.end());
       return newarr[k-1];
    }
};