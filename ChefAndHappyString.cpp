//  https://www.codechef.com/submit/HAPPYSTR

#include <iostream>
#include <string>
using namespace std;

bool isVowel(char ch)
{
    return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U';
}

int main() {

    int T;
    string str;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        cin >> str;
        bool happy = true;
        int l=str.length();
        for(int j=0;j<l - 2 ;j++)
        {
            bool temp=true;
            for(int k=0;k<3 && temp;k++)
            {
                if(!isVowel(str[k+j]))
                    temp=false;
            }
            if(temp)
                happy=true;
            else
                happy=false;
            if(happy)
                break;
        }
        if (happy)
            cout << "Happy\n";
        else
            cout << "Sad\n";
    }

    return 0;
}
