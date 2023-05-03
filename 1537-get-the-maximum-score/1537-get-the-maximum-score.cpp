class Solution {
public:
    int maxSum(vector<int>& A, vector<int>& B) {
        int l1=A.size();int l2=B.size();
        
       long long i=0,j=0,sum1=0,sum2=0,res=0;
         long long mod = 1e9+7;
        while(i<l1 && j<l2){
            if(A[i]<B[j]){
              sum1+=A[i];  
              i++;
            }
            else if(A[i]>B[j])
            {
                sum2+=B[j];
                j++;
            }
            else{
                // both equal abb yahi kand hoga
                res+=max(sum1,sum2)+A[i];
                i++;j++;
                sum1=0;sum2=0;
                res=res%mod;
            }
        }
        while(i<l1){
            sum1+=A[i];
            i++;
        }
        while(j<l2){
            sum2+=B[j];
            j++;
        }
        res+=max(sum1,sum2);
        return res%mod; 
    }
};