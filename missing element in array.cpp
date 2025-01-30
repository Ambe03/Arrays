#include<bits/stdc++.h>
using namespace std;

//BRUTE FORCE
int missing1(int arr[], int n)
{
	
	for(int i=1; i<=n; i++)
	{
		int flag=0;
		for(int j=0; j<n-1; j++)
		{
			if(arr[j] == i)
			{
				flag = 1;
				break;
			}
		}
		if(flag == 0)
		{
			return i;
		}
		
	}
	return -1;
}

//========================================================================

//BETTER SOLUTION
int misshash(int arr[], int n)
{
	int hash[n+1] = {0};
	for(int i=0; i<n; i++)
	{
		hash[arr[i]] = 1;
	}
	for(int i =1; i<n; i++ )
	{
		if(hash[i] == 0)
		{
			return i;
		}
	}
	return -1;
}

//+++++++++++++++++++++++ OPTIMAL SOLUTION ++++++++++++++++++++++++++++
int missum(int arr[], int n)
{
	int nsum = n* (n+1) /2;
	int asum =0;
	int ans;
	for(int i =0; i<n; i++)
	{
		asum = asum + arr[i];
	}
	if(asum != nsum)
	{
		ans = nsum - asum;
	}
	return ans;
}


int main()
{
	int arr[5] = {1,2,3,5};
	int n = sizeof(arr)/sizeof(arr[0]);
	int answer = misshash(arr,n);
	cout<<answer;
}
