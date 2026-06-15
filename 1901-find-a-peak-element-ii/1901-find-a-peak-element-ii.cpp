class Solution {
public:
    int maxel(vector<vector<int>>& mat,int n,int m,int mid){
        int mx = -1;
        int ind = -1;
        for(int i=0;i<n;i++){
            if(mx<mat[i][mid]){
                mx = mat[i][mid];
                ind = i;
            }
        }
        return ind;
    }
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size();

        int l = 0;
        int r = m-1;

        while(l<=r){
            int mid = l + (r-l)/2;
            int row = maxel(mat,n,m,mid);

            int left = mid-1>=0 ? mat[row][mid-1] : -1;
            int right = mid+1<m ? mat[row][mid+1] : -1;

            if(mat[row][mid] > right && mat[row][mid] > left){
                return {row,mid};
            }
            else if(mat[row][mid] < left) r = mid -1;
            else l = mid + 1;
        }

        return {-1,-1};
    }
};