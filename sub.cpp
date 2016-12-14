#include "stdafx.h"
#include <iostream>

#include "sub.h"

using namespace std;

Sub::Sub(char *aName)
{
	name = aName;
}

void Sub::Update(Subject *aSubject)
{
	cout << GetName() << ":bossָʾ," << aSubject->GetContent() << endl;
}

char *Sub::GetName() const
{
	return name;
}


