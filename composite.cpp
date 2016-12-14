#include "stdafx.h"
#include "composite.h"
#include <iostream>  
#include <string>  
#include "list"  
using namespace std;



void showTree(IFile*root, int level)
{ 
	if (root == NULL)
	{
		return;
	}
	int i = 0;

	for (i = 0; i<level; i++)
	{
		printf("\t");
	}
	root->display();

	list<IFile*> *list1 = root->getChild();
	if (list1 != NULL) 
	{
		for (list<IFile*>::iterator it = list1->begin(); it != list1->end(); it++)
		{
			if ((*it)->getChild() == NULL)
			{
				for (i = 0; i <= level; i++)
				{
					printf("\t");
				}
				(*it)->display();
			}
			else 
			{

				showTree(*it, level + 1);
			}
		}
	}
}

void main()
{
	Dir *root = new Dir("C:");
	Dir *dir1 = new Dir("dir1");
	Dir *dir2 = new Dir("dir2");

	File *file1 = new File("file1");
	File *file2 = new File("file2");

	root->add(dir1);
	root->add(file1);
	dir1->add(file2);
	dir1->add(dir2);

	list<IFile*> *list1 = root->getChild();

	showTree(root, 0);

	system("pause");
	return;
}