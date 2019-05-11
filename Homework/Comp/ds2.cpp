#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main()
{
    int n, k;
    cin>>n>>k;
    int nums[100];
    int tot = 1;
    nums[0] = 1;
    for(int i=1; i<=n; i++) {
        tot*=2;
        nums[i] = tot;
    }
    cout<<nums[k-1]<<endl;
}


