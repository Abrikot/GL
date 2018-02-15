#ifndef INTERFACE_H
#define INTERFACE_H

// System include
using namespace std;
#include <iostream>
#include <stack>
#include <unordered_map>
#include <string>

// Personnal include

// Constants
const enum interfaceEnum {
	MENU_INTERFACE,
	SEARCH_INTERFACE,
	UPDATE_INTERFACE,
	ANALYSE_INTERFACE
};

// Types

// Class
class Interface
{
	// Attributes
public:
	
protected:
	static unordered_map<string, string> texts;
	static stack<Interface> stackInterface;
private:
	


	// Methods
public:
	// Constructors
	Interface();
	// Destructors
	~Interface();

	// Others
	static bool loadMap(const string path);
	
protected:
	void previous();

	string getText(string keyMessage);
	
	virtual void getInterfaceText();

	virtual string getAction();

	void createInterface(const int);

private:
};

#endif 