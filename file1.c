#include <iostream>
#include <vector>
#include <string.h>
//#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <string>
#include <cstring>
using namespace std;

/*_array = new string[20];
  for(auto x: s)
  {
   if(x ==  ' ')
    {
         
    }
  }


}*/


int main()
{
  cout << "Hello" << endl;

  vector<string> user_in;
  vector<char*> user_str;
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


 /* vector<string> user_string;
  string str;
  getline(cin,str);

  for(int i = 0; i < str.size(); i++)
  {

  }

  user_string.push_back(str);
  
*/
//  int s = user_in.size();
//  char** my_temp[] = new char *[2];
  for(int i = 0; i <  user_in.size(); i++)
  {  
  user_str.push_back(user_in[i].c_str());
  }
  user_str.push(nullptr);

  for(int i = 0; i < user_str.size(); i++)
  {
   cout << user_str[i] << endl;
   int pid;
   if(strcmp(user_in[i],"exit")==0){
   // kill pid;
   }
   //  mytemp[i] = user_in[i];
    if((pid = fork()) == -1)
    {
     cout << "fork error" << endl;
    }
    else if(pid == 0)
    {
    cout << "!else " << i << endl;

    execv(user_str[0],reinterpret_cast<char**>(user_str.data(),NULL);//
   /* if(execve(args[0],args)<0)
     {
       cout << "Exit" << endl;
       exit(0);
     } */
    }
   }
  return 0;
}
