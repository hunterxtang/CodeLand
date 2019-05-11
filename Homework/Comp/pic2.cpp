#include <iostream>
using namespace::std;
int main()
{
        int n, m;
        cin>>n>>m;
        int nums[100][100];
        for(int i=0; i<m; i++) {
                for(int j=0; j<n; j++) {
                        cin>>nums[i][j];
                }
        }
        double di;
        cin>>di;
	if(di == -1) {
		for(int j=1; j<=n; j++) {
			for(int i=0; i<m; i++) {
				cout<<nums[i][n-j]<<" ";
			}
			cout<<endl;
		}
	}
	else if(di == 1) {
		for(int j=0; j<n; j++) {
			for(int i=0; i<m; i++) {
				cout<<nums[n-i][j]<<" ";
			}
			cout<<endl;
		}
	}
}

