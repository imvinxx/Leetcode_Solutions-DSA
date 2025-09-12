class Solution {
public:
    bool doesAliceWin(string s) {
        string vow = "AEIOUaeiou";
        int n = s.length();
        int count=0;
        for(char c : s){
            if (vow.find(c) != string::npos) count++;
        }
        if (count !=0 ) return true;
        else return false;
        
    }
};