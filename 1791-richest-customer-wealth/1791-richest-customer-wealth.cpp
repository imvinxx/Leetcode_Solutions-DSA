class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int maxWealth = 0;
        for (vector<int> customer : accounts){
            int cusWealth = 0;
            for (int bank : customer){
                cusWealth += bank;
            }
            maxWealth = max(maxWealth,cusWealth);
        }
        return maxWealth;
    }
};