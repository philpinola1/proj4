#include "./includes/Smalltalk.h"
#include "./includes/constants.h"
#include "./includes/Watch.h"


	//derived class will set Nationality, iPerson. iPerson is just a counter used to distinguish objects of the same type
	Smalltalk::Smalltalk(std::string myNationality,int iPerson){
		this->pWatch = 0;
		Smalltalk::populatePhrases();
	}

	//if pWatch !=0 then be sure to delete the pointer
	Smalltalk::~Smalltalk(void) {
		if (this->pWatch) {
			pWatch = 0;
		}
	}

	//cycles through and returns phrases created in populatePhrases
	//takes the form Nationality iPerson: phrase
	//for instance the following string comes from an American instance, the 10th iPerson and it is printing AMERICAN_PHRASE_2
	//AMERICAN 10:Why yes, I would like to supersize that
	std::string Smalltalk::saySomething() {

		//current phrase!!!! increment
				switch (iPerson%5) {
					case 1:
						mySmallTalk.push_back(AMERICAN_PHRASE_1);
						break;

					case 2:
						mySmallTalk.push_back(AMERICAN_PHRASE_2);
						break;

					case 3:
						mySmallTalk.push_back(AMERICAN_PHRASE_3);
						break;

					case 4:
						mySmallTalk.push_back(AMERICAN_PHRASE_4);
						break;

					case 0:
						mySmallTalk.push_back(AMERICAN_PHRASE_5);
						break;
				}

		return mySmallTalk.pop_back();
	}

	//returns the time or I_DO_NOT_HAVE_A_WATCH string
	std::string Smalltalk::getTime() {

		if (this->pWatch) {
			return pWatch->getTime();
		}

		else {
			return I_DO_NOT_HAVE_A_WATCH;
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
