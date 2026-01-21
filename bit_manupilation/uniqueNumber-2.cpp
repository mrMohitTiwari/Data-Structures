#include <iostream>
#include<vector>
using namespace std;
void uniqueNumbers(vector<int> num){
int n = num.size();
int res=0;
// finding the xor of two uniqueNumbers
for(int i =0;i<n;i++)
{
    res ^=num[i];

}
// finding the position of first set bit
int pos =0;
int temp =res;
while((temp&1)==0){
    pos++; 
    temp = temp>>1;
}
// filtereing out the numbers in array which has bit_set at the position
int setA =0;
int setB=0;
int mask=(1<<pos);
for(int i=0;i<n;i++)
{
    if((num[i]&mask)>0)
    setA ^=num[i];
    else setB ^=num[i];
}



cout<<"number are "<<setA<<" "<<setB<<endl;
}
int main() {
    vector<int> arr = {1,3,5,4,3,1,5,7};
    uniqueNumbers(arr);
    return 0;
}