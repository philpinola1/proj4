#include "./includes/ST_American_DonutEnthusiest.h"
#include "./includes/constants.h"

	ST_American_DonutEnthusiest::ST_American_DonutEnthusiest(int iPerson):Smalltalk_American::Smalltalk_American(AMERICAN_DE, iPerson) {
		this->iPerson=0;
		//ST_American_DonutEnthusiest::populatePhrases();
	}

	ST_American_DonutEnthusiest::~ST_American_DonutEnthusiest(void) {
		if (pWatch) {
			pWatch = 0;
		}
		ST_American_DonutEnthusiest::populatePhrases();
	}





	void ST_American_DonutEnthusiest::populatePhrases() {
		mySmallTalk.push_back(AMERICAN_DE_PHRASE_1);
		mySmallTalk.push_back(AMERICAN_DE_PHRASE_2);
		mySmallTalk.push_back(AMERICAN_DE_PHRASE_3);
		mySmallTalk.push_back(AMERICAN_DE_PHRASE_4);
		mySmallTalk.push_back(AMERICAN_DE_PHRASE_5);


//		switch (iPerson%5) {
//			case 1:
//				mySmallTalk.push_back(AMERICAN_DE_PHRASE_1);
//				break;
//
//			case 2:
//				mySmallTalk.push_back(AMERICAN_DE_PHRASE_2);
//				break;
//
//			case 3:
//				mySmallTalk.push_back(AMERICAN_DE_PHRASE_3);
//				break;
//
//			case 4:
//				mySmallTalk.push_back(AMERICAN_DE_PHRASE_4);
//				break;
//
//			case 0:
//				mySmallTalk.push_back(AMERICAN_DE_PHRASE_5);
//				break;
//		}
	}
