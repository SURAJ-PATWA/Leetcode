class Solution {
public:
    int fib(int n) {
        if(n==0||n==1)return n;
  vector<int>arr(n+1);
   //long arr[31];
    arr[0]=0;
    arr[1]=1;
    for(int i=2;i<=n;i++){
        arr[i]=arr[i-1]+arr[i-2];
    }
    return arr[n];
     
    }
};