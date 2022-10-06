// https://www.codechef.com/submit/SUSSTR

#include <iostream>
#include <string>
using namespace std;


int main() {
	int T;
	cin >> T;
	for(int i=0;i<T;i++)
	{
	    string str;
	    int x;
	    cin >> x;
	    cin >> str;
	    int l=0,h=str.length()-1,c=0;
	    string T="",temp1,temp2;
	    while(l<=h)
	    {
	        if(c%2==0)
	        {
	            temp1=T+str[l];
	            temp2=str[l]+T;
	            if(temp1 < temp2)
	                T=temp1;
	            else
	                T=temp2;
	           l++;
	        }
	        else
	        {
	            temp1=T+str[h];
	            temp2=str[h]+T;
	            if(temp1 > temp2)
	                T=temp1;
	            else
	                T=temp2;
	           h--;
	        }
	        c++;
	    }
	    cout << T << "\n";
	}
	return 0;
}
