// #include <iostream>
// #include <string> // You don't need <cstring> for C++ strings
// #include<algorithm>
// using namespace std;

// int main() {
//     string s;
//     cin >> s;

//     int status = 0;
//     int result = 0;
    

//     for (int i = 0; i <= s.length() - 1; i++) {
//         if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') {
//             status++;
//         } else {
//             break;
//         }
//         result = max(status, result);
//     }

    
//     cout << result;

//     return 0;  // ✅ Always end main with return 0;
// }

// string s;
//     cin >> s;

//     int status = 0;
//     int result = 0;
    

//     for (int i = 0; i <= s.length() - 1; i++) {
//         if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') {
//             status++;
//             result = max(status, result);
//         } else {
//             status  = 0;
//         }
        
//     }

    
//     cout << result;

//     return 0;  // ✅ Always end main with return 0;
// }

//     string s;
//     cin>>s;
//     int counter = 0 ;
//     for(int i = 0 ; i<=s.length()-1 ; i++){
//         if (s[i]=='a'){
//             for(int j = i+1 ; j<=s.length() - 1 ; j++){
//                 if(s[j]=='b'){
//                     counter ++;

//                 }

//             }

//         }
//     }
//     cout<<counter;
// }

//     string s;
//     cin>>s;
//     int len = s.length();
//     int rude=0;
//     int countb = 0;
//     int counter = 0 ;
//     for(int i = s.length()-1 ; i>=0 ; i--){
//         if (s[i]=='b'){
//             countb++;
//         }
//         else{
//             rude+=countb;
//         }


            

            

        
//     }
//     cout<<rude;
// }

//     string s;
//     cin>>s;
//     int count = 0;
//     for(int i = 0 ; i <=s.length()-1 ; i++){
//         for(int j = i ; j<=s.length()-1 ; j++){
//             string newstr = s.substr(i,j-i+1);
//             string rev = s.substr(i,j-i+1);
//             reverse(rev.begin(),rev.end());
//             if(newstr == rev){
//                 count++;
//             }

//         }
//     }
//     cout<<count;
// }

//    string s= "abcabcab";
//    cout<<s.find("xyz");
// }
   
//       int arr[3][4] = {{10,15,20,25},{30,35,40,45},
//       {50,55,60,65}};
   
