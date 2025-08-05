// #include <iostream>
// #include <math.h>
// using namespace std;

// int main (){
    
    //LEC-5 
    /*cout<<"Hello World";
    cout<<endl;
    cout<<10;
    cout<<endl;
    cout<<'x';
    cout<<endl;
    cout<<3.14;
    cout<<endl;
    cout<<10+20;
    cout<<endl;
    cout<<true;
    cout<<endl;
    cout<<false;
    cout<<endl;*/

    
    // we can chain insertion operator i.e. <<.

    // cout<<"hello world" << endl << 10 << endl << 'x' <<endl;

    // int x;
    // char ch;
    // double y;
    // cin>>x>>ch>>y;
    // cout<<x<<" "<<ch<<" "<<y<<endl;

    // by default, when you declare variable, it contains garbage value.
    // int z;
    // cout<<z;
    // return 0;

    // int x; // declaration
    // x=20; // assignment
    // cout<<x<<endl;

    // int w = 20; // initialisation
    // cout<<w<<endl;

    // int a=10;
    // int b = 5;
    // cout<<"a+b ="<<a+b<<endl;

    // int p,r,t , si;
    // cout<<"Enter the numbers : "<<endl;
    // cin>> p >> r >> t;
    // si = float((p*r*t)/100);
    // cout<<"Simple Interest is "<<si<<endl;

    // WAP to check whether a person is eligible to vote or not
    // int age;
    // cout<<"Enter your age :"<<endl;
    // cin>>age;
    // if (age>=18){
    //     cout<<"You are eligible to vote.";
    // }else{
    //     cout<<"You are not eligible to vote.";
    // }
    // return 0;

    //WAP if marks are 91 to 100 then A 81 to 90 then B less than 51 F
    // int marks;
    // cout<<"Enter your marks : ";
    // cin>>marks;
    // if (marks >=91 and marks <=100){
    //     cout<<"Grade : A"<<endl;
    // }else if (marks >=81 and marks <=90){
    //     cout<<"Grade : B"<<endl;
    // }else if (marks >=71 and marks <=80){
    //     cout<<"Grade : C"<<endl;
    // }else if (marks >=61 and marks <=70){
    //     cout<<"Grade : D"<<endl;
    // }else if (marks >=51 and marks <=60){
    //     cout<<"Grade : E"<<endl;
    // }else{
    //     cout<<"Grade : F"<<endl;
    // }

    //WAP to find largest of three numbers
    // int a,b,c;
    // cout<<"Enter three numbers : ";
    // cin>>a>>b>>c;
    
    // if (a>b and a>c){
    //     cout<<"Largest is "<<a<<endl;
    // }else if (b>c){
    //     cout<<"Largest is "<<b<<endl;
    
    // }else{
    //     cout<<"Largest is "<<c<<endl;
    // }

    // char grade;
    // cout<<"Enter your grade : ";
    // cin>>grade;
    // if (grade == 'A'){
    //     cout<<"Very good";
    // }else if (grade == 'B'){
    //     cout<<"Good";
    // }else if (grade == 'C'){
    //     cout<<"Average";
    // }else if (grade == 'D'){
    //     cout<<"Poor";
    // }else if (grade == 'E'){
    //     cout<<"Very poor";
    // }else{
    //     cout<<"Fail";
    // }

    // char grade;
    // cout<<"Enter your grade : ";
    // cin>>grade;
    // switch(grade){
    //     case'A' : cout<<"Very good"<<endl; break;
    //     case'B' : cout<<"Good"<<endl; break;
    //     case'B' : cout<<"Good"<<endl; break;
    //     case'B' : cout<<"Good"<<endl; break;
    //     case'B' : cout<<"Good"<<endl; break;
    //     case'B' : cout<<"Good"<<endl; break;
    //     default : cout<<"Invalid"<<endl;
    // }

    // Wap to print first n natural numbers.
    // int n;
    // cout<<"Enter a number : ";
    // cin>>n;
    // int i=1;
    // while(i<=n){
    //     cout<<i<<endl;
    //     i=i+1;
    // }


    //LEC - 6 

    //WAP to find sum of digits
    // int n;
    // cout<<"Enter a number : ";
    // cin>>n;
    // int digit = 0;
    // while (n>0){
    //     digit=digit + n%10;
    //     n=n/10;
    // }
    // cout<<"Sum of digits of digits is "<<digit<<endl;

    //WAP to reverse a number.
    // int n;
    // cout<<"Enter a number : ";
    // cin>>n;
    // int d=0, digit = 0;
    // while (n>0){
    //     d=d*10+n%10;
    //     n=n/10;
    // }
    // int nw = d;
    // cout<<nw;

    //WAP to find nth fibonacci number
    // int n ;
    // cout<<"Enter nth : ";
    // cin>>n;
    // int a=0;
    // int b = 1;
    // int c = a+b;
    // if (n == 0) {
    //     cout<<0<<endl;
    // } else if (n==1){
    //     cout<<1<<endl;
    // } else{
    //     int i=1;
    //     while(i<=n-1){
    //         c=a+b;
    //         a=b;
    //         b=c;
    //         i=i+1;
    //     }
    //     cout<<b<<endl;
    // }

    //WAP to find the largest of n numbers.
