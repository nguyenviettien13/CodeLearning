#pragma once
/*
task 70
Calculate follow expression: 
       1		1							   1
1 -  ----- +  ------ -..... + (-1)^(n+1). ---------
	  1+2	  1+2+3							1+2..+n
*/
class Sum
{
public:
	Sum();
	~Sum();
	static float cal(int n);
};

