#include<bits/stdc++.h>
#define int long long
using namespace std;
int n;

bool cmp(int x,int y)
{
	if((x%2)==(y%2)) return x<y;
	else return (x%2);
}
void solve()
{
	cin>>n;
  int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	sort(a,a+n,cmp);
	for(int i=0;i<n;i++)
	{
	  cout<<a[i]<<" ";
	}
}

signed main()
{
  solve();

  return 0;
}