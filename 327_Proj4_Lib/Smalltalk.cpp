#include "./includes/Smalltalk.h"
#include "./includes/constants.h"
#include "./includes/Watch.h"

	//derived class will set Nationality, iPerson. iPerson is just a counter used to distinguish objects of the same type
	Smalltalk::Smalltalk(std::string myNationality,int iPerson):nationality(myNationality), iPerson(iPerson){
		this->pWatch = 0;
		Smalltalk::populatePhrases();
		current_phrase++;
	}

	//if pWatch !=0 then be sure to delete the pointer
	Smalltalk::~Smalltalk(void) {
		if (this->pWatch) {
			pWatch = 0;
		}
	}

	//cycles through and returns phrases created in populatePhrases
	//takes the form "Nationality iPerson: phrase"
	//for instance the following string comes from an American instance, the 10th iPerson and it is printing AMERICAN_PHRASE_2
	//AMERICAN 10:Why yes, I would like to supersize that
	std::string Smalltalk::saySomething() {

		//check the other elements in the vector to see if they are of the same nationality
		//iterate for every match??????
		//HE DID THIS IS CLASS ---- THERE IS A WAY TO DETERMINE THE NUMBER OF INSTANCES OF AN OBJECT?!?!?!

		//look at mySmallTalk and see how many other people of the same nationality are pointing to it?


		if ((unsigned)current_phrase < mySmallTalk.size()) {
			return this->nationality + " " + std::to_string(this->iPerson) + ":" + mySmallTalk.at(current_phrase++);
		}
		else { 		//else if ((unsigned)current_phrase >= mySmallTalk.size())
			this->current_phrase = 0;
			return mySmallTalk.at(mySmallTalk.size()-1);
		}
	}

	//returns the time or I_DO_NOT_HAVE_A_WATCH string
	std::string Smalltalk::getTime() {

		if (this->pWatch) {
			return this->nationality  + " " + std::to_string(this->iPerson) + ":" + pWatch->getTime();
		}
		else {
			return this->nationality  + " " + std::to_string(this->iPerson) + ":" + I_DO_NOT_HAVE_A_WATCH;
		}
	}

	//if this object has a watch it is taken away,
	//this means return the pointer and set this->pWatch =NULL;
	Watch* Smalltalk::takeWatch() {
		if (this->pWatch) {
			this->pWatch = 0;
		}
		return this->pWatch;
	}

	//if already have a watch then return false and dont change pWatch pointer
	//otherwise accept watch (return true) and set this->pWatch=pWatch
	bool Smalltalk::giveWatch(Watch *pWatch) {
		if (this->pWatch) {
			return false;
		}
		else {
			this->pWatch = pWatch;
			return true;
		}
	}

	//ABC, implement in derived classes
	void Smalltalk::populatePhrases() {}
