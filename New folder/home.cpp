// #include <iostream>
// using namespace std;
// int main(){
//     int arr[100];
//     int n ; 
//     cin>>n;
//     int i = 0 ;
//     for(i = 0 ; i<=n-1 ; i++){
//         cin>>arr[i];
//     }
//     int t ;
//     cin>>t;
//     for(int i = 0 ; i<= n-1 ; i++){
//         if (arr[i]==t){
//             cout<<i;
//             break;
//         }
//     }

// }

// #include <iostream>
// using namespace std;
// int main(){
//     int arr[100];
//     int n ; 
//     cin>>n;
//     int i = 0 ;
//     for(i = 0 ; i<=n-1 ; i++){
//         cin>>arr[i];
//     }
//     for(i = 0 ; i<=n-1 ; i++){
//         cout<<arr[i];
//     }
//     cout<<endl;
//     for(i = 0 ; i<= n/2 ; i++){
//         swap(arr[i], arr[n-1-i]);
//     }
//     for(i = 0 ; i<= n-1 ; i++){
//         cout<<arr[i];
//     }

// }

// #include <iostream>
// using namespace std;
// int main(){
//     int arr[100];
//     int n;
//     cin>>n;
//     int i = 0;
//     for(i = 0 ; i<= n-1 ; i++){
//          cin>>arr[i];
//     }
//     for(i = 0 ; i<=n-1 ; i++){
//         swap(arr[i],arr[n-1]);
//     }
//     for(i = 0 ; i<=n-1 ; i++){
//         cout<<arr[i];
//     }
// }

#include <iostream>
using namespace std;
int n;
void generatePairs(int arr[] ,int n){
    int i = 0;
    int count = 0;
    
    for(i = 0 ; i<= n-2 ; i++){
        for(int j = i+1 ; j<=n-1 ; j++){
            if(int t == (arr[i]+arr[j])){
                count +=1;
            }
        }
    }
    cout<<count;
}
int main(){
    int arr[] = {5, 8 , 4 , 7 , 6};
    int t = 11;
    int n = sizeof(arr)/sizeof(int);
    generatePairs(arr , n) ;

}