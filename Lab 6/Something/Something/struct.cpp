#include "struct.h"

void numar::add_num(int val) {
	node *temp = new node;
	temp->val = val;
	temp->next = nullptr;
	if (head == nullptr) {
		head = temp;
		tail = temp;
		temp = nullptr;
	}
	else {
		tail->next = temp;
		tail = temp;
	}

	//delete temp;
}

void numar::afisare() {
	node *temp = new node;
	temp = head;
	while (temp != tail) {
		cout << temp->val << "\t";
		temp = temp->next;
	}
	cout << temp->val;
}

void numar::sterge(int val) {
	node *curent = new node;
	node *anterior = new node;

	curent = head;
	anterior = head;

	bool ok = false;
	int ajutor = 0;

	while (curent->next != tail) {
		if (curent->val != val) {
			anterior = curent;
			curent = curent->next;
			ajutor++;
		}
		else {
			break;
		}
	}
	if (ajutor == 0 && curent->val == val) {
		anterior = head;
		head = head->next;
		delete anterior;
	}else if (curent->val == val) {
		anterior->next = curent->next;
		delete curent;
	}else if (curent->next->val == val) {
		tail = curent;
		curent = curent->next;
		delete curent;
	}
}

void numar::eliminare(int val) {
	node *curent = new node;
	node *anterior = new node;

	curent = head;
	anterior = head;

	bool ok = false;
	int ajutor = 0;

	while (curent != tail) {
		if (curent->val < val && ajutor == 0) {
			anterior = head;
			head = head->next;
			curent = head;
			delete anterior;
		}
		else if (curent->val < val && ajutor != 0) {
			anterior->next = curent->next;
			delete curent;
			curent = anterior->next;
		}
		else {
			anterior = curent;
			curent = curent->next;
			ajutor++;
		}

	}
	if (curent->val < val) {
		tail = anterior;
		delete curent;
	}
}

float numar::medie() {
	node *temp = new node;

	temp = head;

	float suma = 0, nr = 0;

	while (temp != tail) {
		suma = temp->val + suma;
		nr++;
		temp = temp->next;
	}
	suma = temp->val + suma;
	nr++;
	return suma / nr;

}