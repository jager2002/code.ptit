#include<bits/stdc++.h>

using namespace std;
vector<long long> res;
int main()
{
	res.push_back(9);
	queue<string> q;
	string tmp="9";
	q.push(tmp);
	while(1)
	{
		tmp=q.front()+"0";
		res.push_back(stoll(tmp));
		q.push(tmp);
		tmp=q.front()+"9";
		res.push_back(stoll(tmp));
		q.push(tmp);
		q.pop();
		if(tmp.length()>13) break;
	}
	int t; cin >> t;
	while(t--)
	{
		int n; cin >> n;
		for(int i=0;i<res.size();i++)
		{
			if(res[i]%n==0)
			{
				cout << res[i]<< endl;
				break;
			}
		}
	}
}
