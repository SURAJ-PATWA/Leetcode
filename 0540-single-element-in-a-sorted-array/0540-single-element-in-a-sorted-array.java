class Solution {
    public int singleNonDuplicate(int[] a) {
        int result=a[0];
        for(int i=1;i<a.length;i++){
            result=result^a[i];    
        }
         return result;
        
        
        
        
        
    }
}