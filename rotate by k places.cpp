#include<bits/stdc++.h>
using namespace std;

void rotate(int arr[], int n,int k)
{
	k = k%n;
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

//OPTIMAL APPROACH ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

void reverse(int arr[], int start ,int end)
{
	while(start<=end)
	{
		int temp = arr[start];
	    arr[start] = arr[end];
		arr[end]= temp;
		start ++;
		end--;
	}
}

void rotate2(int arr[], int n, int k)
{
//	int n = arr.size();
	reverse(arr,0, n-k-1);
	reverse(arr, n-k, n-1);
	reverse(arr, 0, n-1);
	
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
	
	rotate2(arr,n, k);
	cout<<"ROTATED ARRAY: ";
	for(int i=0; i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
}
