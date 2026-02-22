// class Solution {
// public:
//     bool canConstruct(string ransomNote, string magazine) {

//         int hash[255]={0};
//         for(int i =0;i<magazine.size();i++) hash[magazine[i]]++;
//         //    now consuming the string ransomeNote
//         for(int i =0;i<ransomNote.size();i++){
//             hash[ransomNote[i]]--;
//             if(hash[ransomNote[i]]<0) return false;
//     }




//     }



//         /*solution 1 
//         int hash1[255] ={0};
//          int hash2[255] ={0};
//        for(int i =0;i<magazine.size();i++){
//         hash1[magazine[i]]++;
//        }
//        for(int i =0;i<ransomNote.size();i++){
//            hash2[ransomNote[i]]++;
//        }
//     //    checking if hash values are equal for each characters
//          for(int i =0;i<ransomNote.size();i++){
//           if(hash1[ransomNote[i]]<hash2[ransomNote[i]]) return false;
//        }
//        return true;
//        */
//     }
// };