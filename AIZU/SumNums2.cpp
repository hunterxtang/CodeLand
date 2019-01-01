#include <iostream>
#include <string>
using namespace::std;
int main()
{
        while(1) {
                int result=0;
                int x;
                cin>>x;
                if(x==0) break;
		while (x > 0)	{
			int b=x%10;
			result+=b;
			x = x/ 10;
		}
                cout<<result<<endl;
        }
}

