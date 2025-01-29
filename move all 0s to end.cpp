#include<bits/stdc++.h>
using namespace std;

vector<int> move(vector<int> arr, int n)
{
	
	int j=0;
	vector<int> temp;
	for(int i =0; i<n ; i++)
	{
		if(arr[i] != 0)
		{
		   temp.push_back(arr[i]);
		}
	}
	int nz = temp.size();
	for(int i=0; i<nz; i++)
	{
		arr[i] = temp[i];
	}
	for(int i = nz; i<n; i++)
	{
		arr[i] = {0};
	}
	return arr;
	
}

//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
void move(int arr[], int n) {
    int j = 0;   
    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            arr[j++] = arr[i];
        }
    }

    for (int i = j; i < n; i++) {
        arr[i] = 0;
    }
}

int main()
{
	int arr[5] = {5,0,4,0,3};
	
	int n=5;
	move(arr, n);
	for(int i =0; i<n; i++)
	{
		cout<<arr[i]<<" ";
	}
}