// #include <iostream>
// using namespace std;
// int main () {
//     int n , numbers;
//     int i =1;
//     while(i<=n){
//         cout<<"Enter the numbers : ";
//         cin>>numbers;
//         i=i+1;
//         while(i<=n){
//           int lsf = i;
//           if (i<i+1){
//             lsf = i+1;
//           }
//           i=i+1;
        
//     }
//     cout<<lsf;
// }  


//WAP to find whether a number is prime or not.
    // int n;
    // cout<<"Enter a number : ";
    // cin>>n;
    // int num;
    // int i=2;
    // while (i<sqrt(n)){
    //     if(n%i==0) {
    //         return "false";
    //         break;


    //     }else{
    //         cout<<"true";
    //         break;
    //     }
        
    // }

    //WAP to find square root of a number
    // int n;
    // cout<<"Enter a number : ";
    // cin>>n;
    // int i=0;
    // while(i*i<=n){
    //     i=i+0.1;
    // }
    // i=i-0.1;
    // cout<<i;

    
    //Lec-6
    //Print series 1 10  2 9  3 8....5 6
// #include<iostream>
// using namespace std;
// int main(){
    // int n;
    // cout<<"Enter a number : ";
    // cin>> n;
    // int i;
    // for(i = 1 ; i<=10 ; i++){
    //     for(int j =1 ; j<=5 ; j++){
    //       cout<<j<<" "<<11-j<<endl;
    //     }
    //     break;
    // }

    // *
    // * * 
    // * * * 5 times
    // int n;
    // cin>>n;
    // int i;
    // for (i=1; i<=n; i++){
    //     for(int j =1 ; j<=i ; j++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }

    // int n;
    // cin>>n;
    // int i;
    // for (i=1; i<=n; i++){
    //     int num=1;
    //     for(int j =1 ; j<=i ; j++){
    //         cout<<num<<" ";
    //         num++;
    //     }
    //     cout<<endl;
    // }

    // 1
    // 2 3 
    // 4 5 6

    // int n;
    // cin>>n;
    // int i;
    // int num=1;
    // for (i=1; i<=n; i++){
    //     for(int j =1 ; j<=i ; j++){
    //         cout<<num<<" ";
    //         num++;
    //     }
    //     cout<<endl;
    // }

    // 1
    // 0 1
    // 1 0 1

    // int n;
    // cin>>n;
    // int i;
    // for (i=1; i<=n; i++){
    //     int num = i%2 == 0 ? 0 : 1;
    //     for(int j =1 ; j<=i ; j++){
    //         cout<<num<<" ";
    //         num=1-num;
    //     }
    //     cout<<endl;
    // }

    //    *
    //   **
    //  ***
    // ****
    //***** 

    // int n;
    // cin>>n;
    // int i;
    // for (i=1; i<=n; i++){
    //     for(int j =1 ; j<=n-i ; j++){
    //         cout<<" ";
            
    //     }
    //     for(int k = 1; k<=i ; k++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }

    //     1
    //   2 3
    // 4 5 6
   
    // int n;
    // cin>>n;
    // int i;
    // for (i=1; i<=n; i++){
    //     for(int j =1 ; j<=n-i ; j++){
    //         cout<<" ";
            
    //     }
    //     for(int k = 1; k<=i ; k++){
    //         cout<<k;
    //     }
    //     cout<<endl;
    // }

    // Characters
    // char ch = '8';
    // cout<<ch<<endl;
    // cout<<int(ch)<<endl;
    // cout<<ch-'0'<<endl;

    // read characters until dollar is printed then write how many characters were read before dollar
    // int total = 0;
    // while (true){
    //     char ch ;
    //     ch = cin.get(); // it reads whitespaces which were not read by cin
    //     if(ch == '$'){
    //         break;
    //     }
    //     total++;
    // }
    // cout<<total;

    // print whether the given digit is uc lc digit or sp
    // char ch;
    // cin>>ch;
    // if (ch>= 65 and ch<=90){
    //     cout<<"Uppercase";
    // }else if( ch >= 97 and ch <= 122){
    //     cout<<"Lowercase";
    // } else if (ch >= 48 and ch<= 57){
    //     cout<<"Digit";
    // }else{
    //     cout<<"Special character";
    // }

    // print how many of the netered characters are up lp digits sp or whitespaces until dollar is entered
    // int up=0 , lp= 0 , sp=0 , ws=0, digit =0;
    // while (true){
    //     char ch ;
    //     ch = cin.get(); // it reads whitespaces which were not read by cin
    //     if(ch == '$'){
    //         break;
    //     }
    //     if (ch>= 65 and ch<=90){
    //         up+=1;
    //     }else if( ch >= 97 and ch <= 122){
    //         lp+=1;
    //     } else if (ch >= 48 and ch<= 57){
    //         digit+=1;
    //     }else if (ch == ' ' or ch== ' \n' or ch=='\t'){
    //         ws+=1;
    //     }else{
    //         sp+=1;
    //     }
    // }
        

    // cout<<"lowercase = "<<lp<<endl<<"Uppercase = "<<up<<endl<<"Digits = "<<digit<<endl<<"Special Characters = "<<sp<<endl<<"Whitespaces = "<<ws<<endl;

    // ABCDE
    // ABCD
    // ABC
    // AB
    // A
