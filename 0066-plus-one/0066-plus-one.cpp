class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {

       

        digits[digits.size()-1] +=1;

        for(int i=digits.size()-1;i>0;i--){
            if(digits[i]==10){
                digits[i]=0;
                digits[i-1]+=1;
            }
        }

        for(int i=0;i<digits.size();i++){
            if(digits[i]>9){
                digits[i]=1;
                digits.insert(digits.begin() + i+1, 0);
            }
        }

        return digits;
       
    }
};