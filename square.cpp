#include <iostream>
using namespace std;

int main()
{  int n;
   cin>>n;
    for(int i=1;i<=n;i++)//outer loop give number rows{
        for(int j=1;j<=n;j++)//inner loop gives main logic and column numbers{
            cout<<j;
        }
        cout<<endl;
    }

    return 0;
}