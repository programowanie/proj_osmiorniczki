#pragma once

class Society
{
private:
	int _social_mood,_left,_right;

public:
	Society();

	int social_mood(){return _social_mood;}

	void symulate(int,int);
};