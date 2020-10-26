#ifndef MENU_H_INCLUDED
#define MENU_H_INCLUDED

#include <iostream>
#include "fstream"
#include <Windows.h>
#include <string>
#include "Top.h"
#include "Bottom.h"
#include "Sportive.h"
#include "NotAthletic.h"
#include "List.h"


using namespace mylist;
using namespace wardrobe;
using namespace clothes;
using namespace top;
using namespace bottom;
using namespace shoes;
using namespace sport;
using namespace notat;


	class Interface {
	public:
		Interface();
		void Menu( List<Top> p, List<Bottom> m, List<NotAthletic> c,  List<Sportive> s);
	};
}

#endif // !MENU_H

