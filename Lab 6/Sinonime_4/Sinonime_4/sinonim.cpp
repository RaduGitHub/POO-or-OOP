#include"sinonim.h"

sinonim::sinonim() {
	
}

void sinonim::adaug_sinonim(string sin) {
	sinonime.push_back(sin);
	sinonime.sort();
}

void sinonim::afisare_sinonime() {
	list<string>::iterator it;
	for (it = sinonime.begin(); it != sinonime.end(); it++) {
		cout << *it<<" ";
	}
}

//void sinonim::adaug_sinonim(string sin) {
//	list *temp;
//	temp->sinonimul = sin;
//	temp->next = nullptr;
//	if (head == nullptr) {
//		head = temp;
//		tail = temp;
//		temp = nullptr;
//	}
//	else {
//		tail->next = temp;
//		tail = temp;
//	}
//
//
//}