// #include<iostream>
// using namespace std;
// int main(){
    // int n;
    // for(int i = 1; i<=n ; i++){
    // char ch = 'A';
    //     for(int j = 1 ; j<= n-i+1 ; j++){
    //         cout<<ch;
    //         ch++;
    //     }
    //     cout<<endl;
    // ch--;
    //     for (int j = 1 ; j<=n-i+1 ; j++){
    //         cout<<ch;
    //         ch--;
    //     }
    // }
    // cout<<endl;



    //       *
    //      ***
    //     *****
    //    *******
    //   *********
    //    *******
    //     *****
    //      ***
    //       *
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int m = n-n/2;
//     int i = 1;
//     for(i = 1 ; i<=m ; i++){
//         for (int j = 1 ; j<=m-i ; j++){
//             cout<<" ";
//         }
//         for(int k = 1 ; k<=2*i - 1 ; k++){
//             cout<<"*";
//         }
//         cout << endl;
//     }
//     for(i = 1 ; i <=m-1 ; i++){
//         for (int )

//     }
        



// }
   

// There are some numbers which are present twice except one number find that unique number
// #include<iostream>
// using namespace std;
// int main(){
//     int n ;
//     cin>>n;
//     int i = 1 ; 
//     int result = 0;
//     for (i = 1 ; i<=n ; i++){
//         int num;
//         cin>>num;
//         result = result ^ num;

//     }
//     cout<<result;

//     return 0;
// }

// Using bitwise, chcek whether a number is even or odd.
// #include<iostream>
// using namespace std;
// int main(){
//     int a;
//     cin>>a;
//     if (a&1){
//         cout<<"Odd";

//     }else{
//         cout<<"Even";
//     }

//     return 0;
// }

// given a number change 0 to 1 in the kth bit
// #include<iostream>
// using namespace std;
// int main(){
//     int n, result = 0;
//     cin>>n;
//     int k;
//     cin>>k;
//     int mask = 1<<k;
//     result = n | mask;
//     cout<<result;



//     return 0;
// }

// // given a number change 1 to 0 in the kth bit
// #include<iostream>
// using namespace std;
// int main(){
//     int n, result = 0;
//     cin>>n;
//     int k;
//     cin>>k;
//     int mask = ~(1<<k);
//     result = n & mask;
//     cout<<result;



//     return 0;
// }

// // given a number check kth bit is 0 or 1
// #include<iostream>
// using namespace std;
// int main(){
//     int n, result = 0;
//     cin>>n;
//     int k;
//     cin>>k;
//     int mask = 1<<k;
//     result = n & mask;
//     if (result == 0){
//         cout << "Not set bit";
//     }else {
//         cout<<"Set bit";
//     }
    



//     return 0;
// }

// // given a number flip kth bit
// #include<iostream>
// using namespace std;
// int main(){
//     int n, result = 0;
//     cin>>n;
//     int k;
//     cin>>k;
//     int mask = 1<<k;
//     result = n ^ mask;
//     cout<<result ;
    
    



//     return 0;
// }

// calculate number of bits
// #include<iostream>
// using namespace std;
// int main(){
//     int n, count = 0;
//     cin>>n;
//     while(n>0){
//         int rightbit = n&1;
//         if (rightbit ==1){
//             count ++;
//         }
//     }
    
//     cout<<count ;
    
    



//     return 0;
// }

//Given an array of N integers , and an integer T , design an algorithm to find first occurrence , if not found, print -1
// #include<iostream>
// using namespace std;
// int main(){
//     int N;
//     cin>>N;
//     int arr[N];
//     for (int i = 0 ; i<= N-1 ; i++){
//         cin>>arr[i];
//     }
//     int t;
//     cin>>t;
//     int i;
//     for (i = 0 ; i<= N-1 ; i++){
//         if (arr[i] == t){
//             cout<<t<<" found at index "<<i<<endl;
            

//             break;
//         }
        
    
//     }
//     if (i==N){
//         cout<<-1<<endl;

//     }


    
// }

// OR
// #include<iostream>
// using namespace std;

// int main(){
//     int N;
//     cin >> N;
//     int arr[N];

//     // Input array elements
//     for (int i = 0; i < N; i++){
//         cin >> arr[i];
//     }

//     int t, flag = 0;
//     cin >> t;

//     // Search for element t
//     for (int i = 0; i < N; i++){
//         if (arr[i] == t){
//             cout << t << " found at index " << i << endl;
//             flag = 1;
//             break;
//         }
//     }

//     // If not found
//     if (flag == 0){
//         cout << -1 << endl;
//     }

//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main(){
//     int N;
//     cin >> N;
//     int arr[N];

//     // Input array elements
//     for (int i = 0; i < N; i++){
//         cin >> arr[i];
//     }

//     int t;
//     cin >> t;
//     bool flag = false;

