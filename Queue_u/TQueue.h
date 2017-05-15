#pragma once
#include <iostream>

using namespace std;


template <class T>
struct TElem
{
	TElem *prev=0, *next=0;
	T Val;
};
template <class T>
class TQueue
{
private:

	TElem <T> *head, *tail;

public:

	TQueue();
	//TStack(TStack& di);
	void add(T);
	T get();
	~TQueue();


friend ostream & operator<<(ostream &out, TQueue &mt)
{
	if(mt.head!=0)
	for (TElem <T> *i = mt.head; i != 0; i = i->next)
		out << i->Val << endl;
	return out;
}
};

template<class T>
TQueue<T>::TQueue()
{
	head = 0;
	tail = 0;
}

template<class T>
void TQueue<T>::add (T s)
{
	if (head == 0)
	{
		head= tail = new TElem <T>;
		tail->Val = s;
	}
	else
	{
		TElem <T> *temp = tail;
		tail = new TElem <T>;
		tail->prev = temp;
		temp->next = tail;
		tail->Val = s;
	}
}

template<class T>
T TQueue<T>::get()
{
	if (head == 0)
		throw 7;
	T temp = head->Val;
	TElem <T> *temp1 = head;
	head = head->next;
	head->prev = 0;
	delete temp1;
	return temp;
}

template<class T>
TQueue <T>::~TQueue()
{
	TElem <T> *f = head;
	while (f != 0)
	{
		head = f;
		f = head->next;
		delete head;
	}
}