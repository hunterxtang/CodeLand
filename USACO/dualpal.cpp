/*
ID: hunterx3
LANG: C++
TASK: dualpal
*/
#include <iostream>
#include <fstream>
using namespace::std;
bool isPalindromic(string word)
{
        for(int i=0; i<word.length()/2; i++) {
                if(word[i] != word[word.length()-i-1]) {
                        return false;
                }
        }
        return true;
}
string changebase(int num, int base)
{
        /*
        cout<<"number is: "<<num<<endl;
        cout<<"base is: "<<base<<endl;
        */
        int output[10000];
        int i=0;
        int num2 = num;
        while(num > 0) {
                output[i] = num%base;
                num = num/base;
                i++;
        }
        //cout<<num2<<" in base "<<base<<" is: ";
        string code = "0123456789ABCDEFGHIJK";
        string outputstr = "";
        for(int j=i-1; j>=0; j--) {
                outputstr += code[output[j]];
        }
        return outputstr;
}
int main()
{
	ifstream fin("dualpal.in");
	ofstream fout("dualpal.out");
	int n, s;
	fin>>n>>s;
	int nums = 0;
	for(int i=s+1; i<100000; i++) {
		int baseamount = 0;
		for(int j=2; j<=10; j++) {
			if(isPalindromic(changebase(i, j)) == true) {
				baseamount++;	
			}
		}
		if(baseamount >= 2) {
			fout<<i<<endl;
			nums++;
		}
		if(nums == n) {
			break;
		}
	}
}

