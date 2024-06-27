// problem link
// https://leetcode.com/problems/find-center-of-star-graph



class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        map<int, int> mp;

        for(int i = 0;i < edges.size();i++){
            mp[edges[i][0]]++;
            mp[edges[i][1]]++;
        }
        int n = edges.size();

        for(auto i : mp){
            if(i.second == n){
                return i.first;
            }
        }
        return 0;
    }
};
