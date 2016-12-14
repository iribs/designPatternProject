#include "stdafx.h"
#include "boss.h"
using namespace std;

Boss::Boss()
{
	content = "Á¢Õý";
}

void Boss::Attach(Observer *aObserver)
{
	observerList.push_back(aObserver);
}

void Boss::Detach(Observer *aObserver)
{
	observerList.remove(aObserver);
}

void Boss::SetContent(char *aContent)
{
	content = aContent;
}

void Boss::Notify()
{
	std::list<Observer *>::iterator sub;
	for (sub = observerList.begin(); sub != observerList.end(); ++sub)
	{
		((Observer *)(*sub))->Update(this);
	}
}

char *Boss::GetContent() const
{
	return content;
}
