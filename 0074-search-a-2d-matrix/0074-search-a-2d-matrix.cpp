class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        // int t=0;
        // int b=matrix.size()-1;
        // int l=0;
        // int r=matrix[0].size()-1;
        // while(t<=b){
        //     if(matrix[(t+b)/2][l]<=target && matrix[(t+b)/2][r]>=target)
        //     {
        //         while(l<=r){
        //             if(matrix[(t+b)/2][(l+r)/2] == target){
        //                 return true;
        //             }
        //             else if(matrix[(t+b)/2][(l+r)/2] > target){
        //                 r = (l+r)/2 - 1;
        //             }
        //             else{
        //                 l = (l+r)/2 + 1;
        //             }
        //         }
        //     }
        //     else if(matrix[(t+b)/2][l]<target)
        //     {
        //         t = (t+b)/2 +1;
        //     }
        //     else
        //     {
        //         b = (t+b)/2 -1;
        //     }
        // }

        // return false;

        int n =matrix.size();
        int m = matrix[0].size();
        int l =0;
        int h = n*m - 1;

        while(l<=h)
        {
            int mid = l + (h-l)/2;
            if(matrix[mid/m][mid%m]==target) return true;
            else if(matrix[mid/m][mid%m]>target) h = mid-1;
            else l = mid+1;
        }
        return false;
    }
};