#ifndef MENU_H_INCLUDED
#define MENU_H_INCLUDED

#include <iostream>
#include "fstream"
#include <Windows.h>
#include <string>
#include "Wolves.h"
#include "Dingo.h"
#include "Service.h"
#include "Hunting.h"
#include <List.h>


using namespace std;


	class Interface {
	public:
		Interface();



		void Menu(List<Wolves> p,List<Dingo> m,List<Service> c,List<Hunting> s);
		//void Menu(List <Wolves> &p, List<Dingo> &m, List<Service> &c,  List<Hunting> &s);


	};




#endif // !MENU_H


