#include<bits/stdc++.h>
using namespace std;

void Second(int arr[], int n)
{
	if(n==0 || n==1)
	{
		cout<<-1<<" "<<-1<<endl;
	}
	sort(arr, arr+n);
	int small = arr[1];
	int large= arr[n-2];
	cout<<"Second smallest is "<<small<<endl;
    cout<<"Second largest is "<<large<<endl;
}

void sec(int arr[],int n)
{
	if(n==0 || n==1)
	{
		cout<<-1<<" ";
	}
	int small = INT_MAX, secsmall = INT_MAX;
	int large=INT_MIN,seclarge=INT_MIN;
	int i;
	for(i=0; i<n; i++)
	{
		small = min(small, arr[i]);
		large = max(large, arr[i]);
	}
	for(i=0;i<n;i++)
	{
		if(arr[i]<secsmall  && arr[i]!=small)
		{
			secsmall=arr[i];
		}
		if(arr[i]>seclarge && arr[i]!=large)
		{
			seclarge = arr[i];
		}
	}
	cout<<"second smallest: "<<secsmall<<endl;
	cout<<"second largest is"<<seclarge<<endl;
}

int secondsmall(int arr[], int n)
{
	if(n>2)
	{
		return -1;
	}
	int small = INT_MAX;
	int secsmall = INT_MAX;
	int i;
	for(i=0; i<n; i++)
	{
		if(arr[i]<small)
		{
			secsmall = small;
			small = arr[i];
		}
		else if(arr[i]<secsmall && arr[i]!=small)
		{
			secsmall = arr[i];
		}
	}
	return secsmall;
}

void print(int arr[], int n)
{
	for(int i=0; i<n; i++)
	{
		cout<<arr[i]<<" ";
	}
}
int main()
{
	int arr[5] = {5,4,3,6,8};
	int n = sizeof(arr)/sizeof(arr[0]);
	print(arr, n);
	Second(arr, n);
	sec(arr,n);
	
}
