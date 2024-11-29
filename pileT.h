#pragma once
#include<iostream>
using namespace std;
template <class T>

class pileT
{
private:
	T val[20];
	int sommet;
public:
	pileT();
	bool isEmpty()const;
	bool isFull() const;
	void push(const T info);
	T pop();
	void print();
	~pileT();
};

template<class T>
inline pileT<T>::pileT()
{
	cout << "construc" << endl;
	this->sommet = -1;
}

template<class T>
inline bool pileT<T>::isEmpty() const
{
	return(sommet == -1);
}

template<class T>
inline bool pileT<T>::isFull() const
{
	return(sommet == 19);
}

template <class T>
inline void pileT<T>::push(T x)
{
	if (isFull())
	{
		cout << "stack i full" << endl;
	}
	else
		val[++sommet] = x;
}


template<class T>
inline T pileT<T>::pop()
{
	if (!isEmpty())
	{
		return(val[sommet--]);
	}
	else
	{
		cout << "stack is empty" << endl;
		return 0;
	}
}


template<class T>
inline void pileT<T>::print()
{
	cout << "les elements de la pile : " << endl;

	pileT<T> temp;
	while (!isEmpty())
	{
		temp.push(this->val[sommet]);
		cout << this->pop() << " ";
	}
	cout << endl;
	while (!temp.isEmpty())
	{
		this->push(temp.pop());
	}
}

template<class T>
inline pileT<T>::~pileT()
{
	cout << "destruc" << endl;
}


