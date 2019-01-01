#include <iostream>
using namespace::std;
int main()
{
	int n,x;
	while(1) {
		int solution = 0;
		cin>>n;
		cin>>x;
		if(n==0 && x==0)
			break;
		for(int i=1; i<=n-2; i++) {
			for(int j=i+1; j<=n-1; j++) {
				int k=x-i-j;
				if(k>j && k<=n)
					solution++;
			}
		}
		cout<<solution<<endl;
	}
}	
