#include<iostream>
#include<string>
#include<cstdio>
using namespace std;

string Diors_name;

enum CHAR_TYPE
{
	TYPE_DIGIT,
	TYPE_CHARACTER,
	TYPE_POINT,
	TYPE_SPACE,
	TYPE_NOTDEF
};

enum PARSE_TYPE
{
	PARSE_IDENTIFER,
	PARSE_NUMBER,
	PARSE_KEYWORD
};

enum CHAR_TYPE Analyse(char ch)
{
	if(ch >= '0' && ch <= '9')
		return TYPE_DIGIT;
	if(ch <= 'z' && ch >= 'a')
		return TYPE_CHARACTER;
	if(ch <= 'Z' && ch >= 'A')
		return TYPE_CHARACTER;
	if(ch == '\r')
		return TYPE_SPACE;
	if(ch == '\n')
		return TYPE_SPACE;
	if(ch == ' ')
		return TYPE_SPACE;
	if(ch == '\t')
		return TYPE_SPACE;
	return TYPE_NOTDEF;
}

int parse()
{
	return 0;
}

class Scene	//Describe scene
{
public:
	Scene(){}
	~Scene(){}
	void LookAround()
	{
		;
	}
};

int main()
{
	char cinput[4096];
	string input;
	cout<<"Before entre this game & start your great journey.\r\nWould you like to tell me ,the great wizard your name;"<<endl;
	cin>>Diors_name;
	cout<<"Ok,great hero "<<Diors_name<<".This world is in mess.Only you could save the world."<<endl;
	cout<<"Now you are ported to a place surrounded by a lot of dicks."<<endl;
	while(gets(cinput))
	{
		input = cinput;
		;
	}
	return 0;
}
