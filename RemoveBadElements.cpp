//  https://www.codechef.com/submit/REMOVEBAD

#include <iostream>
#include <map>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for(int i=0;i<t;i++)
    {
        int N;
        cin >> N;
        map<int,int> m;
        int* A=new int[N];
        for(int j=0;j<N;j++)
        {
            cin >> A[j];
            m[A[j]]=m[A[j]]+1;
        }
        int maxF;
        map<int, int>::iterator itr=m.begin();
        maxF=itr->first;
        itr++;
        while(itr!=m.end())
        {
            if(itr->second > m[maxF])
                maxF=itr->first;
            itr++;
        }
        int c=0;
        for(int j=0;j<N;j++)
        {
            if(A[j]!=maxF)
                c++;
        }
        cout << c << "\n";
    }
	return 0;
}
