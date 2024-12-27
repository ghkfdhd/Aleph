#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int R[n];
	for(int i=0;i<n;i++)
	{
		cin >> R[i];
	}
	sort(R, R+n);
	cout << R[0]*n;
}