//     // Search for element t
//     for (int i = 0; i < N; i++){
//         if (arr[i] == t){
//             cout << t << " found at index " << i << endl;
//             flag = true;;
            
//         }
//     }

//     // If not found
//     if (!flag){
//         cout << -1 << endl;
//     }

//     return 0;
// }


// #include<iostream>
// #include<algorithm> // for swap
// using namespace std;

// int main(){
//     int N;
//     cin >> N;
//     int arr[N];

//     // Input array elements
//     for (int i = 0; i < N; i++){
//         cin >> arr[i];
//     }

//     // Reversing using two pointers: i (start), j (end)
//     int i = 0, j = N - 1;
//     while(i < j){
//         swap(arr[i], arr[j]);
//         i++;
//         j--;
//     }

//     // Output the reversed array
//     for (int i = 0; i < N; i++){
//         cout << arr[i] << " ";
//     }

//     return 0;
// }


//Swap numbers - 50 10 20 30 40
// #include<iostream>
// #include<algorithm> // for swap
// using namespace std;

// int main(){
//     int N;
//     cin >> N;
//     int arr[N];

//     // Input array elements
//     for (int i = 0; i < N; i++){
//         cin >> arr[i];
//     }

//     // Reversing using two pointers: i (start), j (end)
//     int i = 0, j = N - 1;
//     while(i < j){
//         swap(arr[i], arr[j]);
//         i++;
        
//     }

//     // Output the reversed array
//     for (int i = 0; i < N; i++){
//         cout << arr[i] << " ";
//     }

//     return 0;
// }

// #include<iostream>
// #include<algorithm> // for swap
// using namespace std;

// int main(){
//     int N;
//     cin >> N;
//     int arr[N];

//     // Input array elements
//     for (int i = 0; i < N; i++){
//         cin >> arr[i];
//     }

//     // Reversing using two pointers: i (start), j (end)
//     for (int i = N-1 ; i >=1 ; i--){
//         swap (arr[i] , arr[i -1]);

        
//     }
        
    

//     // Output the reversed array
//     for (int i = 0; i < N; i++){
//         cout << arr[i] << " ";
//     }

//     return 0;
// }

// Rotate the array k times 
// #include<iostream>
// #include<algorithm> // for swap
// using namespace std;

// int main(){
//     int N;
//     cin >> N;
//     int arr[N];
//     int k ;
//     cin >>k;

//     // Input array elements
//     for (int i = 0; i < N; i++){
//         cin >> arr[i];
//     }

//     // Reversing using two pointers: i (start), j (end) // time spent : O(kn)
//     for (int j = 1 ; j <=k ; j++){
//         for (int i = N-1 ; i >=1 ; i--){
//             swap (arr[i] , arr[i -1]);

            
//         }
//     }
    

//     // Output the reversed array
//     for (int i = 0; i < N; i++){
//         cout << arr[i] << " ";
//     }

//     return 0;
// }

//or
// #include<iostream>
// #include<algorithm> // for swap
// using namespace std;

// int main(){
//     int N;
//     cin >> N;
//     int arr[N];
//     int k ;
//     cin >>k;

//     // Input array elements
//     for (int i = 0; i < N; i++){
//         cin >> arr[i];
//     }

//     // Reversing using two pointers: i (start), j (end) // time spent : O(kn)
//         int i = 0;
//         int j = n-1;
//         while(i < j ){
//             swap (arr[i] , arr[j]);
//             i++;
//             j--;

            
//         }
//     }
    

//     // Output the reversed array
//     for (int i = 0; i < N; i++){
//         cout << arr[i] << " ";
//     }

//     return 0;
// }


//Lec-9
// #include <iostream>
// using namespace std;
// void greet () {
//     cout<<"Hello World";
//     return ; // optional
// }
// int main (){
//     cout<<"Inside main before greet()"<<endl;
//     greet ();
//     cout<<endl;
//     cout<<"Inside main after greet()"<<endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int isEven(int n) {
//     if (n%2 == 0){
//         cout<<n<<" is even."<<endl;
//     }else{
//         cout<<n<<" is odd."<<endl;
//     }
// }
// int main (){
   
//     isEven (2);
//     cout<<endl;
//     isEven(5);
//     cout<<endl;
//     return 0;
    //Here int n is parameter {formal parameter} while 2  and 5 entered as values in the function are arguments{actual parameter}
// }
//or

// #include <iostream>
// using namespace std;
// bool isEven(int n) {
//    return n%2==0;
//     // whenever a function returns a value, you can treat this function call as expression
// }
// int main (){
//     bool ans = isEven(2);
//     cout<<ans<<endl;
//     cout<<isEven(5)<<endl;
//     isEven(9) ? cout<<"even"<<endl : cout<<"odd"<<endl;
//     return 0;
// }

//Waf to multiply two integers.
// #include <iostream>
// using namespace std;
// int multi(int m,int n) {
//     int c=m*n;
//     return c;
//     // whenever a function returns a value, you can treat this function call as expression
// }
// int main (){
//     int ans = multi(2,5);
//     cout<<ans<<endl;
//     cout<<multi(5,7)+100<<endl;
    
