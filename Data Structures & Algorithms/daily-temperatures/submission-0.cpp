class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector <int> ans(temperatures.size());
        stack <pair<int,int>> stk;
        
        for(int i = 0;i < temperatures.size();i++){
            while(stk.empty() == false && temperatures[i] > stk.top().first){
                ans[stk.top().second] = i - stk.top().second;
                stk.pop();
            }
            stk.push({temperatures[i],i});
        }
    return ans;
    }
};
