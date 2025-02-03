#include<bits/stdc++.h>
using namespace std;

int kSum(int arr[], int n, int ksm)
{
	int len=0;
	for(int i=0; i<n; i++)
	{
		int sum = 0;		
		for(int j=i; j<n; j++)
		{
			
			sum = sum+arr[j];
			if(sum == ksm)
			{
				len = max(len, j-i+1);
			}
		}
	}
	return len;
}

//====================OPTIMAL FOR +VE AND -VES ===================================================
int Ksum(int arr[], int n, int ksm)
{
	map<int, int> presum;
	int sum = 0;
	int maxlen=0;
	presum[0] = -1;
	for(int i=0; i<n; i++)
	{
		sum = sum+arr[i];
		if(sum == ksm)
		{
			maxlen = max(maxlen, i+1);
		}
		int rem =  sum - ksm;
		if(presum.find(sum) != presum.end())
		{
			int len = i-presum[rem];
			maxlen = max(maxlen, len);
			
		}
		if(presum.find(sum) == presum.end())
		{
			presum[sum] = i;
		}
	}
	return maxlen;
}

//===============================OPTIMAL FOR +VES AND ZEROES===================================================

int optsum(int arr[], int n, int k)
{
	int left = 0;
	int right = 0;
	int sum = arr[0];
	int maxlen = 0;
	while(right<n)
	{
		while(left<= right && sum>k)
		{
			sum = sum - arr[left];
			left++;
		}
		if(sum == k)
		{
			maxlen = max(maxlen, right - left + 1);
		}
		right++;
		if(right<n)
		{
			sum = sum+arr[right];
		}
	}	
	
	return maxlen;
}


void print(int arr[], int n)
{
	for(int i=0; i<n; i++)
	{
		cout<<arr[i];
	}
}

int main()
{
	int arr[] = {9,8,7,6,5,4,1,1,1,2,1};
	int n= sizeof(arr)/sizeof(arr[0]);
	int Ksm;
	cin>>Ksm;
 	int res = optsum(arr, n, Ksm);
	cout<<res;
}
