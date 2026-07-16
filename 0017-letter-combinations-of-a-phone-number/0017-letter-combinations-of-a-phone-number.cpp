class Solution {
private:
    const vector<string> alphabmap={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    void bTrack(const string& digits, int index, string& current, vector<string>& result){
    if(index == digits.length())
        {
            result.push_back(current);
            return;
        }
        string ltrs = alphabmap[digits[index]-'0'];
        for(char a : ltrs)
        {
            current.push_back(a);
            bTrack(digits, index+1, current, result);
            current.pop_back();
        }

    }
public:
    vector<string> letterCombinations(string digits) {
    
        vector<string> result; 
        if (digits.empty()) {
            return result;
        }
        
        string current = "";
        bTrack(digits, 0, current, result);
        return result;
    }
};