//       for(int i = 0 ; i<=2 ; i++){
//          for(int j = 0 ; j<=3 ; j++){
//             cout<<arr[i][j]<<" ";
//          }
//          cout<<endl;
//       }
// }


   // int m;
   // cin>>m;
   // int n ; 
   // cin>>n;
   // int t;
   // cin>>t;
   // int status = 0;
   // int arr[m][n];
   // for(int i = 0 ; i<=m-1 ; i++){
   //    for (int j = 0 ; j<=n-1 ; j++){
   //       cin>>arr[i][j];
   //    }
   // }
   // for(int i = 0 ; i<=m-1 ; i++){
   //    for (int j = 0 ; j<=n-1 ; j++){
   //       cout<<arr[i][j]<<" ";
   //    }
   //    cout<<endl;
   // }
   // for(int i = 0 ; i<=m-1 ; i++){
   //    for (int j = 0 ; j<=n-1 ; j++){
   //       cin>>arr[i][j];
   //    }
   // }

   
      // for (int j = 0 ; j<=n-1 ; j++){
      //    if(j==0 || j%2==0){
      //       for(int i = 0 ; i<=m-1 ; i++){
      //          cout<<arr[i][j]<<" ";
      //       }
      //    }else{
      //       for(int i = m-1 ; i>=0 ; i--){
      //          cout<<arr[i][j]<<" ";
      //       }

      //    }
      // }

   // for(int i = 0 ; i<=m-1 ; i++){
   //    for(int j = 0 ; j<=n-1 ; j++){
   //          if(t>arr[0][n-1]){
               
   //          }
   //       }
   //    }
   // } 
   // if(status==1){
   //    cout<<"true";
   // }else{
   //    cout<<"false";
   // }

   // int *ptr = new int;
   // *ptr = 50;
   // cout<<*ptr;

   // #include<iostream>
   // using namespace std;
   // int* f(){
   //    int * xptr = new int;
   //    *xptr = 10;
   //    return xptr;
   // }
   // int main(){
   //    int *xptr = f();
   //    cout<<*xptr<<endl;
   // }

   // int*resize(int*A , int c){
   //    cout<<"resizing from "<<c*sizeof(int)<<"B to "<<2*c*sizeof(int)<<"B"<<endl;
   //    int *B = new int [2*c];
   //    for(int i = 0 ; i<=c-1 ; i++){
   //       B[i]=A[i];
   //    }
   //    delete []A;
   //    return B;

   // }
   // int main(){
      // int*ptr  = new int[3];
      // ptr[0]=10;
      // ptr[1]=20;
      // ptr[2]=30;

      // for(int i = 0 ; i<=2 ; i++){
      //    cout<<*(ptr+i)<<endl;
      // }

      // delete [] ptr;

      
   //    int *A = new int[1];
   //    int c = 1;
   //    int i = 0;
   //    while(true){
   //       int x;
   //       cin>>x;
   //       if(x<0){
   //          break;

   //       }
   //       if(i==c){
   //          A=resize(A,c);c=2*c;

   //       }
   //    }
   // } 

   // #include<iostream>
   // using namespace std;
   // int main(){
   //    int m;
   //    cin>>m;
   //    int n;
   //    cin>>n;
   //    int arr[m][n];
   //    for(int i = m-1 ; i>=0 ; i--){
   //       for(int j = 0 ; j<=n-1 ; j++){
            
            
   //       }
   //    }


   // ;

   // }
   

   // #include<iostream>
   // #include<vector>
   // #include<algorithm>
   // using namespace std;
   // int main(){
   //    int t;
   //    cin>>t;
   //    while(t--){
   //       int col ;
   //       cin>>col;
   //       int water;
   //       cin>>water;
   //       vector<int> a(n);
   //       for(int i = 0 ; i<=n-1 ; i++){
   //          cin>>a[i];
   //       }

   //       int s = 1 ;
   //       int e = 2e9;
   //       int ans;
   //       while(s<=e){
   //          int mid = (s+e)/2;
   //          int sum = 0;
   //          for(int i = 0 ; i<=n-1 ; i++){
   //             if(a[i]<mid){
   //                sum+=max(mid-a[i],0);
                     
                     
                  
   //             }
   //          }
   //          if(sum>water){
   //             e = mid-1;
   //          }else{
   //             ans = mid;
   //             s = mid+1;
   //          }
   //       }  
   //    }
   //       cout<<ans<<endl;
   // }

   //    int n;
   //    cin>>n;
   //    double ans;
   //    int s =0;
   //    int e = n;
   //    double error = 1e-6;
   //    while(error<e-s){
   //       int m = s+(e-s)/2;
   //       if(m*m<=n){
   //          ans = m;
   //          s = m+error;
   //       }else{
   //          e=m-error;

   //       }
         
   //    }
   //    cout<<ans<<endl;

   // }
      // int m;
      // cin>>m;
      // int n ; 
      // cin>>n;
      // int matrix[m][n];
      // for(int i = 0 ; i<=m-1 ; i++){
      //    for(int j = 0 ; j<=n-1 ; j++){
      //       cin>>matrix[i][j];
      //    }
      // }
      // vector<int> v;
      // for(int k = m-1 ; k>=0; k--){
      //    int i=k;
      //    int j=0;
      //    while(i>=0 && j<=n-1) {
      //       v.push_back(matrix[i][j]);
      //       i--;
      //       j++;
            
      //    }
      // }
      // for(int k = 1 ; k<=n-1 ; k++){
      //    int i = m-1;
      //    int j = k;
      //    while(j<=n-1 && i>=0){
      //       v.push_back(matrix[i][j]);
      //       i--;
      //       j++;
      //    }
      // }
      // for(int i = 0 ; i<=v.size()-1 ; i++){
      //    cout<<v[i]<<" ";
      // }
      
         
         
         





            
         
      // }

// #include<iostream>
// #include<string>
// using namespace std;
// class Customer {
// public:
//    string* namePtr;
//    int age;
//    double credits;

// };
// void modifyAge(Customer& c){
//    c.age++;
// }
// void print(Customer c){
//    cout<<"Name: "<<c.name<<endl;
//    cout<<"Age: "<<c.age<<endl;
//    cout<<"Credits: "<<c.credits<<endl;
// }
// int main(){
//    Customer c1;
//    cin>>c1.name;
  
//    cin>>c1.age;
   
//    cin>>c1.credits;
//    modifyAge(c1);
//    print(c1);
//    cout<<endl;
//    Customer c2;
//    cin>>c2.name;
//    cin>>c2.age;   
//    cin>>c2.credits;
//    modifyAge(c2);
//    print(c2);
   