//     return 0;
// }



// #include <iostream>
// using namespace std;
// int multi(int m,int n) {
//     int c=m*n;
//     return c;
//     // whenever a function returns a value, you can treat this function call as expression
// }
// int main (){
//     int a =2;
//     int b= 3;
//     cout<<multi(a,b)<<endl;
    
    
//     return 0;
// }


// Q) increment function won't work because it is pass by value where copy is generated when cout is working. Increment operation will work when we will do pass by reference.
// #include <iostream>
// using namespace std;
// int incre(int a) {
//     a++;
   
//     // whenever a function returns a value, you can treat this function call as expression
// }
// int main (){
//     int a = 10;
//     incre(a);
//     cout<<a<<endl;
   
    
//     return 0;
// }

//Q) same by pass by reference we use &
// #include <iostream>
// using namespace std;
// int incre(int& ref) {
//     ref++;
   
//     // whenever a function returns a value, you can treat this function call as expression
// }
// int main (){
//     int a = 10;
//     incre(a);
//     cout<<a<<endl;
   
    
//     return 0;
// }

//Q) Swap two integers in a function
// #include<iostream>
// using namespace std;
// void mySwap(int& a , int& b){
//     a = a^b;
//     b = a^b;
//     a = a^b;

// }
// int main(){
//     int a = 10;
//     int b = 20;
//     cout<<a<<" "<<b<<endl;
//     cout<<"After using mySwap()"<<endl;
//     mySwap(a,b);
//     cout<<a<<" "<<b;

// }

//CONCEPT OF CONST REF
// #include<iostream>
// using namespace std;


// int main(){
//     int x = 10;
//     const int& y = x;
//     cout<<y<<endl;
//     x++;
//     cout<<x<<endl;
    
//     cout<<y<<endl;
//     y++; //error since y is a const ref which means using y value is const it wont increase or decrease

// }

// #include<iostream>
// using namespace std;


// int main(){
//     const int x = 10;
//     int& y = x;
//     cout<<y<<endl;
    // x++; //error since x is a const which means using y value, x wont increase or decrease

//     cout<<x<<endl;
    
//     cout<<y<<endl;
//     y++; 
// }

//Waf to check if an integer is prime
// #include <iostream>
// #include <cmath>
// using namespace std;

// bool prime(int n) {
//     if (n < 2) return false; // Optional but recommended
//     for (int i = 2; i <= sqrt(n); i++) {
//         if (n % i == 0) {
//             return false;
//         }
//     }
//     return true;
// }

// int main() {
//     int n;
//     cin >> n;

//     // Correct way to use ternary here
//     prime(n) ? cout << n << " is prime" : cout << n << " is not prime";

//     return 0;
// }

//Waf to give array in a fuction cstyle arrays are by default passed by reference to save memory and time
// #include <iostream>
// using namespace std;

// void modify(int arr[], int n) {
//     for (int i = 0; i < n; i++) {
//         arr[i]++;
//     }
// }

// int computeSum(int arr[], int n) {
//     int sum = 0;
//     for (int i = 0; i < n; i++) {
//         sum += arr[i];
//     }
//     return sum;
// }

// int main() {
//     int arr[] = {10, 20, 30, 40, 50};
//     int n = sizeof(arr) / sizeof(int);

//     modify(arr, n);
//     int sum = computeSum(arr, n);

//     cout << "Sum after modification: " << sum << endl;

//     return 0;
// }

// Arrays bubblesort
// #include <iostream>
// using namespace std;
// void bubbleSort(int arr[] ,int n){
//     for(int i = 0 ; i<=n-1 ; i++){
//         for (int j=0; j<n-i-1;j++){
//             if(arr[j] > arr[j+1]){
//                 swap(arr[j] , arr[j+1]);
//             }

//         }
//     }
    
// }
// int main(){
//     int arr[] = {50 , 40 , 30 , 20 , 10};
//     int n = sizeof(arr)/sizeof (int);
//     bubbleSort(arr , n);
//     for (int i = 0 ; i<n ; i++){
//         cout<<arr[i]<<" ";
//     }
// }

//array selection sort
// #include <iostream>
// using namespace std;
// void selectionSort(int arr[], int n){
//     for(int i = 0; i<=n-2;i++){
//         int minIndex = i;
//         for (int j = i+1;j<n-i; j++){
//             if (arr[minIndex] >arr[j]){
//                 minIndex = j;
//             }
//         }
//         swap(arr[minIndex] , arr[i]);
//     }
// }
// int main(){
//     int arr[] = {50 , 40 , 30 , 20 , 10};
//     int n = sizeof(arr)/sizeof (int);
//     selectionSort(arr, n);
//     for (int i = 0 ; i<n ; i++){
//         cout<<arr[i]<<" ";
//     }

// }

//array insertion sort
// #include <iostream>
// using namespace std;
// void insertionSort(int arr[], int n){
//     for(int i = 0; i<=n-2;i++){
//         int j=i-1;
//         int key = arr[i];
//         while(j>=0 and key< arr[j]){
//             arr[j+1] = arr[j];
//             j--;
//         }
//         arr[j+1] = key;
//     }
// }
// int main(){
//     int arr[] = {50 , 40 , 30 , 20 , 10};
//     int n = sizeof(arr)/sizeof (int);
//     selectionSort(arr, n);
//     for (int i = 0 ; i<n ; i++){
//         cout<<arr[i]<<" ";
//     }

