#include<bits/stdc++.h>
using namespace std;

vector<int> Union(int arr1[], int arr2[], int n1,int n2)
{
	set<int> st;
	vector<int> unionarr;
	for(int i=0; i<n1; i++)
	{
		st.insert(arr1[i]);
	}
	for(int i=0; i<n2; i++)
	{
		st.insert(arr2[i]);
	}
	
	for(set<int> :: iterator it = st.begin(); it != st.end(); ++it)
	{
		unionarr.push_back(*it);
	}
	return unionarr;
	
	
}

int main()
{
	int arr1[5] = {5,5,3,2,1};
	int n1 =5;
	int arr2[5]=  {6,5,8,9,10};
	int n2 = 5;
	vector<int> result = Union(arr1, arr2, n1,n2);
	for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    cout << endl;

}
