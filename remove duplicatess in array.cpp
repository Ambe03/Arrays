#include<bits/stdc++.h>
#include<vector>
using namespace std;

//BRUTE FORCE APPROACH +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

void duplicate(vector<int>& arr)
{
	set<int> uniqueSet(arr.begin(), arr.end());
			/*
			set<int> st;
			for(int i=0; i<n;i++)
			{
				st.insert(arr[i]);
			}
			*/
			
			/*
			int index = 0;
			for(int num: st)
			{
				arr[index] = num;
				index++;
			}
			*/
//	vector<int> uniqueArr(uniqueSet.begin(), uniqueSet.end());
	arr.assign(arr.begin(), arr.end());
	
}

//Better two pointer approach+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

void dupe(vector<int>& arr)
{
	int n = arr.size();
	if(n==0)
	{
		return;
	}
	int index =0;
	for(int i=0; i<n; i++)
	{
		bool isDupe = false;
		for(int j=i+1; j<n;j++)
		{
			if(arr[j] == arr[i])
			{
				isDupe = true;
				break;
			}
		
		}
		
	
		if(!isDupe)
		{
			arr[index] = arr[i];
			index++;
		}

    }
    arr.resize(index);
}

//+++++++++++++++++++++++++++++++++++++++


int dupe2(vector<int>& arr)
{
	int n = arr.size();
	
	int i =0;
		for(int j=1; j<n;j++)
		{
			if(arr[i] != arr[j])
			{
				i++;
				arr[i] = arr[j];
				
			}
		
		}
		arr.resize(i+1);
		return i+1;
}

int main()
{
	vector<int> arr;
	arr.push_back(1);
	arr.push_back(2);
	arr.push_back(2);
	arr.push_back(3);
	arr.push_back(4);
	cout<<"BEFORE:   ";
	for(int i=0; i<arr.size(); i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<"AFTER:      ";
	dupe2(arr);
	for(int i=0; i<arr.size(); i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	return 0;
}
