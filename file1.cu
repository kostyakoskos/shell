#include <iostream>
#include <vector>
#include <string.h>
//#include <stdio.h>
//#include <sys/types.h>
//#include <unistd.h>

using namespace std;

/*string* word(string s)
{ 
  string[] word_array = new string[20];
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

  char s[200];
  fgets(s,sizeof(s),stdin);
  
  string temp;
  for(int i = 0; i < sizeof(s); i++)
  {
   if(s[i] == ' ')
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
  for(int i = user_in.size(); i >= 0; i--)
  {
    cout << user_in[i] << endl;
   /* int pid;
    if((pid = fork()) == -1)
    {
     cout << "fork error" << endl;
    }
    else if(pid == 0)
    {
     execve(i,0,0);
    }*/
   }
   
  return 0;
}
