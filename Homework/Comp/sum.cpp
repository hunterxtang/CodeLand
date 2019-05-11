#include <iostream>
using namespace::std;
int main()
{
	int n;
	cin>>n;
	int nums[500][500];
	for(int i=0; i<n; i++) {
		for(int j=0; j<n; j++)
			cin>>nums[i][j];
	}
	int tmp = 0;
	int largest = -100000;
	for(int i=0; i<n; i++) {
		for(int j=0; j<n; j++) { //(i,j) left upper corner
			for(int k=i; k<n; k++) {
				for(int m=j; m<n; m++) { //k, m right lower corner
					tmp = 0;
					for(int a=i; a<=k; a++) {
						for(int b=j; b<=m; b++) {
							tmp+=nums[a][b];
						}
						if(tmp > largest) {
							largest = tmp;
						}
					}
				}
			}
		}
	}
	cout<<largest<<endl;
}
