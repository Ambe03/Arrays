#include<bits/stdc++.h>
using namespace std;


bool exist(int arr[], int n, int target)
{
	int sum = 0;
	for(int i=0; i<n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			sum = arr[i] + arr[j];
			if(sum == target)
			{
				return true;
			}
		}		
	}
	return false;	
}

pair<int, int> index(int arr[], int n, int target)
{
	
	int sum = 0;
	for(int i=0; i<n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			sum = arr[i] + arr[j];
			if(sum == target)
			{
				return {i,j};
			}
		}		
	}
	return{-1, -1} ;	
}


string twosum(int arr[], int n, int target)
{
	map<int, int> mpp;
	for(int i=0; i<n; i++)
	{
		int num = arr[i];
		int moreneeded = target - num;
		if(mpp.find(moreneeded) != mpp.end())
		{
			return "YES";
		}
		mpp[num] = i;
	}
	return"NO";
}

int main()
{
	int arr[5] = {1,2,3,4,5};
	int n = 5;
	int target;
	cin>>target;
//	pair<int, int> result = index(arr, n, target);
//	if (result.first != -1 && result.second != -1)
//    {
//        cout << "Indices: " << result.first << ", " << result.second << endl;
//    }
//    else
//    {
//        cout << "No pair found" << endl;
//    }

	string result = twosum(arr, n, target); 
		cout<<result;
	return 0;
	
}
