class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        
        vector<vector<int>> result ;
  
        int n = nums.size();
        
        for(int i=0; i<(1<<n); i++){
            vector<int> v;
            for (int j=0; j<n; j++){
                int bitmask = 1<<j;
                int verif = bitmask&i;
                if(verif ==0 ) v.push_back(nums[j]);
            }
            
            result.push_back(v);
            
        }
        
        return result;
    }
};
