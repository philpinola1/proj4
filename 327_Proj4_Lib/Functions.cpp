/*
 * Functions.cpp
 *
 *  Created on: Nov 5, 2017
 *      Author: keith
 */

#include "./includes/Functions.h"
#include "./includes/Smalltalk_American.h"
#include "./includes/ST_American_DonutEnthusiest.h"
#include "./includes/Smalltalk_Brit.h"
#include "./includes/Watch.h"
#include "./includes/constants.h"

//create a vector with a brit,american, donut enthusiest using unique pointers
//use c++11 and then returning by value is fine since the compiler will move the vector
//on return rather than recreate it(if using C++11).
std::vector<std::unique_ptr<Smalltalk>> getPeople(int numBrit,
		int numAmerican, int numbAmericanDonutEnthusiest,
		int numWatches) {

	//create a vector to hold SmallTalk unique pointers
	std::vector<std::unique_ptr<Smalltalk>> ppl;

	//add brits to vector
	for (int i = 0; i < numBrit; i++) {
		std::unique_ptr<Smalltalk> brits (new Smalltalk_Brit(i));
		ppl.push_back(std::move(brits));
	}

	//add americans  to vector
	for (int i = 0; i < numAmerican; i++) {
		std::unique_ptr<Smalltalk> ams (new Smalltalk_American(i));
		ppl.push_back(std::move(ams));
	}

	//add american donut enthusiest  to vector
	for (int i = 0; i < numbAmericanDonutEnthusiest; i++) {
		std::unique_ptr<Smalltalk> DE (new ST_American_DonutEnthusiest(i));
		ppl.push_back(std::move(DE));
	}

	//create some watches (as long as number watches <= numb people)	
	//then give the watches away to first NUM_WATCHES people in the vector
	//keep in mind that you are responsible for deleting any pointers to
	//watches allocated on the heap when you are finished using the vector you return
	//from this function(see Smalltalk header for hints)
	if (numWatches <= (numBrit + numAmerican + numbAmericanDonutEnthusiest)) {
		for (int i = 0; i < numWatches; i++) {
			if(ppl.at(i)->takeWatch() == 0) {
				Watch *w = new Watch();
				ppl.at(i)->giveWatch(w);
			}
		}
	}
	//return your vector
	return ppl;
}
