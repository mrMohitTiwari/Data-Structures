#include <iostream>
#include<string>
#include<vector>
using namespace std;
int findIndex(string s)
{
        vector<int> freq(26,0);
    // creating the frequency table
    for(auto ch:s)
            freq[ch-'a']++;

            for(int i=0;i<s.size();i++){
                // returning the first non repeating character
                if(freq[s[i]-'a']==1) {
                    return i;
                }
            }
    return -1;
}

int main() {
    string s;
    cin>>s;
            cout<<findIndex(s);
    return 0;
}
