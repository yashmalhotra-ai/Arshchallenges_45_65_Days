class Solution {
public:
    string convertToTitle(int CN) {
        string C = "";
        int rem;
        while(CN){
            rem = (--CN)%26;  
            CN /= 26;
            C = char('A' + rem) + C;
        }
        return C;
    }
};