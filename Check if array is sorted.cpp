#include<bits/stdc++.h>
using namespace std;

bool sorted(int arr[], int n)
{
	for(int i=1; i<n; i++)
	{
		if(arr[i] < arr[i-1])
		{
			return false;
		}
	}
	return true;
}

bool isSorted(int arr[], int n) {
  for (int i = 0; i < n; i++) 
  {
    for (int j = i + 1; j < n; j++) 
	{
      if (arr[j] < arr[i])
        return false;
    }
  }
  return true;
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
	cout<<"The array entered is: "<<endl;
	for(int i=0; i<n; i++)
	{
		cout<<arr[i];
	}
	cout<<"is soted??: "<<endl;
	if(sorted(arr, n))
	{
		cout<<"true";
	}
	else
	{
		cout<<"false";
	}
	
}
