class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        vector<int>vec1;
        vec1.push_back(1);
        
        for(int i=0; i<numRows; i++) {
            vector<int> vec2;
            vec2.push_back(1);
            for(int j = 1; j<vec1.size(); j++) {
                vec2.push_back(vec1[j]+vec1[j-1]);
            }
            vec2.push_back(1);
            ans.push_back(vec1);
            vec1 = vec2;
        }
        return ans;
    }
};
