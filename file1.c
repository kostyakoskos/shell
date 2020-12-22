#include <iostream>
//#include <vector>
//#include <string.h>
//#include <stdio.h>
//#include <sys/types.h>
#include <unistd.h>
#include <string>
#include <cstring>
//#include <signal.h>
#include <stdio.h>
#include <stdlib.h>

using namespace std;


int main()
{
/*  vector<string> user_in;
  vector<const char*> user_str;
  char s[200];
  fgets(s,sizeof(s),stdin);
  
  string temp;
  for(int i = 0; i < sizeof(s); i++)
  {
   if(s[i] == ' ' || s[i] == '\n')
   {
     user_in.push_back(temp);
     temp="";
   }
   else{ temp+=s[i];}
  }


  for(int i = 0; i <  user_in.size(); i++)
  {  
  user_str.push_back(user_in[i].c_str());
  }

  user_str.push_back(nullptr);
//  cout << "user_push" << endl;
  pid_t pid = getpid();

  for(int i = 0; i < user_str.size(); i++)
  {
   if((user_in[i] == "exit") == 1)
   {
      //cout << user_in[i];
      //cout << "Kill"<< endl;
      kill(pid,SIGTERM);
      break;
   }

   if((pid = fork()) == -1)
   {
     cout << "fork error" << endl;
   }
   else if(pid == 0)
   {
    // cout << "!else " << i << endl;
*/
  string a = "./example2";
 
   char *args1[]={(char*)a.c_str(),NULL};
   // execv(user_str[i],reinterpret_cast<char**>(user_str.data(),NULL));
//cout<<(char*)a.c_str();
  execv(args1[0], args1);// reinterpret_cast<char**>(user_str.data(),NULL));
  cout<<"EXEC"<<endl;
      //cout<< "right exec" << endl;  
// start proccess
   /* if(execve(args[0],args)<0)
     {
       cout << "Exit" << endl;
       exit(0);
     } */
  //  }
//   }
  return 0;
 }
