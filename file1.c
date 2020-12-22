#include <iostream>
#include <vector>
#include <string.h>
#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <string>
#include <cstring>
#include <signal.h>
#include <stdio.h>
#include <stdlib.h>
#include <wait.h>

using namespace std;


int main()
{
	vector<string> user_in;
	vector<const char*> user_str;
	char s[200];
	char *arg[32];
	while(1==1)
	{
		fgets(s,sizeof(s),stdin);
		string temp;
		for(int i = 0; i < sizeof(s); i++)
		{
			if(s[i] == ' ' || s[i] == '\n')
			{
				user_in.push_back(temp);
				temp="";
			}
			else
			{
				temp+=s[i];
			}
		}


		for(int i = 0; i <  user_in.size(); i++)
		{
			user_str.push_back(user_in[i].c_str());
		}

		user_str.push_back(nullptr);
		pid_t pid = getpid();

		if(user_in[0] == "exit")
		{
			kill(pid,SIGTERM);
		}

		if((pid = fork()) == -1)
		{
			cout << "fork error" << endl;
		}
		else if(pid == 0)
		{
			for(int j = 0; j < user_str.size(); j++)
			{
				arg[j] = (char*)user_str[j];
			}
			if(execvp(user_str[0],arg) == -1)
			{
				cout<<"Execve error"<<endl;
			}
			cout<<"Execve successfull"<<endl;
		}
		else
		{
			wait(NULL);
			user_str.clear();
			user_in.clear();
			bzero(s,200);
			for(int i = 0; i<32;i++)
			{
				arg[i] = NULL;
			}
		}
	}
	return 0;
}
