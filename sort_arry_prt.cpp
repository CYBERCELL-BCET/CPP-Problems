class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
         int n = nums.size(); 
     if(n==1) return nums; // edge case 

     vector<int>res(n);
     int i = 0 , j = n-1;
     while(i<j){
        for(int k = 0 ; k < n ; k++){
          if(nums[k] % 2 == 0){
           res[i] = nums[k];
            i++;
          }
          else{
           res[j] = nums[k];
           j--;
          }
        }
    }
    return res;
    }
};
