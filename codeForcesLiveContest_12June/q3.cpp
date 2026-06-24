#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, x;
        cin >> a >> b >> x;
        if (a == b)
        {
            cout << 0 << "\n";
            continue;
        }
        int opr = 0;
       
        while (a != b)
        {

            int t_d1, t_d2;
            if (b > a)
            {
                int t = a;
                a = b;
                b = t;
            }
                // incrememting b 
                if(!a ||!b) {
                    ++opr;
                    break;
                }
                // incrementing b 
                ++b;
                int d1 = a-b;
                if(d1==0) {
                    ++opr;
                    break;
                }
                --b;
                // dividing by x
                 int t_a = a;
                 
                 a = a/x;
                 int d2 = a-b;
                 if(d2==0) {
                    ++opr;
                    break;
                }
                 if(d2<0||a==0){
                        opr+=2;
                            break;
                 }
                 if(d1<d2){
                        a = t_a;
                        ++opr;
                 }
                 else {
                    ++opr;
                 }



           
        }
        cout << opr << "\n";
    }
    return 0;
}