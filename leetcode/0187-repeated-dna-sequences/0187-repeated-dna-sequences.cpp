class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
         if(s.length() < 10) return {};
        vector<string> res;
        map<string, int> umap; 

        string ts = s.substr(0, 10);
        umap[ts]++;
        for(int i = 11; i <= s.length(); i++){
            ts = s.substr(i-10, 10);
            if(umap[ts] == 1) res.push_back(ts);
            umap[ts]++;
        }
                
        return res;
    }
};