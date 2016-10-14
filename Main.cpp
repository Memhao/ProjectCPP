/*
 * Main.cpp
 *
 *  Created on: Oct 14, 2016
 *      Author: xander
 */




#include <iostream>
#include "TheGame/Player/Player.hpp"
#include "TheGame/Resource/IResource.hpp"
#include "TheGame/Resource/GoldResource.hpp"
using namespace std;
int main() {

		GoldResource* g = new GoldResource(200);
		GoldResource* gr =new  GoldResource(0);
		GoldResource* ge =new  GoldResource(0);
		GoldResource* gq =new  GoldResource(0);
		GoldResource* gj =new  GoldResource(0);
		GoldResource* gl =new  GoldResource(0);
		Player * p = new Player("Meme",gr);
		Player * r = new Player("Xeee",ge);
		Player * q = new Player("Jawsan",gq);
		Player * k = new Player("Jawasan",gj);
		Player * l = new Player("Dewasan",gl);
		p->aquireResource(g);
		r->aquireResource(g);
		q->aquireResource(g);
		k->aquireResource(g);
		l->aquireResource(g);
		p->start();
		r->start();
		q->start();
		k->start();
		l->start();
		p->stop();
		r->stop();
		q->stop();
		k->stop();
		l->stop();
//
		cout<<p->getGold()<<endl;
		cout<<r->getGold()<<endl;
		cout<<q->getGold()<<endl;
		cout<<k->getGold()<<endl;
		cout<<l->getGold()<<endl;
	cout<<"__________________________________________________________________________________________________"<<endl;














	cout<<"__________________________________________________________________________________________________"<<endl;
	return 0;
}
