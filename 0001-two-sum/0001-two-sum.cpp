class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
                
        vector<int> result ;
         unordered_map<int, int> map;
        int temp, indice; 
        for(int i=0; i<nums.size(); i++){
            temp = nums[i];
            
            map[temp]=i+1;
        }
        
        for(int i=0; i<nums.size(); i++){
            temp = target-nums[i];
   
                if(map[temp] >0  && i != (map[temp]-1)){
                indice = map[temp]-1;
                    result.push_back(i);
                    result.push_back(indice);
                    break;
               
            }
            
            
        }
        
         return result;
    }
};