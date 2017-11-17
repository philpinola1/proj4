#include "./includes/ST_American_DonutEnthusiest.h"
#include "./includes/constants.h"

	ST_American_DonutEnthusiest::ST_American_DonutEnthusiest(int iPerson):Smalltalk_American::Smalltalk_American(AMERICAN_DE, iPerson) {
		this->pWatch=0;
		ST_American_DonutEnthusiest::populatePhrases();
	}

	ST_American_DonutEnthusiest::~ST_American_DonutEnthusiest(void) {
		if (pWatch) {
			pWatch = 0;
		}
		//ST_American_DonutEnthusiest::populatePhrases();
	}

	void ST_American_DonutEnthusiest::populatePhrases() {
		mySmallTalk.insert(mySmallTalk.begin(), AMERICAN_DE_PHRASE_5);
		mySmallTalk.insert(mySmallTalk.begin(), AMERICAN_DE_PHRASE_4);
		mySmallTalk.insert(mySmallTalk.begin(), AMERICAN_DE_PHRASE_3);
		mySmallTalk.insert(mySmallTalk.begin(), AMERICAN_DE_PHRASE_2);
		mySmallTalk.insert(mySmallTalk.begin(), AMERICAN_DE_PHRASE_1);
	}
