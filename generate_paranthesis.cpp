#include<iostream>
#include <vector>
using namespace std;


void solve(int  n, int open, int close,vector<string> &ans,string output){
     //base case
       if(open==0 && close == 0){ 
         ans.push_back(output);
         return;
       }

   ///including open bracket
   if(open>n)

   {
     output.push_back('(');
    solve( n, open-1, close, ans,output);

   //backtrack
    output.pop_back();

}

  if(open>close)
  { 
      output.push_back(')');
      solve(n,open, close-1, ans, output);

   //backtrack
    output.pop_back();

  }
   }
     



int main(){
   int  n ='3';
  int open = n;
  int close = n;
  vector<string> ans;
  string output = "";

  solve(n, open, close, ans, output);
}