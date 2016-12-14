#ifndef SUBJECT_H
#define SUBJECT_H

#include "Observer.h"

class Observer;
class Subject
{
public:
	virtual ~Subject(){}
	virtual void Attach(Observer *aObserver) = 0;
	virtual void Detach(Observer *aObserver) = 0;
	virtual void Notify() = 0;
	virtual char *GetContent() const = 0;
	virtual void SetContent(char *aContent) = 0;
protected:
	Subject(){};
};

#endif