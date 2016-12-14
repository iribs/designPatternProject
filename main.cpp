#include "stdafx.h"
#include "sub.h"
#include "boss.h"
#include <iostream>
using namespace std;

int main()
{
	Sub *sub1 = new Sub("Jack");
	Sub *sub2 = new Sub("John");
	Sub *sub3 = new Sub("Json");
	Boss boss;

	boss.Attach(sub1);
	boss.Attach(sub2);
	boss.Attach(sub3);

	boss.Notify();

	cout << "ÊäÈëÖ¸Áî" << endl;
	char ins[20];
	cin >> ins;
	char *content;
	content = ins;
	boss.SetContent(content);
	boss.Notify();

	boss.Detach(sub1);
	boss.Notify();

	std::system("PAUSE");

	return 0;
}