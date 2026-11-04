//week09-2.cpp 學習計畫 Matrix
//LeetCode 73. Set Matrix Zeroes
//把0的直行、橫列,都設成0。而且void不用return
//in place直接把修改的結果,改在 Matrix裡面

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int M=matrix.size(),N=matrix[0].size();
        vector<int> left(M);
        vector<int> up(N);

        for(int i=0;i<M;i++){
            for(int j=0;j<N;j++){
                if(matrix[i][j]==0){
                    left[i]=1;
                    up[j]=1;
                }
            }
        }
        for(int i=0;i<M;i++){
            for(int j=0;j<N;j++){
                if(left[i]==1||up[j]==1)matrix[i][j]=0;
            }
        }
    }
};
