#include "./includes/Smalltalk_American.h"
#include "./includes/constants.h"

<<<<<<< HEAD

	//use base class call to set Nationality (See constants for Nationality strings)
	Smalltalk_American::Smalltalk_American(int iPerson){
		Smalltalk_American sa(AMERICAN, iPerson);
=======
	Smalltalk_American::Smalltalk_American(int iPerson):Smalltalk::Smalltalk(AMERICAN, iPerson){
		this->pWatch = 0;
		//Smalltalk_American::populatePhrases();
>>>>>>> 9f1971b9142a2f8fc293fbf18700e59ad0e1468f
	}

	Smalltalk_American::Smalltalk_American(std::string myNationality,int iPerson):Smalltalk::Smalltalk(myNationality, iPerson){
		this->pWatch = 0;
		//Smalltalk_American::populatePhrases();
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


//		switch (iPerson%5) {
//			case 1:
//				mySmallTalk.push_back(AMERICAN_PHRASE_1);
//				break;
//
//			case 2:
//				mySmallTalk.push_back(AMERICAN_PHRASE_2);
//				break;
//
//			case 3:
//				mySmallTalk.push_back(AMERICAN_PHRASE_3);
//				break;
//
//			case 4:
//				mySmallTalk.push_back(AMERICAN_PHRASE_4);
//				break;
//
//			case 0:
//				mySmallTalk.push_back(AMERICAN_PHRASE_5);
//				break;
//		}
	}
