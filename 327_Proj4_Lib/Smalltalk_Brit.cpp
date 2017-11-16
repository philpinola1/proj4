#include "./includes/Smalltalk_Brit.h"
#include "./includes/constants.h"

	Smalltalk_Brit::Smalltalk_Brit(int iPerson):Smalltalk::Smalltalk(BRIT, iPerson) {
		this->pWatch = 0;
		Smalltalk_Brit::populatePhrases();
	}

	Smalltalk_Brit::~Smalltalk_Brit(void) {
		if (pWatch) {
			pWatch = 0;
		}
	}

	void Smalltalk_Brit::populatePhrases() {

		mySmallTalk.push_back(BRIT_1);
		mySmallTalk.push_back(BRIT_2);
		mySmallTalk.push_back(BRIT_3);
		mySmallTalk.push_back(BRIT_4);
		mySmallTalk.push_back(BRIT_5);
		mySmallTalk.push_back(BRIT_6);
		mySmallTalk.push_back(BRIT_7);

//		switch (iPerson%7) {
//					case 1:
//						mySmallTalk.push_back(BRIT_1);
//						break;
//
//					case 2:
//						mySmallTalk.push_back(BRIT_2);
//						break;
//
//					case 3:
//						mySmallTalk.push_back(BRIT_3);
//						break;
//
//					case 4:
//						mySmallTalk.push_back(BRIT_4);
//						break;
//
//					case 5:
//						mySmallTalk.push_back(BRIT_5);
//						break;
//
//					case 6:
//						mySmallTalk.push_back(BRIT_6);
//						break;
//
//					case 0:
//						mySmallTalk.push_back(BRIT_7);
//						break;
//				}
	}
