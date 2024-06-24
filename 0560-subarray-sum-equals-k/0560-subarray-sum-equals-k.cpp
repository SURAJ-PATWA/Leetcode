class Solution {
public:
    int subarraySum(vector<int>& arr, int k) {
       
int n=arr.size();
        int c=0;
        int sum=0;
        unordered_map<int,int>mp;
        
        for(int i=0;i<n;i++){
            sum+=arr[i];
            if(sum==k){
                c++;
            }
            
            if(mp.find(sum-k)!=mp.end()){
                c+=mp[sum-k];
            }
            // if(mp.find(sum)!=mp.end()){
                mp[sum]++;
            // }
            // else{
            //     mp[sum]=1;
            // }
        }
        return c;
    }



     

  
};
    
    // only for positive as @adity verma
    /* int n=arr.size();
        int i=0;int j=0;
        int sum=0;
        int c=0;
        
        while(j<n){
            sum+=arr[j];
            while(sum > k  && i<j){
                sum-=arr[i];
                i++;
            }
            
            if(sum==k){
               c++; 
            }
            j++;
        }

        return c;
    } 
    */


 
