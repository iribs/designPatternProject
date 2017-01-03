#include "stdafx.h"
#include "command.cpp"  

int main()
{
	Commander *p = new Commander(new InputCommand("[empty]"));

	p->ExecuteCommand(new InputCommand("2333"));
	p->ExecuteCommand(new InputCommand("6666"));
	p->ExecuteCommand(new InputCommand("helloWorld"));
 
	p->Undo();
	p->Undo();

	p->ExecuteCommand(new InputCommand("test"));
	p->Undo();  
	p->Undo();
	p->Undo();
	p->Redo(); 
	p->Redo();
	p->Redo();

	p->ExecuteCommand(new InputCommand("ok"));
	p->Undo();  
	p->Redo();
	p->Redo();
	p->Redo();

	delete p;

	getchar();

	return 0;
}