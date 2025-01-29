#include<bits/stdc++.h>
using namespace std;

int ones(int arr[], int n)
{
	int max=0;
	int count = 0;
	for(int i= 0; i<n; i++)
	{
		if(arr[i] == 1)
		{
			count = count+1;
			max= max > count ? max : count;			
		}
		else
		{
			count = 0;
		}
	}
	return max;
}

int main()
{
	int arr[] = {1,1,0,1,1,1,1,0,0,1,1};
	int n = sizeof(arr)/sizeof(arr[0]);
	int answer = ones(arr,n);
	cout<<answer;
}
