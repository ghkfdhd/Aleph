#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int R[n];
	int A[n];
	for(int i=0;i<n;i++)
	{
		cin >> R[i];
	}
	sort(R, R+n);
	for(int i=0;i<n;i++)
	{
		A[i]=R[i]*(n-i);
	}
	sort(A, A+n);
	cout << A[n-1];
}
