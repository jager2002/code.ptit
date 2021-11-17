#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n; cin >>n;
	int a[n+5];
	string s;
	cin.ignore();
	for(int i=0;i<n;i++)
	{
		getline(cin,s);
		stringstream ss(s);
		string tmp;
		int dem=0;
		while(ss >> tmp)
		{
			dem++;
		}
		a[i]=dem;
	}
	vector<int> v;
	int dem=0;
	for(int i=0;i<n;i++)
	{
		if(a[i]!=7)
		{
			dem++;
			while(a[i]!=7) i++;
			v.push_back(1);
			i--;
		}
		else
		{
			dem++;
			while(a[i]==7) i++;
			v.push_back(2);
			i--;
		}
	}
	cout << dem << endl;
	for(int i=0;i<v.size();i++) cout << v[i] << endl;
}
