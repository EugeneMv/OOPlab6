#pragma once

class List{
	public:
	List* head;
	int element;
	List* next;

	List(){head = NULL;}
	void add(int v);
	void show();
	 bool IsEmpty();
	void operator --();	 
	 void operator +(List &);
	 bool operator ==(List &);
};

