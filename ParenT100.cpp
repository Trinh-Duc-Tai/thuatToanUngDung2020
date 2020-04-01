#include<stdint.h>

using namespace std;

int nTest = 0; // so ki tu
int len = 0;
char array[1010] = {0};
char Stack[1010] = {0};
int top = -1;

void Reset()
{
	for(int i = 0; i < len; i++)
	{
		array[i] = 0;
	}
	len = 0;
	top = -1;
}

bool Check(char a, char b)
{
	if( (a == '{' && b == '}') || (a == '[' && b == ']') || (a == '(' && b == ')')) return true;
	return false;
}

void Solve()
{
	while (array[len] != '\0')
	{
		if(top == -1)Stack[++top] = array[len];
		else
		{
			if(Check(Stack[top],array[len]) == true)top--;
			else Stack[++top] = array[len];
		}
		len++;
	}
}

int main()
{
	//freopen("input.txt","r",stdin);
	scanf("%d \n", &nTest);
	for(int Testcase = 0; Testcase < nTest; Testcase++)
	{
		scanf("%s \n",array);	
		Solve();
		if(top == -1)cout << 1 << endl;
		else cout << 0 << endl;
		Reset();
	}

	
	return 0;
}
