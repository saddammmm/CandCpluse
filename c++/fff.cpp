#include<vector>
#include<list>
#include<map>
#include<set>
#include<deque>
#include<queue>
#include<stack>
#include<bitset>
#include<algorithm>
#include<functional>
#include<numeric>
#include<utility>
#include<iostream>
#include<sstream>
#include<iomanip>
#include<cmath>
#include<cstdlib>
#include<cctype>
#include<string>
#include<cstring>
#include<cstdio>
#include<ctime>
#include<climits>
#include<complex>
#include<cassert>
#define mp make_pair
#define pb push_back
#define fi first
#define se second
#define sz(x) (int)((x).size())
#define all(x) x.begin(),x.end()
#define clr(x) memset((x),0,sizeof(x))
#define cdp(x) memset((x),-1,sizeof(x))
#define rep(i,n) for (i=0;i<n;i++)
#define Rep(i,a,b) for (i=a;i<=b;i++)
#define ff(i,x) for (i=start[x];i!=-1;i=a[i].next)
#define foreach(e,x) for(__typeof(x.begin()) e=x.begin();e!=x.end();++e)
using namespace std;
const double eps=1e-8;
const double pi=acos(-1.0);
int dblcmp(double d){if (fabs(d)<eps)return 0;return d>eps?1:-1;}
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<string> vs;
typedef pair<int,int> pii;
typedef vector<pii> vpi;
int main()
{
	freopen("F:\\cooking_the_books.txt","r",stdin);
	freopen("F:\\A.txt","w",stdout);
	string s;
	int i,j,k,t,cc=0;
	cin>>t;
	while (t--)
	{
		cin>>s;
		int l=s.length();
		int mi=1000000000,mx=-1;
		for (i=0;i<l;i++)
		{
			for (j=i;j<l;j++)
			{
				if (i==0&&s[j]=='0')continue;
				string t=s;
				swap(s[i],s[j]);
				int v=atoi(s.c_str());
				mi=min(mi,v);mx=max(mx,v);
				s=t;
			}
		}
		printf("Case #%d: %d %d\n",++cc,mi,mx);
	}
	return 0;
}
