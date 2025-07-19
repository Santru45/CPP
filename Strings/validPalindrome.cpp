#include<iostream>
#include<vector>

bool isAlphaNum(char ch){
    if((ch>='0' && ch<='9') || tolower(ch)>='a' && tolower(ch)<='z'){
        return true;
    } 
    return false;
}

using namespace std;

int main(){
    string s = "racecar";
    int st = 0, end = s.size()-1;
    while(st < end){
        if(!isAlphaNum(s[st])){
            st++;
            continue;
        }
        if(!isAlphaNum(s[end])){
            end--;
            continue;
        }
        if(tolower(s[st]) != tolower(s[end])){
            cout<<"The string is not a palindrome";
            exit(0);
        }
        st++; end--;

    }
    cout<<"The string is valid palindrome";
    return 0;
}