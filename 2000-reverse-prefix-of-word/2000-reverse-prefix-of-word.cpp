class Solution {
public:
    string reversePrefix(string arr, char ch) {
       int index=-1;
        int n=arr.size();
        
        for(int i=0;i<n;i++){
            if(arr[i]==ch){
                index=i;
                break;
            }
        }
        
        
        for(int i=0;i<index+1;i++){
            swap(arr[i],arr[index]);
            index--;
        }
        return arr;
        
    }
};