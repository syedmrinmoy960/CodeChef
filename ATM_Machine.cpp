#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pi (3.141592653589)
#define mod 1000000007
#define ll long long
#define float double
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define all(c) c.begin(), c.end()
#define min3(a, b, c) min(c, min(a, b))
#define min4(a, b, c, d) min(d, min(c, min(a, b)))
#define rrep(i, n) for(int i=n-1;i>=0;i--)
#define rep(i,n) for(int i=0;i<n;i++)
ll arr[1000005];


int main(){


    
ios::sync_with_stdio(0);
cin.tie(0),cout.tie(0);
   
    int t;
    cin>>t;
    while(t--){
         ll n,k;
         string v;
         cin>>n>>k;
         for(int i=0;i<n;i++){
             cin>>arr[i];
         }
        
        for(int i=0;i<n;i++){
            if(arr[i]<=k){
                k-=arr[i];
                cout<<"1";
            }
            else{
                cout<<"0";
            }
        }
        cout<<endl;
         
    }

}