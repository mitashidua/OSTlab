//Lec-5 hw
//WAP to check if a number is fibonacci or not.
// #include <iostream>
// using namespace std;
// int main () {
//     int n;
//     cout<<"Enter a number : ";
//     cin>>n;
//     int a = 0;
//     int b = 1;
//     while(b<n){
//         int c=a+b;
//         a=b;
//         b=c;
        

//     }
//     if(b==n){
//         cout<<"Fibonacci number";
//     }else{
//         cout<<"Not fibonacci";
//     }
    
//     return 0;

// }

//Lec-3 HW
//Q1)
// #include<iostream>
// using namespace std;
// int main(){
//     int i=1;
//     while(i<=5){
    
    
//         if (i==1 || i==5){
//             int j=1;
//             while(j<=5){
//                 cout<<"*";
//                 j++;
//             }
//             cout<<endl;
            
//         }else{
//             cout<<"*";
//             int j=1;
//             while(j<=3){
//                 cout<<" ";
            
//                 j++;
//             }
//             cout<<"*";
//             cout<<endl;
//         }
//         i++;
//     }

// }

//Q2) 
// #include<iostream>
// using namespace std;
// int main(){
//     int i=1;
//     while(i<=2){
    

//         int j=1;
//         cout<<
//             cout<<"*";
//             while(j<=5-2*i){
//                 cout<<" ";
//             }
//             cout<<"*";
//             j++;
//             cout<<endl;
            
//         }
//     int k=4;
//     while(k<=5){
//             cout<<"*";
//             int j=1;
//             while(j<=3){
//                 cout<<" ";
            
//                 j++;
//             }
//             cout<<"*";
//             cout<<endl;
//         }
//         i++;
    

// }

//Q3)
// #include<iostream>
// using namespace std;
// int main(){
//     int i=1;
//     while(i<=6){
//         int j=1;
//         while(j<=i-1){
//             cout<<" ";
//             j++;
//         }
//         int k=1;
//         while(k<=11-2*i){
//             cout<<"*";
//             k++;
//         }
//         cout<<endl;
//     i++;

//     }
// }

//Q4) 
// #include <iostream>
// using namespace std;
// int main (){
//     int i=1;
//     while(i<=5){
//         int j=1;
//         while(j<=5-i){
//             cout<<" ";
//             j++;
//         }
//         int k=1;
//         while(k<=i){
//             cout<<"* ";
//             k++;
//         }
//         cout<<endl;
//         i++;
//     }
// }

//Q5)
// #include <iostream>
// using namespace std;
// int main (){
//     for(int i = 1 ; i<=5 ; i++){
//         for(int j = 0 ; j<=8 ; j+2){
//             cout<<" ";
//         }
//         for(int k=5 ; k<i ; k--){
//             cout<<"*";
//         }
//     }
// }


//Lec-7 hw
//Q10
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int i = 1;
//     for(i = 1 ; i<= n ; i++){
//         for (int j = 1; j<=i ; j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//     for (int k = n-1 ; k>=1 ; k--){
//         for (int l = 1 ; l <=k ; l++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//     cout<<endl;
// }

//Q12)
// #include <iostream>
// using namespace std;
// int main (){
//     int n;
//     cin>>n;
//     int i =1;
//     if (i == 1 ){
//         for (int m = 1 ; m<= 2*n -1; m++){
//             cout<<"* ";
//         }
//         i++;
//     }
//     cout<<endl;
//     for( i = 2 ; i<=n ; i++){
//         for( int j = 1 ; j<=n-i+1 ; j++){
//             cout<<"* ";
//         }
//         for ( int k = 1 ; k <=2*i - n + 2 ; k++){
//             cout<<"  ";
//         }
//         for ( int l = 1 ; l<=n-i+1 ; l++){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }

//     for (int p = 1 ; p<=n-2 ; p++){
//         for (int q = 1 ; q<=i-n ; q++){
//             cout<<"* ";
//         }
//         for(int r = 1 ; r <= 3*n + 3 - 2*i ; r++){
//             cout<<" ";

//         }
//         for (int s = 1 ; s <= n-1 ; s++){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }

// }

// longest 1s consecutive
// #include<iostream>
// #include <cmath>
// using namespace std;
// int main (){
//     int n, result = 0 , maxresult = 0;
//     cin>>n;
//     for ( int j = 0 ; j <= ceil(log2(n+1)) ; j++){
//             int mask = 1<<j;
//             if( n & mask){
//                 result +=1;
//                 if (result > maxresult){
//                     maxresult = result;
//                 }
            
                
//             }else {
//                 result = 0;
//             }
        
//     }
//     cout<<maxresult;
// }

// 
// #include<iostream>
// #include<cmath>
// using namespace std;
// int main (){
//     int n, m, count =0;
//     cin>>n>>m;
    
//             int result = n ^ m ;
//             while(result){
                
//                     count += result & 1;
//                     result >>=1;
                
//             }
//             cout<<count;


            
            
            

                    
                
            
                
                
            
    
    
