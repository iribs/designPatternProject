#ifndef BOSS_H
#define BOSS_H

#include "Subject.h"
#include <list>
#include <iterator>

class Boss : public Subject
{
public:
	Boss();
	virtual void Attach(Observer *aObserver);
	virtual void Notify();
	virtual char *GetContent() const;
	virtual void SetContent(char *aContent);
	char *content;
private:
	std::list<Observer *> observerList;
};

#endif