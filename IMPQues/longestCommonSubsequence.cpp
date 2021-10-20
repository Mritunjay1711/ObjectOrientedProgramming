#include<iostream>
using namespace std;

class solution
{
    public:
    int max(int a, int b)
    {
        return a > b ? a : b;
    }

    int solve(string X, string Y)
    {
        int m, n;
	    m = X.length() + 1;
	    n = Y.length() + 1;
	    int ans[m][n];
	    for(int i = 0; i < m; i++)
	    {
	        ans[i][n - 1] = 0;
	    }
	    for(int i = 0; i < n; i++)
	    {
	        ans[m - 1][i] = 0;
	    }
	    for(int i = m - 2; i >= 0; i--)
	    {
	        for(int j = n - 2; j >= 0; j--)
	        {
	            if(X[i] == Y[j])
	            {
	                ans[i][j] = 1 + ans[i + 1][j + 1];
	            }
	            else
	            {
	                ans[i][j] = max(ans[i + 1][j], ans[i][j + 1]);
	            }
	        }
	    }
	   // for(int i = 0; i < m; i++)
	   // {
	   //     for(int j = 0; j < n; j++)
	   //     {
	   //         cout << ans[i][j] << " ";
	   //     }
	   //     cout << endl;
	   // }
	   return ans[0][0];
    }

    int findMinCost(string X, string Y, int costX, int costY)
    {
        int lcs, cost, xl, yl;
	    xl = X.length();
	    yl = Y.length();
	    
	    lcs = solve(X, Y);
	    cost = costX * (xl - lcs) + costY * (yl - lcs);
	    return cost;
    }
};

int main(){
    string X = {"abcd"};
    string Y = {"acbd"};
    int costX = 10;
    int costY = 20;
    int ans;
    solution ob;
    ans = ob.findMinCost(X, Y, costX, costY);
    cout << ans << endl;
    return 0;
}