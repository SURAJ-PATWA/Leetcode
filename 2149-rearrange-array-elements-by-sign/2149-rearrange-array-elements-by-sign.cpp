class Solution {
public:
    vector<int> rearrangeArray(vector<int>& arr) {
        int n=arr.size();
         vector<int>pos;  // 9 4 5 0  2
	    vector<int>neg;  // -2 -1 -5 -3
	    for(int i=0;i<n;i++){
	    if(arr[i]>=0){
	        pos.push_back(arr[i]);
	    }
	    else{
	       neg.push_back(arr[i]);
	    }
	    }
	    
	   
	    int i=0,j=0,k=0;
	   while(i<n){
	       
	       if(j<pos.size()){
	          arr[i]=pos[j];
	          i++;j++;
	       }
	       if(k<neg.size()){
	           arr[i]=neg[k];
	           i++;k++;
	       }}
        return arr;
	       
	       
    }
};