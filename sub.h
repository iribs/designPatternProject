#ifndef SUB_H
#define SUB_H

#include "Observer.h"

class Sub :public Observer
{
public:
	Sub(char* = "ÏÂÊô");
	char *GetName() const;
	virtual void Update(Subject *aSubject);
private:
	char *name;
};

#endif