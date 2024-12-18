#include <bits/stdc++.h>
using namespace std;



int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	
	int t;
    cin>>t;
    while(t--)
    {
        int n,c=0;
        cin>>n;
        string s;
        cin>>s;
        while (c<n&&s[c]!='0'){
		  c++;
		}
		cout<<(((c==n&&n==4)||(c-1)*(c-1)==n)?"YES":"NO")<<endl;
    }
}