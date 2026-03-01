class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix){
    // int n = matrix.size();
    // int m = matrix[0].size();
    // int i=0,j=0;
    // vector<int> a,b;
    // for(i=0;i<n;i++){
    //     for(j=0;j<m;j++){
    //         if(matrix[i][j]==0){
    //             a.push_back(i);
    //             b.push_back(j);

    //         }
    //     }
    // }
    // for(int k=0;k<n;k++){
    //     for(int l=0;l<m;l++){
    //         if(find(a.begin(), a.end(), k) != a.end()){
    //             matrix[k][l] = 0;
    //         }
    //         if(find(b.begin(), b.end(), l) != b.end()){
    //             matrix[k][l] = 0;
    //         }
    //     }
    // }
    int c=1;
    for(int i=0;i<matrix.size();i++){
        for(int j=0;j<matrix[0].size();j++){
            if(matrix[i][j]==0){
                matrix[i][0]=0;
                if(j!=0){
                    matrix[0][j]=0;
                }
                else c=0;
            }
        }
    }
    for(int i=1;i<matrix.size();i++){
        for(int j=1;j<matrix[0].size();j++){
            // if(matrix[i][j]!=0){
            if(matrix[i][0]==0 || matrix[0][j]==0){
                matrix[i][j]=0;
            }
            // }
        }
    }

    if(matrix[0][0]==0){
        for(int j=0;j<matrix[0].size();j++){
            matrix[0][j]=0;
        }
    }
    if(c==0){
        for(int j=0;j<matrix.size();j++){
            matrix[j][0]=0;
        }
    }


    }
};