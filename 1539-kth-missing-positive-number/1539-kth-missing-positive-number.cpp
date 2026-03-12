class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int l = 0;
        int n = arr.size();
        int h = n-1;
        
        while(l<=h){
            int mid = l + (h-l)/2;
            if(arr[mid]-mid-1<k) l=mid+1;
            else h=mid-1;
        }
                         
        // index->    0 1 2 3 4
        // array->    2 3 4 7 11
        //                  h l
        // missing->  1 1 1 3 6

        // missing = a[i]-i-1

        // more = k - missing
        // ans = a[h] + more
        //     = a[h] + k - a[h] + h + 1
        //     = h + 1 + k
        //     = l + k

        return l+k; 
        // return h+1+k;
    }
};