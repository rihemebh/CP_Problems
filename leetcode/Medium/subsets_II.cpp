class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
            
        vector<vector<int>> result ;
  
        int n = nums.size();
        
        for(int i=0; i<(1<<n); i++){
            vector<int> v;
            for (int j=0; j<n; j++){
                int bitmask = 1<<j;
                int verif = bitmask&i;
                if(verif ==0 ) v.push_back(nums[j]);
            }
            
            sort(v.begin(), v.end());
            if (!count(result.begin(), result.end(),v)) {
         result.push_back(v);
    }
           
            
        }
        
        return result;
    }
};
