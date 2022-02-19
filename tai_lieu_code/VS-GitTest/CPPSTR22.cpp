#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while(t--)
    {
        string s1, s2;
        getline(cin, s1);
        getline(cin, s2);
        vector<string> a, b, c, d;
        string tmp = "";
        for(int i = 0; i < s1.size(); i++)
		{
			if(s1[i] != ' ' && s1[i] != '\t' && i != s1.size() - 1) tmp += s1[i];
			else if(i == s1.size() - 1 && s1[i] != ' ' && s1[i] != '\t')
			{
				tmp += s1[i];
				if(tmp != "") a.push_back(tmp);
				tmp = "";
			}
			else
			{
				if(tmp != "") a.push_back(tmp);
				tmp = "";
			}
		}
        for(int i = 0; i < s2.size(); i++)
		{
			if(s2[i] != ' ' && s2[i] != '\t' && i != s2.size() - 1) tmp += s2[i];
			else if(i == s2.size() - 1 && s2[i] != ' ' && s2[i] != '\t')
			{
				tmp += s2[i];
				if(tmp != "") b.push_back(tmp);
				tmp = "";
			}
			else
			{
				if(tmp != "") b.push_back(tmp);
				tmp = "";
			}
		}
        for(int i = 0; i < a.size(); i++)
        {
            int kt = 1;
            for(int j = 0; j < b.size(); j++)
            {
                if(a[i] == b[j])
                {
                    kt = 0;
                    break;
                }
            }
            if(kt == 1) c.push_back(a[i]);
        }
        if(c.empty());
        else
        {
        	for(int i = 0; i < c.size() - 1; i++)
        	{
            	for(int j = i + 1; j < c.size(); j++)
            	{
                	if(c[i] > c[j])
                	{
                    	string tmp = c[i];
                    	c[i] = c[j];
                    	c[j] = tmp;
                	}
            	}
        	}
        	d.push_back(c[0]);
        	for(int i = 1; i < c.size(); i++)
        	{
        	    if(c[i] != d[d.size() - 1]) d.push_back(c[i]);
        	}
        	for(int i = 0; i < d.size(); i++)
        	{
        	    	cout << d[i] << " ";
        	}
        }
        cout << endl;
    }
}