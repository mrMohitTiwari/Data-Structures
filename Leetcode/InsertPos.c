#include<stdio.h>
int posOfEl(int arr[],int n ,int el ){
          int l =0 , h = n-1;
          while(l<=h){
                  int mid = l +(h-l)/2;
                  if(mid==0) return 0;
                  if(mid==n-1) return n;
                  if(arr[mid]<el) l = mid+1;
                  else h = mid-1;
                }
          return h;

}
int main(){
        int arr[5]={1,2,3,4,6};
        printf("%d\n",posOfEl(arr,5,7));


}
