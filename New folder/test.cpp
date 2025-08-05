#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    int m;
    cin>>m;
    vector<int> v;
    for(int i = 0 ; i<=n-1 ; i++){
        cin>>v[i];
    }
    sort(v.begin(), v.end());
    vector<int> v2;
    for(int i = 0 ; i<=m-1 ; i++){
        cin>>v2[m];
    }
    sort(v2.begin(), v2.end());
    for(int i = 0 ; i<=m-1 ; i++){
        int mid = 0 + (n-1)/2;
        if(v2[i]<v[mid]){
             mid--;

        }
        {
            /* code */
        }
        
    }
    }
}
