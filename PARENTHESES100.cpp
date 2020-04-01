//PARENTHESES
#include<iostream>
using namespace std;

int soTest;
string s;
int top;
int res;
void initStack(int n){
	top = -1;
	char stack[n];
}
bool IsEmpty(){
	return top = -1;
}
void push(char x){
	top++;
	stack[top] = x;
}
char pop(){
	char ok = stack[top];
	top--;
	return ok;
}
int main(){
	cin>>soTest;
	for(int tCase = 0;tCase<soTest; tCase++){
		cin.getline(s)
	}
	return 0;
}
