#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    
    // int count = 0;
    
    // vector<int> v;
    // int n;
    // cin>>n;
    // int t;
    // cin>>t;
    // int arr[n];
    // for(int i = 0 ; i<=n-1 ; i++){
    //     cin>>arr[i];
    // }
    // for(int i = 0 ; i<=n-1 ; i++){
    //     v.push_back(arr[i]);
    // }
    // sort(v.begin(),v.end());
    // int left = 0;
    // int right = n-1;
    // while(left<=right){
    //     if(v[left]+v[right]>t){
    //         count++;
    //         right=right-1;
    //     }else{
    //         count++;
    //         left=left+1;
    //         right=right-1;
    //     }
    // }
    
    // cout<<count;
    // while(v.size()>0){
    //     if(v[0]+v[v.size()-1]>t){
    //         count++;
    //         v.pop_back();
    //     }else{
    //         count++;
    //         v.erase(v.begin());
    //         v.pop_back();
    //     }
    //     if(v.size()==1){
    //         count++;
    //         v.pop_back();
    //     }
       
    int t;
    cin>>t;
    for(int i = 0 ; i<=t-1 ; i++){
        int n;
        cin>>n;
        int count = 0;
        int arr[n];
        for(int i = 0 ; i<=n-1 ; i++){
            cin>>arr[i];
        }
        for(int i = 0 ; i<=n-1 ; i++){
            sort(arr+i+1,arr+n);
            int l=i+1;
            int r = n-1;
            while(l<=r){
                int mid = l + (r-l)/2;
                if(arr[i]>arr[mid]){
                    count+=mid-i+1;
                    l=mid+1;
                }else{
                    r=mid-1;

                }
            }
        

        }
        cout<<count<<endl;
        
    }
    
   
    
    
    
    

    
    

}