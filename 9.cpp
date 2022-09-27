#include <cstdio>
#include <iostream>
#include <iomanip>
#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;

const double k=273.16;
const double cf=32;
const double cc=0.5555555555555556; // = 5/9

void Temperatures(double a)
{
	cout<<"Celsius:"<<cc*(a-cf)<<" Kelvin:"<<(cc*(a-cf))+k<<" Farenheit:"<<a<<endl;
}
int main()
{ 	
	double b, x;
	cout<<"Please print Farenheit temperature: ";
	cout << fixed << showpoint;
    cout << setprecision(2);
	x =scanf("%lf", &b);
	while(x!=0)
	{
		Temperatures(b);
		cout<<"Please print Farenheit temperature: ";
		x =scanf("%lf", &b);
	}
	return 0;
}



