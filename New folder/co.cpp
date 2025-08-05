#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    int n,q;
    cin>>n>>q;
    int sum = 0;
    vector<int> v(n);
    for(int i = 0 ; i<=n-1 ; i++){
        cin>>v[i];
    }
    vector<int> diff(n+1 , 0);
    for(int i = 0 ; i<=q-1; i++ ){
        int l , r;
        cin>>l>>r;
        l--;
        r--;
        diff[l]+=1;
        diff[r+1]-=1;
        

    }
    
    for(int i = 1 ; i<=n ; i++){
        diff[i]+=diff[i-1];
    }
    sort(v.begin() , v.end());
    sort(diff.begin(), diff.end()-1);
    for(int i = 0 ; i<=n-1 ; i++){
        v[i]*=diff[i];
        sum+=v[i];
    }
    cout<<sum;
}