// }
// Customer(string n , int a , double c){
//    cout<<"I am inside constructor class"<<endl;;
//    namePtr = new string;
//    *namePtr = n;
//    age = a;
//    credits = c;
// }

// #include<iostream>
// #include<vector>
// #include<string>
// using namespace std;

// class Customer {
// public:
//     string* namePtr;
//     int age;
//     double credits;

    // Constructor
   //  Customer(string n, int a, double c) {
   //      cout << "I am inside constructor class" << endl;
   //      namePtr = new string(n); // directly initialize with n
   //      age = a;
   //      credits = c;
   //  }

    
// };



// Function to print details
// void print(Customer c) {
//     cout << "Name: " << *(c.namePtr) << endl;
//     cout << "Age: " << c.age << endl;
//     cout << "Credits: " << c.credits << endl;
// }
// bbol agecmp(customer a , customer b){
//    if(a.age > b.age){
//       return true;
//    }else{
//       return false;
//    }
// }

// int main() {
   //  string n;
   //  int a;
   //  double cr;

   //  Customer c("Ramanujan" , 26 , 3686);
   //  cout<<&c<<endl;
   //  Customer& cptr = &c;
   //  cout << cptr <<endl;
   //  cout<<(*cptr).name<<endl;
//    Customer* cptr1 = new Customer;
//    cin>>cptr1->name;
//    cin>>cptr1->age;
//    cin>>cptr1->credits;cptr1->print();
//    Customer* cptr2 = new Customer("Ramanujan" , 37, 3965);

   


// }
      // vector<Customer> v;
      // v.push_back(customer("Ramanujan" , 32 , 2863));
      // v.push_back(customer("Einstein" , 24 , 3575));
      // v.push_back(customer("Homi" , 97 , 2976));
      // v.push_back(customer("JC Bose" , 58 , 9594));

// #include<iostream>
// #include<utility>
// #include<algorithm>
// #include<vector>
// using namespace std;
// int main(){
//    vector<pair> <int , int>> v;
//    int n;cin>>n;
//    for(int i = 0 ; i<n; i++){
//       int x,y;
//       cin>>x>>y;
//       v.push_back({x,y});

//    }
//    sort(v.begin(), v.end());
//    for(int i  = 0 ; i<n; i++){
//       cout<<v[i].first<<" "<<v[i].second<<endl;

//    }
// }


// #include<iostream>
// using namespace std;
// int factorial(int n){
//    if(n==0 || n==1){
//       return 1;
//    }else{
//       return n* factorial(n-1);
//    }
// }
// int main(){
//    int n;
//    cin>>n;
//    cout<<factorial(n);
// }

// #include<iostream>
// using namespace std;
// int fibonacci(int n){
//    if(n==0 || n==1){
//       return n;
//    }else{
//       return fibonacci(n-1) + fibonacci(n-2);
//    }
// }
// int main(){
//    int n;
//    cin>>n;
//    cout<<fibonacci(n);
// }

// #include<iostream>
// using namespace std;
// int multiply(int x , int y){
//    if(y==0 ){
//       return 0;
   
//    }else{
//       return x + multiply(x,y-1);
//    }
// }
// int main(){
//    int x,y;
//    cin>>x>>y;
//    cout<<multiply(x,y);
// }

// #include<iostream>
// using namespace std;
// void increas(int n){
//    if(n==0){
//      return;
//    }else{
//       increas(n-1);
//       cout<<n;
//    }

// }
// int main(){
//     int n;
//     cin>>n;
//     increas(n);
    
   
// }

// #include<iostream>
// using namespace std;
// int power(int x , int y){
//    if(y==0){
//       return 1;

//    }else{
//       int A = power(x,y/2);
//       if(y%2==0){
//        return A*A;
//       }else{
//          return A*A*x;
//       }
//    }
// }
// int main(){
//    int x,y;
//    cin>>x>>y;
//    cout<<power(x,y);
// }

// // tower of hanoi 
// f(n-1 , src , hlp , dst);
//    cout<<"Move disk "<<n<<" from "<<src<<" to "<<dst<<endl;
//    f(n-1 , hlp , dst , src);
// }
// int main(){
//    int n;
//    cin>>n;
//    f(n , 'A' , 'B' , 'C');
//    return 0;
// }

// #include<iostream>
// #include<algorithm>
// using namespace std;
// int main(){
//    int t;
//    cin>>t;
   
