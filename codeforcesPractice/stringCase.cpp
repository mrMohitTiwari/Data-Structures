#include <iostream>
using namespace std;
bool isVowel(char c)
{
   c= tolower(c);
    if (c == 'a' || c =='e' ||c=='y'|| c == 'i' || c == 'o' || c == 'u')
        return true;
        return false;
}
int main()
{
    string s;
    cin >> s;
    string ans;
            for(auto c:s) {
                if(!isVowel(c)){
                ans.push_back('.');
                ans.push_back(tolower(c));
                }
            }
            cout<<ans<<"\n";
    return 0;
}