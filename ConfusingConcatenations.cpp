// https://www.codechef.com/submit/CONFCAT

#include <iostream>
#include <vector>
using namespace std;

int main() {
	int T;
	cin >> T;
	for(int i=0;i<T;i++)
	{
	    int n;
	    cin >> n;
	    vector<int> C;
	    for(int j=0;j<n;j++)
	    {
	        int x;
	        cin >> x;
	        C.push_back(x);
	    }
	    vector<int> A,B;
	    int a=-1,b=-1;
	    bool endA=false;
	    for(int j=0;j<n;j++)
	    {
	        if(a==-1)
	        {
	            A.push_back(C[j]);
	            a++;
	        }
	        else if (endA)
	        {
	            B.push_back(C[j]);
	            ++b;
	        }
	        else
	        {
	            if(C[j]>A[a])
	            {
	                B.push_back(C[j]);
	                ++b;
	                while(a < A.size()-1 && A[a]<B[b])
	                {
	                    a++;
	                }
	                if(a==A.size()-1)
	                {
	                    endA=true;
	                }
	            }
	            else
	            {
	                A.push_back(C[j]);
	            }
	        }
	    }
	    if(b==-1)
	    {
	        cout << "-1\n";
	    }
	    else
	    {
	        cout << A.size() << "\n";
	        for(int j=0;j<A.size();j++)
	        {
	            cout << A[j] << " ";
	        }
	        cout << "\n";
	        cout << B.size() << "\n";
	        for(int j=0;j<B.size();j++)
	        {
	            cout << B[j] << " ";
	        }
	        cout << "\n";
	    }
	}
	return 0;
}