// }

//Binary Search
// #include <iostream>
// using namespace std;
// void binarySearch(arr[], int n){
//     int s= 0;
//     int e = n-1;
//     int m = s +(e-s)/2 ;
//     for(int i = 0; i<=e;i++){
//         if (arr[i] == m){
//             return
//         }else if (arr[i] > m){
//                 s= m+1;

//         }else if (arr[i] < m){
//             e = m-1;
//         }

            
            
//         }
        
        
//         swap(arr[minIndex] , arr[i]);
//     }
// }
// int main(){
//     int arr[] = {50 , 40 , 30 , 20 , 10};
//     int n = sizeof(arr)/sizeof (int);
//     selectionSort(arr, n);
//     for (int i = 0 ; i<n ; i++){
//         cout<<arr[i]<<" ";
//     }

// }

//Lec 12 arrays 
// Q) given an array of n integers , find the no. of pairs
// #include<iostream>
// using namespace std;
// void fun(){
//     int arr[100];
//     int n;
//     cin>>n;
//     for(int i = 0 ; i<=n-1 ; i++){
//         cin>>arr[i];
//     }
//     for(int i = 0 ; i<=n-2; i++){
//         for(int j = i+1; j<=n-1; j++){
//          cout<<"("<<arr[i]<<","<<arr[j]<<")"<<",";
//         }
//         cout<<endl;
//     }

// }
// int main(){
    
//     fun();
    
    
// }

// given an array , see the no. of pairs whose sum is equal to target sum (solve for optimised)
// #include<iostream>
// using namespace std;
// int cnt = 0;
// void fun(){
//     int arr[100];
//     int n;
//     cin>>n;
//     int t ;
//     cin>>t;
//     for(int i = 0 ; i<=n-1 ; i++){
//         cin>>arr[i];
//     }
//     for(int i = 0 ; i<=n-2; i++){
//         for(int j = i+1; j<=n-1; j++){
//            int sum = arr[i] + arr[j];
//            if(sum == t){
//               cnt +=1;
//            }



//         }

//     }
//     cout<<cnt;

// }
// int main(){
    
//     fun();
//     return 0;
// }


// Sereja and Dima question in one note
// #include<iostream>
// using namespace std;
// int main(){
//     int n;cin>>n;
//     int arr[100];
//     for(int k = 0 ; k <=n-1 ; k++){
//         cin>>arr[k];
//     }
//     int i = 0 ;
//     int j = n-1;
//     int sereja = 0 ; int dima = 0 ;
//     bool turn = true;
    
//     while(i <= j) {
//         int chosen;
//         if(arr[i] > arr[j]) {
//             chosen = arr[i];
//             i++;
//         } else {
//             chosen = arr[j];
//             j--;
//         }

//         if(turn) {
//             sereja += chosen;
//         } else {
//             dima += chosen;
//         }
//         turn = !turn;

        
//     }

//     cout << sereja << " " << dima << endl;

//     return 0;
// }

    
//Merge two sorted arrays


//Lec-12
// #include<iostream>
// using namespace std;
// int trap(int h[],int n){
//     int total = 0 ;

//     for(int i = 0 ; i<= n-1 ; i++){
//         int li = h[i];
//         for(int j = i-1 ; j>= 0 ; j--){
//             if (h[j]>li) {
//                 li = h[j];

//             }
//         }
//         int ri = h[i];
//         for(int j = i+1 ; j<=n-1 ; j++){
//             if(h[j]>ri){
//                 ri = h[j];
//             }

//         }
//         int wi = min( li,  ri) - h[i];
//         total+=wi;
//     }
//     return total;

// }
// int main(){
//     int h[] = {0 ,1 , 0, 2 , 1, 0 , 1 , 2 , 1, 2, 1 };
//     int n = sizeof(h)/sizeof(int);
//     cout<<trap(h,n);


// }

// #include<iostream>
// using namespace std;
// int trap(int h[],int n){
//     int total = 0 ;
//     int l[n];
//     l[0] = h[0];
//     int r[n];
//     r[n-1] = h[n-1];


//     for(int i = 0 ; i<= n-1 ; i++){
//         int li = max(l[i-1],h[i]);
//         for(int j = i-1 ; j>= 0 ; j--){
//             if (h[j]>li) {
//                 li = h[j];

//             }
//         }

//         int ri = max(r[i+1],h[i]) ;
//         for(int j = i+1 ; j<=n-1 ; j++){
//             if(h[j]>ri){
//                 ri = h[j];
//             }

//         }
//         int wi = min( l[i],  r[i]) - h[i];
//         total+=wi;
//     }
//     return total;

// }
// int main(){
//     int h[] = {0 ,1 , 0, 2 , 1, 0 , 1 , 2 , 1, 2, 1 };
//     int n = sizeof(h)/sizeof(int);
//     cout<<trap(h,n);


