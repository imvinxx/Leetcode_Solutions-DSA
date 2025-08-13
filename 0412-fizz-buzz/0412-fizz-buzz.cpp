class Solution {
public:
    vector<string> fizzBuzz(int n){
        vector<string> ans;
        for (int i=1;i<=n;i++){
            string currStr = "";
            if (i%3 == 0){
                currStr += "Fizz";
            }
            if (i%5 == 0){
                currStr += "Buzz";
            }
            if (currStr.empty()){
                currStr += to_string(i);
            }
            ans.push_back(currStr);

        }
        return ans;
    
        
    }
};