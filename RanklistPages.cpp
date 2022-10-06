//  https://www.codechef.com/submit/RANKLISTPAGE

#include <iostream>
#include <math.h>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin >> T;
	for(int i=0;i<T;i++)
	{
	    int X;
	    cin >> X;
	    int p=X/25;
	    p=(X%25==0)?p:p+1;
	    cout << p << "\n";
	}
	return 0;
}
