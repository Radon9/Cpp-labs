#include <cstdio>
#include <iostream>
#include <iomanip>
#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;

int main()
{
	double a, b, x;
	cout<<"Please input two floating-point numbers: ";
	x = scanf("%lf %lf", &a, &b);
	while(x!=0)
	{
		cout<<(a-b)/(a*b)<<" "<<endl;
		cout<<"Please input two floating-point numbers: ";
		x = scanf("%lf %lf", &a, &b);
	}
	return 0;
}

