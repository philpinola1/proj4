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

	std::unique_ptr<Smalltalk> brits (new Smalltalk_Brit(numBrit));
	ppl.push_back(brits);

	//add americans  to vector

	std::unique_ptr<Smalltalk> ams (new Smalltalk_American(numAmerican));
	ppl.push_back(ams);

	//add american donut enthusiest  to vector

	std::unique_ptr<Smalltalk> de (new ST_American_DonutEnthusiest(numbAmericanDonutEnthusiest));
	ppl.push_back(de);

	//create some watches (as long as number watches <= numb people)	

	Watch *w1;
	Watch *w2;
	Watch *w3;

	//then give the watches away to first NUM_WATCHES people in the vector

	//keep in mind that you are responsible for deleting any pointers to 
	//watches allocated on the heap when you are finished using the vector you return 
	//from this function(see Smalltalk header for hints)

	//return your vector

	return ppl;
}