//    for(int i = 0 ; i<=t-1 ; i++){
//       int n;
//       cin>>n;
//       int x;
//       cin>>x;
//       int arr[n];
//       int arr2[n];
//       for(int j = 0 ; j<=n-1 ; j++){
//          cin>>arr[j];
//          arr2[j]=arr[j];
//       }
//       int answer = 0;;
//       int final = -1;
      
//       int l = 0;
//       int r = n-1;
//       sort(arr2,arr2 + n);

//       while(l<=r){
//          int mid = l + (r-l)/2;
//          int answer = 0;
//          for(int i = 0 ; i<=n-1 ; i++){
//             if(arr2[mid]>=arr[i]){
//                answer += (arr2[mid]-arr[i]);
//             }
//          }
//          if(answer<=x){
//             final = arr2[mid];
//             l=mid+1;
            

//          }else{
//             r=mid-1;
            
//          }

//       }
//       cout<<final<<endl;




//    }
// }

// #include <iostream>
// using namespace std;
// void function(int n){
//       if (n%2 !=0){
//          n = n/2;
//       }else{
//          n=3*n + 1;
//       }
// }
// int main(){
//    int n;
//    cin>>n;
//    int count = 0;
//    while(n>=1){
//       function(n);
//       count ++;
//    }
//    cout<<count;
   
// }

// #include<iostream>
// #include<vector>
// using namespace std;
// int arr[1000];
// int fun(int n , int i){
//    if (i==n){
//       return 0;

  

      
//    }else{
//       int A = fun(n,i+1);
//       return arr[i] + A;
//    }
   

// }
// int main(){
//    int n;
//    cin>>n;
   
//    for(int i = 0 ; i<=n-1 ;i++){
//       cin>>arr[i];
//    }
   
//    cout<<fun(n,0);
// }

// #include<iostream>
// using namespace std;
// int arr[100];
// bool fun(int n, int i){
//    if(i==n-1) return true;
//    return arr[i+1]>arr[i] && fun(n,i+1);
// }
// int main(){
//    int n;
//    cin>>n;
//    for(int i = 0 ; i<=n-1 ; i++){
//       cin>>arr[i];
//    }
//    cout<<fun(n,0);
// }

// #include<iostream>
// using namespace std;
// void mergeSort(int arr[] , int s , int e){
//    int temp [100];
//    int i = s;
//    int j = m+1;
//    int k = s;
//    while(i<=m && j<=e){
//       if(arr[i]<arr[j]){
//          temp[k] = arr[i];
//          i++;
//          k++;

//       }else{
//          temp[k] = arr[j];
//          j++;
//          k++;
//       }
//    }
//    for(int i = s; i<=e; i++){
//       arr[i]=temp[i];
//    }
//    if(s==e){
//       return ;
//    }

//    int m = s + (e-s)/2 ;
//    mergeSort(arr,s,m);
//    mergeSort(arr, m+1 , e);
//    merge(arr,s,m ,e);

// }
// int main(){
//    int arr[] = {10,20,30,40,50};
//    int s = arr[0];
//    int e = arr[4];

// }

// #include<iostream>
// using namespace std;
// int partition(int arr[],int s, int e){
//    int low = s;
//    int mid = s;
//    int pivot = arr[e];
//    while(mid<e){
//       if(arr[mid]<pivot){
//          swap(arr[low],arr[mid]);
//          low++;
//          mid++;

//       }else{
//          mid++;
//       }
//    }
//    swap(arr[e], arr[low]);
//    return low;
// }

// void quickSort(int arr[],int s, int e){
//    if(s>=e){
//       return ;
//    }
//    int pidx = partition(arr,s ,e);
//    quickSort(arr,s , pidx -1);
//    quickSort(arr, pidx + 1, e);
// }
// int main(){
//    int arr[]= {60, 50 , 40 , 30 , 20 , 10};
//    int n = sizeof(arr)/sizeof(int);
//    quickSort(arr, 0 , n-1);
//    for(int i = 0 ; i<=n-1 ; i++){
//       cout<<arr[i]<<" ";
//    }
//    cout<<endl;
// }


// #include<iostream>
// #include<cstring>
// using namespace std;
// int check(char s[] , int i){
//    if(s[i]=='\0'){
//       return 0;

//    }
//    if(s[i]=='p' && s[i+1]=='i'){

//       for(int j = strlen(s)-1 ; j>=i+2 ; j--){
//          s[j+2]=s[j];
//       }
//       s[i]='3';
//       s[i+1]='.';
//       s[i+2]='1';
//       s[i+3]='4';
      
