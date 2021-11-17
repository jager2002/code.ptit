sum+=a[i][j-1]; 
				sum+=a[i-1][j];
				sum+=a[i-1][j-1];
				sum+=a[i+1][j+1];
				sum+=a[i+1][j-1];
				sum+=a[i-1][j+1];
				sum+=a[i][j+1];
				sum+=a[i+1][j];
				for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cin >> a[i][j];
		}
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
