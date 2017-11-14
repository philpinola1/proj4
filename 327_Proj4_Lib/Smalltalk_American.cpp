#include "./includes/Smalltalk_American.h"
//#include "./includes/Smalltalk.h"
#include "./includes/constants.h"




	//use base class call to set Nationality (See constants for Nationality strings)
	Smalltalk_American::Smalltalk_American(int iPerson){
		this->iPerson = iPerson;
		//HERE IS THE ISSUE EXPLAINED ON LINES 11-13 IN SMALLTALK.CPP
	}

	Smalltalk::Smalltalk(std::string myNationality=AMERICAN,int iPerson):nationality(myNationality),iPerson(iPerson){
		this->pWatch = 0;
		Smalltalk::populatePhrases();
	}

	Smalltalk_American::~Smalltalk_American(void){
		if (pWatch) {
			pWatch = 0;
		}
	}

	void Smalltalk_American::populatePhrases(){
		mySmallTalk.push_back(AMERICAN_PHRASE_1);
		mySmallTalk.push_back(AMERICAN_PHRASE_2);
		mySmallTalk.push_back(AMERICAN_PHRASE_3);
		mySmallTalk.push_back(AMERICAN_PHRASE_4);
		mySmallTalk.push_back(AMERICAN_PHRASE_5);
	}
