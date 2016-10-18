
#include "stdafx.h"
#include "List.h"
#include <iostream>
using namespace std;

void main(){
	List ls1;
	ls1.add(8);
	ls1.add(5);
	ls1.add(3);
	--ls1;
	List ls2;
	ls2.add(5);
	ls2.add(3);
	ls2 + ls1;
	ls2.show();

 if(ls1 == ls2) 
	 cout << endl << "+";
 else
 {
	 cout << endl << "-";
 }

 List ls3;
 if(ls1.IsEmpty())
	 cout << endl << "-";
 if(ls3.IsEmpty())
	 cout << endl << "-";
}
