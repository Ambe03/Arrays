#include<bits/stdc++.h>
using namespace std;

int count(int arr[], int n)
{
	
	for(int i =0; i<n; i++)
	{
	    int cnt =0;	
		int num=arr[i];  
		for(int j =0; j<n; j++)
		{
			if(arr[j] == num)
			{
				cnt++;
			}
		}
		if(cnt == 1) return num;
	}
	return -1;
}

int main()
{
	int arr[] = {2,3,3,5,5,4,2};
	int n = sizeof(arr)/sizeof(arr[0]);
	int ans = count(arr,n);
	cout<<ans;
	
}