// }


// #include<iostream>
// #include <climits>
// using namespace std;
// int trap(int h[],int n){
//     int total = 0 ;
//     int n = sizeof(h)/sizeof(n);
//     int l = INT_MIN;
//     int r = INT_MIN;
//     int i = 0;
//     int j = n-1;
//     while(i<=j){
//         l = max(l,h[i]);
//         r = max(r , h[j]);
//         if (l<r){
//             int wi = l -h[i];
//             total +=wi;
//             i++;
//         }else{
//             int wj = r - h[j];
//             total +=wj;
//             j--;
//         }
    
//     }
//     return total;

// }
// int main(){
//     int h[] = {0 ,1 , 0, 2 , 1, 0 , 1 , 2 , 1, 2, 1 };
//     int n = sizeof(h)/sizeof(int);
//     cout<<trap(h,n);


// }

//DNF sort
// #include <iostream>
// using namespace std;
// void dnfSort(int arr[]){
//     int n = sizeof(arr)/sizeof(int);
//     int low = 0 ; int mid = 0 ; int high = n-1;
//     if (arr[mid]== 0 ){
//         swap (arr[mid ] , arr[low]);
//         low ++ ; 
//         mid ++ ;
//     }else if (arr[mid]==1){
//         mid ++;

//     }else{
//         swap(arr[mid],arr[high]);
//         high --;
//     }
    
    

//     for(int i = 0 ; i<n ; i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
// }

// int main(){
//     int arr[] = {5 , 4 , 9 , 5 , 8};
//     int n = sizeof(arr)/sizeof(int);
//     dnfSort(arr);

// }

//Counting sort
// #include<iostream>
// using namespace std;

// void Counting(int arr[]){
//     int element = 0 ;
    
//     int arr[100];
//     for(int i = 0 ; i<= n-1 ; i++){
//         cin>>arr[i];
//     }
//     int freq[k+1];
//     for(int i = 0 ; i<=n-1 ; i++){
//         int x = arr[i];
//         freq[x]++;
        
           
//     }
//     for(int i = 0 ; i<= k ; i++){
//         for(int j = 1 ; j<=freq[i] ; j++){
//             cout<<i;

//         }
//     }
        
        

   
// }
// int main(){
//     int n;
//     cin>>n;
//     int k;
//     cin>>k;
//     int arr[];
//     for(int i = 0 ; i<= n-1 ; i++){
//         cin>>arr[i];
//     }
    
// }

// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     int q,n;
//     cin>>q>>n;
//     vector<int> v(n);
//     for(int i = 0 ; i<=n-1 ; i++){
//         cin>>v[i];
//     }
//     vector<int> diff(n+1 , 0);
//     while(q--){
//         int l , r , x;
//         cin>>l>>r>>x;
//         diff[l]+=x;
//         diff[r+1]-=x;


//     }
    
//     for(int i = 1 ; i<=n ; i++){
//         diff[i]+=diff[i-1];
//     }
//     for(int i = 0 ; i<=n-1 ; i++){
//         v[i]+=diff[i];
//         cout<<v[i]<<" ";

//     }
//     cout<<endl;


// }

// #include<iostream>
// #include<vector>
// #include<algorithm>
// #define int long long
// using namespace std;
// int32_t main(){
//     int n , q;
//     cin>>n >> q;
//     vector<int>v(n);
//     for(int i = 0 ; i<=n-1 ; i++){
//         cin>>v[i];
//     }
//     vector <int> diff(n+1 , 0);
//     while(q--){
//         int l ,r;
//         cin>>l>>r;
//         l--; //since we are using 0 based indexing and cf is using 1 based indexing
//         r--;
//         diff[l]+=1;
//         diff[r+1]-=1;

//     }
//     for(int i = 1 ; i<=n; i++){
//         diff[i]+=diff[i-1];

//     }
//     int ans = 0;
//     sort(v.begin() , v.end());
//     sort(diff.begin() , diff.end()-1);
//     for(int i = 0 ; i<=n-1 ; i++){
//         v[i]*=diff[i];
//         ans +=v[i];
//     }
//     cout<<ans;





// }

// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     int n , q;
//     cin>>n>>q;
//     vector<int> v(n);
//     for(int i = 0 ; i<=n-1 ; i++){
//         cin>>v[i];

//     }
//     vector<int> diff(n+1 , 0);
//     for(int i = 0 ; i<=q-1 ; i++){
//         int l , r , x;
//         cin>>l>>r>>x;
//         diff[l]+=x;
//         diff[r+1]-=x;


//     }
//     for(int i = 1 ; i<=n-1 ; i++){
//         diff[i] +=diff[i-1];

//     }
//     for(int i = 0 ; i<=n-1 ; i++){
//         v[i]+=diff[i];
//         cout<<v[i]<<" ";
//     }


// }

