#include<iostream>
#include<algorithm>
using namespace std;
int main(){
   int t;
   cin>>t;
   
   for(int i = 0 ; i<=t-1 ; i++){
      int n;
      cin>>n;
      int x;
      cin>>x;
      int arr[n];
      int arr2[n];
      for(int j = 0 ; j<=n-1 ; j++){
         cin>>arr[j];
         arr2[j]=arr[j];
      }
      int answer = 0;
      
      int l = *min_element(arr2,arr2+n);
      int r = *max_element(arr2,arr2+n);
      int mid = l + (r-l)/2;
      while(l<=r){
         if(mid<=x){
            answer = mid;
            l=mid+1;

         }else{
            r=mid-1;
         }

      }
      cout<<answer;




   }
}