// }
// #include<iostream>
// using namespace std;
// int main() {
// 	int test ;
// 	cin>>test;
// 	cout<<endl;
// 	int i = 1 
// 	for(i = 1 ; i<=test ; i++){
// 		int m , n;
// 	    cin>>m>>n;
// 		cout<<endl;
	

// 	}
// 	int Aayush = 0;
// 	int Harshit = 0;
// 	for(i = 1 ; i<=1000 ; i++){
// 		for(int j = 1 ; j <=1000 ; j+2){
// 			Aayush +=j;
// 			if(Aayush > m){
// 				cout<<"Harshit"<<endl;
// 				break;
// 			}
// 		}
// 		for(int j = 2 ; j <=1000 ; j+2){
// 			Harshit +=j;
// 			if(Harshit > n){
// 				cout<<"Aayush"<<endl;
// 				break;
// 			}
// 		}
		

		
// 	}
	

// return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
// 	int n;
// 	cin>>n;
// 	int original = n;
// 	int k ; 
// 	cin>>k;
// 	int mask = 1<<k;
// 	int i = 1; 
// 	for(i = 1 ; i<=n ; i++){
// 		n= n ^ mask;

// 	}
// 	cout<<n;
	
// }

// #include<iostream>
// #include <cmath>
// using namespace std;
// int main(){
// 	int n ;
//     cin>>n;
//     int arr[n];
// 	int count = 0;
//     int i = 0 ; 
//     for(i = 0 ; i<=n-1; i++){
// 	    cin>>arr[i];
//     }
// 	for(i=0 ; i<=n-1 ; i++){
// 		if(arr[i]<0){
// 			count ++;
// 		}
// 	}
// 	for(i = 0 ; i<=m)


// }

// #include<iostream>
// using namespace std;
// int main(){
// 	int n;
// 	cin>>n;
// 	int arr[n];
// 	int i = 0;
// 	for(i = 0 ; i<=n-1 ; i++){
// 		cin>>arr[i];
// 	}
// 	for(int j = 0 ; j<=n-1 ; j++){

	
// 	    for(i = n-j-1 ; i>=0 ; i++){
// 		    if(arr[i]>arr[i+1]){
// 			    swap(arr[i],arr[i+1]);
// 		    }
// 	    }
//     }
// 	for(i = 0 ; i<=n-1 ; i++){
// 		cout<<arr[i];
// 	}
// }

// #include<iostream>
// #include<climits>
// using namespace std;
// void generateMaxSum(int arr[], int n){
	
// 	int maxsum = arr[0];
// 	int currentsum = arr[0];
// 	for(int i = 1 ; i<=n-1 ; i++){
// 	    currentsum = max(arr[i] , currentsum + arr[i] );
// 		maxsum = max(maxsum , currentsum);
			
// 	}
// 	cout<<maxsum;
// }
// int main(){
// 	int n ;
// 	cin>>n;
// 	int i = 0 ; 
// 	int arr[n];
// 	for(i = 0 ; i<=n-1 ; i++){
// 		cin>>arr[i];
// 	}
// 	generateMaxSum(arr, n);
// }

		
			

			
			   
			    

			
// 				int sum = 0;
// 				for(int j = i ; j<=n-1 ; j++ ){
// 					sum +=arr[j];
// 					maxSum = max(maxSum,sum);
			
// 		        }

// 	}
// 	cout<<maxSum;
// }
// int main(){
// 	int n;
// 	cin>>n;
// 	int arr[n];
// 	int i = 0 ;
// 	for(int i = 0 ; i<=n-1 ; i++){
// 		cin>>arr[i];
// 	}
// 	generateMaxSum(arr,n);
// }

// #include <iostream>
// using namespace std;
// int main(){
// 	int n;
// 	cin>>n;
// 	int i = 0 ;
// 	int arr[n];
// 	for(i = 0 ; i<=n-1 ; i++){
// 		cin>>arr[i];

// 	}
// 	int left = 0;
// 	int right = 0;
// 	int area;
// 	int maxwater = 0;
// 	for(right = 0 ; right<=n-1 ; right ++){

	
// 	    int height = min(arr[left],arr[right]);
// 		int width = right - left;
// 		area = height * width ;
// 		maxwater = max(maxwater,area);



// 	}
// 	cout<<maxwater;
// }

#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int i = 0;
	int arr[n];
	for(i = 0 ; i<=n-1 ; i++){
		cin>>arr[i];

	}
	int left = 0;
	int right = n-1;
	int Sereja = 0;
	int Dima = 0;
	bool turn = true;
	for(i = 0 ; i<=n-1 ; i++){
		
		if(turn){

		
			if(arr[left] < arr[right]){
				Sereja +=arr[right];
				right--;

			}else{
				Sereja +=arr[left];
				left++;
				
			}
			turn = !turn;
		}else{
			if(arr[left] < arr[right]){
			    Dima +=arr[right];
				right--;

			}else{
				Dima +=arr[left];
				left++;
				
			}
			turn = !turn;

		}
	}
	cout<<Sereja <<endl;
	cout<<Dima;
}