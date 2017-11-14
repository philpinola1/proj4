#include "./includes/Smalltalk.h"
#include "./includes/constants.h"


	//derived class will set Nationality, iPerson. iPerson is just a counter used to distinguish objects of the same type
	Smalltalk::Smalltalk(std::string myNationality,int iPerson):nationality(myNationality),iPerson(iPerson) {
		this->pWatch = 0;
		Smalltalk::populatePhrases();
	}

	//THERE IS NO CONSTRUCTOR THAT TAKES SOLELY (int iPerson)
	//I can't makes a constructor here bc it wouldn't line up with the Smalltalk.h file
	//This is interfering with my progress on Smalltalk_American.cpp


	//if pWatch !=0 then be sure to delete the pointer
	Smalltalk::~Smalltalk(void) {
		if (pWatch) {
			pWatch = 0;
		}
	}

	//cycles through and returns phrases created in populatePhrases
	//takes the form Nationality iPerson: phrase
	//for instance the following string comes from an American instance, the 10th iPerson and it is printing AMERICAN_PHRASE_2
	//AMERICAN 10:Why yes, I would like to supersize that
	std::string Smalltalk::saySomething() {

	}

	//returns the time or I_DO_NOT_HAVE_A_WATCH string
	std::string Smalltalk::getTime() {

	}

	//if this object has a watch it is taken away,
	//this means return the pointer and set this->pWatch =NULL;
	Watch* Smalltalk::takeWatch() {

	}

	//if already have a watch then return false and dont change pWatch pointer
	//otherwise accept watch (return true) and set this->pWatch=pWatch
	bool Smalltalk::giveWatch(Watch *pWatch) {

	}

	//ABC, implement in derived classes
	void Smalltalk::populatePhrases() {}


//
//	//derived class will set Nationality, iPerson. iPerson is just a counter used to distinguish objects of the same type
//	Smalltalk::Smalltalk(std::string myNationality,int iPerson):nationality(myNationality){
////		this->iPerson = iPerson;
////		this->pWatch = 0;
////		this->current_phrase = 0;
//	}
//
//	//if pWatch !=0 then be sure to delete the pointer
//	Smalltalk::~Smalltalk(void) {
//		if (pWatch) {
//			pWatch = 0;
//		}
//	}
//
//	//cycles through and returns phrases created in populatePhrases
//	//takes the form Nationality iPerson: phrase
//	//for instance the following string comes from an American instance, the 10th iPerson and it is printing AMERICAN_PHRASE_2
//	//AMERICAN 10:Why yes, I would like to supersize that
//	std::string Smalltalk::saySomething() {
//
//	}
//
//	//returns the time or I_DO_NOT_HAVE_A_WATCH string
//	std::string Smalltalk::getTime(){
//
//	}
//
//	//if this object has a watch it is taken away,
//	//this means return the pointer and set this->pWatch =NULL;
//	Watch* Smalltalk::takeWatch() {}
//
//	//if already have a watch then return false and dont change pWatch pointer
//	//otherwise accept watch (return true) and set this->pWatch=pWatch
//	bool Smalltalk::giveWatch(Watch *pWatch) {}
//
//	//ABC, implement in derived classes
//	void Smalltalk::populatePhrases() {
//		Smalltalk::current_phrase = 0;
//	}
//
