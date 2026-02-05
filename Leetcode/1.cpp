    #include <iostream>
    using namespace std;

    int main()
    {
        string a, b, ans;
        cin >> a >> b;
        int i = a.size()-1;
        int j = b.size()-1;
        int carry = 0;
        
        while(i>=0 ||j>=0 ||carry>0){
            int x = i>=0?a[i]-'0':0;
            int y = j>=0?b[j]-'0':0;
            int sumEachBit = carry+x+y;

            ans.insert(0,1,(sumEachBit%2)+'0');
            carry = sumEachBit/2;
            i--;
            j--;

        }
        cout << "answer is" << ans;
        return 0;
    }
    