// #include<iostream>
// using namespace std;
// int main(){
//     int x = 10;
//     cout<<x<<endl;
//     cout<<sizeof(x)<<endl;
//     cout<<&x<<endl;
//     cout<<sizeof(&x)<<endl;
//     double y = 3.14;
//     cout<<y<<endl;
//     cout<<sizeof(y)<<endl;
//     cout<<&y<<endl;
//     cout<<sizeof(&y)<<endl;
//     char ch = 'A';
//     cout<<ch<<endl;
//     cout<<sizeof(ch)<<endl;
//     cout<<&ch<<endl;
//     cout<<sizeof(&ch)<<endl;
    
//     int *xptr = &x;
//     cout<<x<<endl;
//     cout<<xptr<<endl;
//     cout<<sizeof(xptr)<<endl;

//     char* chptr = &ch;
//     cout<<ch<<endl;
//     cout<<chptr<<endl;
//     cout<<sizeof(chptr)<<endl;

//     int* ptr = (int*)&ch;
//     cout<<ptr<<endl;

//     char* xtr = (char*)&x;
//     cout<<xtr<<endl;

    
//     cout<<*xptr<<endl;

//     int **xxptr = &xptr;
//     int ***xxxptr = &xxptr;
//     int ****xxxxptr = &xxxptr;
//     cout<<x<<endl;
//     cout<<*xptr<<endl;
//     cout<<**xxptr<<endl;
//     cout<<***xxxptr<<endl;
//     cout<<****xxxxptr<<endl;

    

// }


// void greet(){
//     cout<<"namaste"<<endl;
// }
// int add(int a,int b){
//     return a+b;
// }
// bool ascending(int a , int b){
//     return a>b;
// }

// int main(){
//     cout<<(void*)&greet<<endl;
//     cout<<(void*)add<<endl;
//     cout<<&ascending<<endl;

// }

// bool ascending(int a , int b){
//     return a>b;
// }
// bool descending(int a , int b){
//     return a>b;
// }


// using namespace std;
// int main(){
//     int arr[]=[1 , 0 , 3 ,2 ,4];
//     int n = sizeof(arr)/sizeof(int);
//     bubblesort(arr, n  , ascending);
//     bubblesort(arr , n , descending);
// }
// bubblesort(arr , n , descending);
// for(int i = 0 ; i<=n-1 ; i++){
//     cout<<arr[i]<<" ";
// }
// cout<<endl;
// return 0 ;

// void findLength()
// int main(){
//     char str1[] = {'a' , 'b' , 'c' , 'd'  , 'e' , '\0'};
//     cout<<str1<<endl;
//     cout<<findLength(str1)<<endl;
//     cout<<strlen(str1)<<endl;

//     char str[101];
//     cin>>str;
//     cout<<str<<endl;
    




// using namespace std;
// int stringCompare(char s1[] , char s2[]){

// }

// int main(){
//     char s1[] = "adc";
//     char s2[] = "abc";

//     int ans = stringCompare(s1,s2);
//     if(ans == 0){
//         cout<<s1<<" is equal to "<<s2<<endl;
//     }else if ()
// }
// }
#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
int main(){
    
//     string s;
//     cin>>s;
//     int left = 0;
//     int right = s.length()-1;
//     int status = 0;
//     while(left<right){
//         if(s[left]==s[right]){
            
//             left++;
//             right--;
//         }
//         else {
//             status=1;
//             cout<<"false";
//             break;
//         }
        
//     }
//     if(status !=1){
//         cout<<"true";
//     }
// }
    //    int status = 0;
    //    char s1[]="aabbbcc";
    //    char s2[] = "aaabbcc";
    //    int f1[26]={0};
    //    for(int i = 0 ; s1[i]!='\0' ; i++){
    //     f1[s1[i]-'a']++;
        

    //    }
    //    int f2[26]={0};
    //    for(int i = 0 ; s2[i]!='\0' ; i++){
    //     f2[s2[i]-'a']++;
        

    //    }
    //    for(int i = 0 ; i<=25 ; i++){
    //     if(f1[i]!=f2[i]){
    //         status = 1;
    //         cout<<"false";
    //         break;
        
    //     }
    //     else{
    //         status=0;
    //     }
    //    }
    //    if(status!=1){
    //     cout<<"true";
        
    //    }

//     string str;
//     cin>>str;
//     for(int i = 0 ; i<=str.length()-1 ; i++){
//         for(int j = i ; j <=str.length() - 1 ; j++ ){
            
                
//             if (j!=str.length()-1){
//                 cout<<str.substr(i,j-i+1)<<",";
          
//             }else{
//                 cout<<str.substr(i,j-i+1);
//             }
//         }
//         cout<<endl;
        
//     }
// }

//        string s;
//        cin>>s;
//        int status = 0;
       
//        for(int i = 0 ; i<=s.length()-1 ; i++){

       
//         if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'){
//             status ++;
            
//         }else{
//             cout<<"false";
//             break;
//         }
//        }
//        if(status == s.length()){
//         cout<<"true";

//        }
// }

#include <iostream>
#include <cstring> // You don't need <cstring> for C++ strings
using namespace std;
int main(){
    string s;
    cin >> s;

    int status = 0;
    int result = 0;

    for (int i = 0; i <= s.length() - 1; i++) {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') {
            status++;
        } else {
            break;
        }
    }

    result = max(status, result);
    cout << result;

    return 0;  
}

