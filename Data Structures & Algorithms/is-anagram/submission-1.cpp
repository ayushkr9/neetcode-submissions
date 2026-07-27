class Solution {
public:
    bool isAnagram(string s, string t) {
        int n = s.length();
        int m = t.length();
        unordered_map<char,int>t1;
        unordered_map<char,int>t2 ;
     
        if(n!=m ){
            return false ;

        }else{
         for(int i =0 ;i<n;i++){
            t1[s[i]]++;
            t2[t[i]]++;
         }
        for(auto &p :t1){
            if(t2[p.first]!=p.second){
                return false ;
            }
        }


        }

        return true ;


    }
};
