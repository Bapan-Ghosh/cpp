#include<bits/stdc++.h>
using namespace std;

int prec(char c){
    if(c == '^'){
        return 3;
    }
    else
      if(c == '*' || c == '/'){
          return 2;
      }
      else if(c == '+' || c =='-'){
          return 1;
      }
      else
      {
          return -1;
      }
}

string infixToPrefix(string s){
    stack<char> sc;
    string st;
    reverse(s.begin(),s.end());
    for(int i=0 ; i<s.length() ; i++){
        if(s[i] >= 'a' && s[i] <= 'z' || s[i] >= 'A' && s[i] <= 'Z'){
            st += s[i];
        }
        else
          if(s[i] == ')'){
              sc.push(s[i]);
          }
          else
           if(s[i] == '('){
               while(!sc.empty() && sc.top() != ')'){
                    st += sc.top();
                    sc.pop();
               }
               if(!sc.empty()){
                   sc.pop();
               }
           }
           else
           {
               while(!sc.empty() && prec(sc.top()) > prec(s[i])){
                     st += sc.top();
                     sc.pop();
               }
               sc.push(s[i]);
           }
    }
    while(!sc.empty()){
        st += sc.top();
        sc.pop();
    }
    reverse(st.begin(),st.end());
    return st;
}

int main(){
    cout<<infixToPrefix("k+l-M*N+(O^P)*W/U/V*T+Q");
}