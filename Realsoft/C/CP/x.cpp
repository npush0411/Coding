#include <iostream>

using namespace std;
int isMonopoly(int p, int q, int r, int s)
{
    if(p > q)
    {
        if(p > r)
	    {
	        if(p > s)
	        {
	            if(p > (q+r+s))
	                    return 1;
	        }
	        else
	        {
	            if(s > (p+q+r));
	                    return 1;
	        }
	    }
	    else
	    {
	        if(r > s)
	        {
	            if(r > (p+q+s))
	                    return 1;
	        }
	        else
	        {
	            if(s > (q+p+r))
	                    return 1;
	        }
	    }
    }
	else
	{
	    if(q > r)
	    {
	       if(q > s)
	       {
	           if(q > (s+p+r))
	                    return 1;
	            else
	                if(s > (q+p+r))
	                    return 1;
	       }
	       else
	       {
	            if(r > s)
	                if(r > (q+p+s))
	                    return 1;
	            else
	                if(s > (q+p+r))
	                    return 1;
	       }
	    }
	    else
	    {
	        if(r > s)
	        {
	            if(r > (p+q+s))
	                    return 1;
	        }
	        else
	        {
	            if(s > (q+p+r))
	                    return 1;
	        }
	    }
	    
	}
    return 0;
}
int main() {
	// your code goes here
	int t, p, q, r, s, max;
	cin>> t;
	while(t--)
	{
	    cin>> p>> q>> r>> s;
	    cout<<endl<<(isMonopoly(p, q, r, s) ? "YES" : "NO");
	}
	return 0;
}
