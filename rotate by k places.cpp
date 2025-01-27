#include<bits/stdc++.h>
using namespace std;

void rotate(int arr[], int n,int k)
{
	int* temp = new int[k]; 
	for(int i=0; i<k; i++)
	{
		temp[i] = arr[i];
	}
	
	for(int i =k ; i <n; i++)
	{
		arr[i-k] = arr[i];
	}
	
	//put back temp
	int j=0;
	for(int i= n-k; i<n; i++)
	{
//		arr[i] = temp[j];
//		j++
		arr[i] = temp[i-(n-k)];
		

	}
	
}



int main()
{
	int arr[5] = {1,2,3,4,5};
	int n=5;
	int k;
	cout<<"enter k"<<endl;
	cin>>k;
	cout<<"ARRAY ENTERED: ";
	for(int i=0; i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	
	rotate(arr, n, k);
	cout<<"ROTATED ARRAY: ";
	for(int i=0; i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
}
