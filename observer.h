#ifndef OBSERVER_H
#define OBSERVER_H

#include "Subject.h"

class Subject;
class Observer
{
public:
	virtual void Update(Subject *aSubject) = 0;
	virtual ~Observer(){}
protected:
	Observer(){};
};

#endif