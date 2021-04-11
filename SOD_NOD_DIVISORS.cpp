#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ull unsigned long long int

/*

SOD:
int a[1000005];
//vector<int>nv(0),sv(0);

void divisors(int n){for(int i=1;i<=n;i++){for(int j=i;j<=n;j+=i){a[j]+=(i);}}}
int main()
{
   int n;cin>>n;
   memset(a,0,sizeof(a));
   divisors(n);
   for(int i=1;i<=n;i++){
     cout<<"Sum of divisors of "<<i<<" is : "<<a[i]<<endl;
     }}
     
int a[1000005];
//vector<int>nv(0),sv(0);

NOD:

void divisors(int n){for(int i=1;i<=n;i++){for(int j=i;j<=n;j+=i){a[j]++;}}}
int main()
{
   int n;cin>>n;
   memset(a,0,sizeof(a));
   divisors(n);
   for(int i=1;i<=n;i++){
     cout<<"number of divisors of "<<i<<" are : "<<a[i]<<endl;
     }}     

*/


vector<int>v[1000005];
//vector<int>nv(0),sv(0);

void divisors(int n){for(int i=1;i<=n;i++){for(int j=i;j<=n;j+=i){v[j].push_back(i);}}}
int main()
{
   int n;cin>>n;
   divisors(n);
   for(int i=1;i<=n;i++){
     cout<<"divisors of "<<i<<" are : "<<endl;
     for(int j=0;j<v[i].size();j++)cout<<v[i][j]<<" ";
      cout<<endl;}}
