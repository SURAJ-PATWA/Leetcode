class Solution {
public:
    int compareVersion(string version1, string version2) {
        int i=0 , j=0 , v1=version1.size(), v2=version2.size(), n1,n2;
        while(i<v1 ||  j<v2){
            n1=0,n2=0;
            
            while(i<v1 && version1[i]!='.'){
                n1=n1*10 +(version1[i]-'0');
                i++;
            }
            while(j<v2 && version2[j]!='.'){
                n2=n2*10 +(version2[j]-'0');
                j++;
            }
            if(n1<n2)return -1;
            else if(n1>n2)return 1;
            i++;j++;
        }
        return 0;
    }
};