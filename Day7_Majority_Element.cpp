class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count=0,res=0;
        for(auto num:nums){
            if(count==0){
                res=num;
            }
            
            if(res==num){
                count++;
            }
            else{
                count--;
            }
            // cout<<"c: "<<count<<endl;
        }
        return res;
    }
};
    