#include <iostream>
using namespace std;
void overlayNumber(char str[],int n)
{
    int j =0;
    while(n){
 int last_bit = (n&1);
    if(last_bit){
        cout<<str[j];
    }
    n =n>>1;
    j++;
    }
    cout<<"\n";
   

}
void PrintSubseq(char str[]){
    int n = strlen(str);
    for(int i =0;i<(1<<n);i++){
overlayNumber(str,i);
    }

}
int main() {
    char str[100];
        cin>>str;
PrintSubseq(str);
    return 0;
}