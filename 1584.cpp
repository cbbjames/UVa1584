//#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<cstdio>
#include<cstring>
#include<string>
using namespace std;
void is_min(string);
string ex_ans = "";
int main()
{
	string s = "";
	int t;
	scanf("%d", &t);
	getchar();
	while (t--)
	{
		ex_ans = "";
		cin >> s;
		//getchar();
		int l_of_s = s.size();
		//s[s.size()-1] = '\0';
		s = s + s;
		
		for (int i = 0; i < l_of_s ; i++)
		{
			string ans = "";
			for (int j = i; j < l_of_s+i ; j++)
			{
				ans = ans + s[j];
			}
			is_min(ans);
		}
		cout<<ex_ans<<endl;
	}
	//system("PAUSE");
	return 0;
}
void is_min(string ans)
{
	if (ex_ans == "")
		ex_ans = ans;
	else if (ex_ans > ans)
		ex_ans = ans;
}