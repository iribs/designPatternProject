#include "stdafx.h"
#include <iostream>
#include <string>  
#include "list"  

using namespace std;

class IFile
{
public:
	virtual void display() = 0;
	virtual int add(IFile *ifile) = 0;
	virtual int remove(IFile *ifile) = 0;
	virtual list<IFile*>* getChild() = 0;
};

class File :public IFile
{
public:
	File(string name)
	{
		m_name = name;
	}
	virtual void display()
	{
		cout << m_name << endl;
	}
	virtual int add(IFile *ifile)
	{
		return -1;
	}
	virtual int remove(IFile *ifile)
	{
		return -1;
	}
	virtual list<IFile*>* getChild()
	{
		return NULL;
	}
private:
	string m_name;
};

class Dir :public IFile
{
public:
	Dir(string name)
	{
		m_name = name;
		m_list = new list<IFile*>;
	}
	virtual void display()
	{
		cout << m_name << endl;
	}
	virtual int add(IFile *ifile)
	{
		m_list->push_back(ifile);
		return 0;

	}
	virtual int remove(IFile *ifile)
	{
		m_list->remove(ifile);
		return 0;
	}
	virtual list<IFile*> * getChild()
	{
		return m_list;
	}
private:
	string m_name;
	list<IFile*> *m_list;
};