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




//=============================================================================================================================================================
int SecondLargest( vector<int>& a,int n)
{
    int largest = a[0];
    int slargest = -1;
    for(int i=1; i<n; i++)
    {
        if(a[i]>largest)
        {
            slargest = largest;
            largest = a[i];
        }
        else if (a[i]<largest && a[i]>slargest)
        {
            slargest = a[i];
        }
    }
    return slargest;
}

int SecondSmallest( vector<int>& a,int n)
{
    int smallest = a[0];
    int ssmallest = INT_MAX;
    for(int i=1; i<n; i++)
    {
        if(a[i]<smallest)
        {
            ssmallest = smallest;
            smallest = a[i];
        }
        else if (a[i]!=ssmallest && a[i]<ssmallest)
        {
            ssmallest = a[i];
        }
    }
    return (ssmallest == INT_MAX) ? -1 : ssmallest; ;
}
vector<int> getSecondOrderElements(int n, vector<int> a) {
    // Write your code here.
    int slargest = SecondLargest( a, n);
    int ssmallest = SecondSmallest(a, n);
    return {slargest, ssmallest};
}




int main()
{
	int arr[5] = {5,4,3,6,8};
	int n = sizeof(arr)/sizeof(arr[0]);
	print(arr, n);
	Second(arr, n);
	sec(arr,n);
	
}
