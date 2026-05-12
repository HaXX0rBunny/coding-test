class Solution {
public:
    int romanToInt(string s) {
        std::string Symbols[13]= {"M","CM", "D","CD", "C", "XC","L","XL","X","IX","V","IV","I"  };
        int LomValue[13] ={1000,900,500,400,100,90,50,40,10,9,5,4,1};
        int result = 0;
        for(int i =0 ; i < s.length();)
        {
            bool bMatched =false;

            if(i +1 <s.length())
            {
                std::string twoChars = s.substr(i,2);
                for(int j = 0 ; j< 13 ; j++)
                {
                    if(Symbols[j]==twoChars)
                    {
                        bMatched = true;
                        result += LomValue[j];
                        i+=2;
                    }
                }
            }
            if(!bMatched)
            {
                std::string Char = s.substr(i,1);
                for(int j = 0; j < 13; j++) {
                    if(Char == Symbols[j]) {
                        result += LomValue[j];
                        i ++;
                        break;
                    }
                }
            }
        }
        return result;
    }
};