class Solution
{
    public:
        int majorityElement(vector<int> &nums)
        {            
           // 2nd Method               
           	// Using Moore's Voting Algorithm
            int count = 0;
            int element;
            int n = nums.size();
            for (int i = 0; i < n; i++)
            {
                if (count == 0)
                {
                    element = nums[i];
                    count++;
                }
                else if (nums[i] == element)
                {
                    count++;
                }
                else
                {
                    count--;
                }
            }
           	// now we will find this elemnt really grater than n/2
            int cnt = 0;
            for (int i = 0; i < n; i++)
            {
                if (nums[i] == element) cnt++;
            }
            if (cnt > n / 2) return element;
            return -1;
            
            //1st method

           	// map<int,int>mp;int n=nums.size();
           	// for(int i=0;i < nums.size();i++){
           	//     mp[nums[i]]++;
           	// }
           	// for(auto i:mp){
           	//     if(i.second>n/2)return i.first;
           	// }
           	// return -1;
        }
};