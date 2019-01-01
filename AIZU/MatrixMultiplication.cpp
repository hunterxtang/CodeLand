#include <iostream>
using namespace::std;
int main()
{
	int aRow, aCol, bRow, bCol;
	cin>>aRow;
	cin>>aCol;
	cin>>bCol;
	bRow = aCol;
	long a[100][100];
	long b[100][100];
	long c[100][100];
	for(int i=0; i<aRow; i++) {
		for(int j=0; j<aCol; j++) {
			cin>>a[i][j];
		}
	}
	for(int k=0; k<bRow; k++) {
		for(int m=0; m<bCol; m++) {
			cin>>b[k][m];
		}
	}	
	for(int n=0; n<aRow; n++) {
		for(int p=0; p<bCol; p++) {
			long result = 0;
			for(int s=0; s<aCol; s++) {
				result += a[n][s] * b[s][p];
			}
			c[n][p] = result;
		}
	}
	for(int y=0; y<aRow; y++) {
		for(int x=0; x<bCol; x++) {
			if(x==bCol-1) {
				cout<<c[y][x]<<endl;
			}
			else {
				cout<<c[y][x]<<" ";
			}
		}
	}
	
}	
