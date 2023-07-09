class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> preSum;
        int sum=0,count=0;
        preSum[0]=1;
        for(int i =0;i<nums.size();i++){
            sum+=nums[i];
            // cout<<"Sum "<<sum<<endl;
            int rem=sum-k;
            // cout<<"before count "<<count<<endl;
            if(preSum[rem]>0){
                // cout<<" in before count "<<count<<endl;
                count+=preSum[rem];
                // cout<<"in after count "<<count<<endl;
            }
            // cout<<"after count "<<count<<endl;
            // cout<<"preSum "<<preSum[sum]<<endl;
            preSum[sum]++;
            // cout<<"After preSum "<<preSum[sum]<<endl;
        }
        return count;
    }
    //TC o(N)
};