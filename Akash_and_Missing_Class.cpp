/*In The Name Of ALLAH
*Bismillahir Rahmanir Rahmin
* @Author: {{Syed Yasir Shahriar
          ID: 19-40656-1 
{
/*//*\//\//\//\//\//\//\//\//\//\//\//\//\//\//\//\//\//\*/
//أعوذ بالله من الشيطان الرجيم
//بسم الله الرحمن الرحيم
/*//\//\//\//\//\//\//\//\//\//\//\//\//\//\//\//\//\//\*/
#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define ff first
#define ss second
#define endl "\n"
#define pll pair<ll,ll>
#define vv vector<ll>
#define st stack<ll>
#define pq  priority_queue <int>
#define qq queue<ll>
#define mod 1e9+7
const int mix=1e6+10;
ll arr[mix];
// vector<int>divisors[mx];
// int ans=__builtin_popcount(n);
//ith bit on =(n|(1<<i))
//check ith bit=(n&(1<<i))
using namespace std;   
// ll gcd(ll a,ll b){
//     if(b==0)
//       return a;
//       else
//         return gcd(b,a%b);
// }
bool check(char c1,char c2){
   if(c1='(' && c2==')' || c1=='{' && c2=='}' || c1=='[' && c2==']'){
     return true;
   }
   else{
     return false;
   }
}

int main(){
    
ios::sync_with_stdio(0);
  cin.tie(0),cout.tie(0);
   
  //stack 

  //LIFO

  // stack<int>s1;
  // stack<int>s2;
  // int n; cin>>n;
  // for(int i=0;i<n;i++){
  // 	 int x;
  // 	 cin>>x;
  // 	 s1.push(x);
  // }

  //  //function swap()

    // s1.swap(s2);
  
   // s1.pop();
  //  int val=0;
  //  cout<<s1.size()<<endl;
  // while(!s1.empty()){
  // 	 val=val+s1.top();
  // 	 s1.pop();
  // 	 // cout<<val<<" ";
  // }

  // cout<<val<<endl;
  // cout<<s1.size();

      // while(!s2.empty()){
      //   cout<<s2.top()<<endl;
      //   s2.pop();
         
 
      // }
   
    int n; cin>>n;
    while(n--){
        string str;
        cin>>str;
        stack<char>s1;
        bool ans=true;
        for(auto u:str){
           if(u=='(' || u=='{' ||u=='['){
             s1.push(u);
           }
           else{
             if(s1.empty()){
               ans=0;
               break;
             }
             else{
                if(check(s1.top(),u)){
                   s1.pop();
                }
                else{
                   ans=0;
                   break;
                }
             }
           }

        }// {
        if(!s1.empty()){
           ans=false;
        }
        if(ans){
           cout<<"Balanced"<<endl;
        }
         else{
           cout<<"Not Balanced"<<endl;
         }
    }
   

}