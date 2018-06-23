#include"helloclass.h"
#include<iostream>

using namespace std;

helloclass::helloclass()
{
cout<<"I am being created!"<<endl;
}

void helloclass::sayhello()
{
cout<<"Hello Class!"<<endl;
}

helloclass::~helloclass()
{
cout<<"I am being destroyed!"<<endl;
}