//       check(s,i+4);
//    }else{
//       check(s,i+1);
//    }
// }
// int main() {
//     char s[20] = "pip";
//     check(s,0);


    
//     cout << s<<endl;
//     return 0;
 
// }

// #include<iostream>
// #include<set>
// using namespace std;
// int main(){
//    set<int> s;
//    s.insert(10);
//    s.insert(20);
//    s.insert(30);
//    s.insert(40);
//    s.insert(50);
//    for(int x : s){
//       cout<<x<<" ";
//    }
//    cout<<endl;
//    s.erase(20);
//    for(int x  : s){
//       cout<<x<<" ";
//    }
//    // if we want to erase 30, then, we can increase it
//    auto it = s.begin();
//    it++;
//    s.erase(it);
//    for(int x  : s){
//       cout<<x<<" ";
//    }//in the case of multiset, just replace set with multiset


// }

// #include<iostream>
// #include<set>
// using namespace std;
// class ageComp{
//    public:
//    // return true if you want a to be ordered before b
//    // otherwise return false

//    bool operator()(customer a , customer b) const{
//       if(a.age = b.age){
//          return true;
//       }return false;
//    }
// };
// int main(){

// }

// whenever solving a question, you have to take a sequence of decisions then to build a recursive solution

// #include<iostream>
// #include<set>
// using namespace std;
// set<string> s;
// void f(char inp[],char out[], int i, int j){
//       if(inp[i]=='\0'){
//          out[j]='\0';
//          s.insert(string(out))
         
//       }
//       // include the character
//       out[j]=inp[i];
//       f(inp,out,i+1,j+1);
      
//       // exclude the character
//       f(inp,out,i+1,j);
// }
// int main(){
//       char inp[]="abc";
//       char out[10];
//       set<string> s;


// }


// #include<iostream>
// #include<algorithm>
// using namespace std;
// void f(char inp[], int i){
//    if (inp[i]=='\0'){
//       cout<<inp <<endl;
//       return ;
//    }
//    for(int j = i ; j<=n-1 ; j++){
//       swap(inp[i],inp[j]);
//       f(inp,n, i +1);
//       swap(inp[i],inp [j]);
//    }
// }
// int main(){
//    char inp[] = "abc";
//    int n = inp.size();
//    f(inp , n , 0);

// }/

#include<iostream>
using namespace std;
class ListNode{
   public:
   int val;
   ListNode* next;
   ListNode(int val){
      this->val = val;
      this->next = NULL;
   }
};
ListNode* insertAtHead(ListNode*& head , int val){
   ListNode* n = new ListNode(val);
   n->next = head;
   head = n;
   return head;
}
void printLinkedList(ListNode* head){
   while(head !=NULL){
      cout<<head->val<<" ";
      head=head->next;
   }
   cout<<endl;
}
ListNode* getTail(ListNode* head){
   while(head->next !=NULL){
      head = head->next;
   }
   return head;

}
void insertAtTail(ListNode* head, int val){
   if(head==NULL){
      insertAtHead(head, val);
      return;
   }
   ListNode* n = new ListNode(val);
   ListNode* tail = getTail(head);
   tail->next = n;
}
void del(ListNode*& head ){
   if(head==NULL) return;
      
      ListNode* temp = head;
      head=head->next;
      delete temp;
   
   
}
void insertAtIndex(ListNode* head , int i , int val){
   ListNode* n = new ListNode(val);
   ListNode* prev = getNode(head, i-1);
   n->next = prev->next;
   prev->next=n;
}
void deletionattail(ListNode* head){
   if(head==NULL){
      return;
   }
   if(head->next == NULL){
      del(head);
      return ;
   }
   ListNode* prev = NULL;
   ListNode* cur = head;
   while(cur->next !=NULL){
      prev = cur;
      cur = cur->next;
   }
   prev->next = NULL;
   delete cur;
   return;
}
ListNode* reverseIterative(ListNode* head){
   ListNode* prev = NULL;
   ListNode* cur = head;
   while(cur!=NULL){
      ListNode* temp = cur-> next;
   }
}
int count =0;

int main(){
   ListNode* head = NULL;
   insertAtHead(head,50);
   insertAtHead(head,40);
   insertAtHead(head,30);
   insertAtHead(head,20);
   insertAtHead(head,10);

   printLinkedList(head);
   insertAtIndex(head,)
   printLinkedList(head);
   
   return 0;
}