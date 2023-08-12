class Solution {
public:
    vector<int> rearrangeArray(vector<int>& arr) {
        int n=arr.size();
        
        //using striver method
        vector<int>ans(n,0);int PosIndex=0,NegIndex=1;
        
        for(int i=0;i<n;i++){
            if(arr[i]<0){
                ans[NegIndex]=arr[i];NegIndex+=2;
            }else{
                ans[PosIndex]=arr[i];
                PosIndex+=2;
            }
            
        }
        return ans;
//          vector<int>pos;  // 9 4 5 0  2
// 	    vector<int>neg;  // -2 -1 -5 -3
// 	    for(int i=0;i<n;i++){
// 	    if(arr[i]>=0){
// 	        pos.push_back(arr[i]);
// 	    }
// 	    else{
// 	       neg.push_back(arr[i]);
// 	    }
// 	    }
//         for(int i=0;i<n/2;i++){
//             arr[2*i]=pos[i];
//             arr[2*i+1]=neg[i];
//         }
//         return arr;
	    
	   
// 	    int i=0,j=0,k=0;
// 	   while(i<n){
	       
// 	       if(j<pos.size()){
// 	          arr[i]=pos[j];
// 	          i++;j++;
// 	       }
// 	       if(k<neg.size()){
// 	           arr[i]=neg[k];
// 	           i++;k++;
// 	       }}
//         return arr;
	       
	       
    }
};