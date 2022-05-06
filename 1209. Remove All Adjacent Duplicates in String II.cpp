class Solution {
public:
//     bool isSame(string s , int i , int j){
//         char temp = s[i];
//         for(int k = i + 1 ; k <= j ;k++){
//                     if(s[k] != temp)
//                         return false;
//         }
        
//         return true;
//     }
//     string removeDuplicates(string s, int k) {
        
//         int n = s.length() , i = 0;
//         while(i <= n-k ){

//             if(isSame(s , i , i + k -1)){
//                 cout<<s.substr(i , k) << "\n";
//                 string temp = s.substr(0,i-0) + s.substr(i+k , n-i-k + 1);
                
//                 s = temp;
//                 i = 0;
//                 n = s.length();
//             }
//             else{
//                 i++;
//             }
        
        
//         }
        
        
//         return s;
        
//     }
    
    
    
     string removeDuplicates(string s, int k) {
         // I am using double bointer technique to solve this
         
         int  i = 0 , n = s.size();
         vector<int> count(n , 0);
         for(int j = 0 ; j < n ; j++ , i++){
             
             s[i] = s[j];
             
             if(i > 0 && s[i] == s[i -1])
                 count[i] = count[i-1] + 1;
             else
                 count[i] =1;
             
             if(count[i] == k)
                 i -= k;
             
         }
         return s.substr(0 , i);
         
     }
};
