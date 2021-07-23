#include<vector>
#include<bits/stdc++.h>
#include<algorithm>
#include<math.h>
#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;

int main() { long long int k;
        	     cin>>k;
	             for( long long int i=0;i<k;i++) {
                long long int n,m=0,t,x,y,z=0,p=0,q=0;
                cin>>n>>x>>t;
                m=(n-1)*x;
                p=t/x;
                int a = (n - p), b = (n -1), c = (p - 1);
                q=max(0,a)* p + min(b,c)* (min(n,p)/2);
                cout<<q;
                cout<<endl;
               }
return 0;              
}