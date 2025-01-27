#include<bits/stdc++.h>
using namespace std;

void Linearsearch(int arr[], int n ,int key)
{
	bool found;
	for(int i=0; i<n; i++)
	{
		if(arr[i] == key)
		{
			found = true;
			cout<<"element found at "<<i<<endl;
			cout<<"element is "<<arr[i]<<endl;
		}
	}
	
	if(!found)
	{
		cout<<"not found";
	}


		
}

int main()
{
	int arr[5] = {5,4,3,2,1};

	int n=5;
	int key;
	cin>>key;
	Linearsearch(arr, n, key);
	

}
