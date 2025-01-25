#include<iostream>
#include<climits>
using namespace std;

pair<int,int> largeSmall(int arr[], int n)
{
	int max = INT_MIN;
	int min = INT_MAX;
	for(int i=0; i<n; i++)
	{
		if(arr[i]>max)
		{
			max = arr[i];
		}
		if(arr[i]<min)
		{
			min = arr[i];
		}
	}
	return make_pair(max, min);
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
	int n;
	cin>>n;
	int* arr = new int[n];
	for(int i=0; i<n; i++)
	{
		cin>>arr[i];
	}
	cout<"entered array: ";
	print(arr, n);
	
	pair<int,int> result = largeSmall(arr, n);
	cout<<"largest element"<<result.first<<endl;
	cout<<"smallest element"<<result.second<<endl;
	
	delete[] arr;
	
}
