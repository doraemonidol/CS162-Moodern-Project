#include "main.h"
#include "allRole.h"
#include "finalization.h"
#include "initialization.h"
#include "lecturer.h"
#include "staff.h"
#include "student.h"
void inpDate(Date& d) {
	cin >> d.day >> d.month >> d.year;
}
void inpAccounts(Accounts*& acc) {
	int n;
	cin >> n;
	Accounts* cur;
	while (n--) {
		if (!acc) {
			acc = new Accounts;
			cur = acc;
		}
		else {
			cur->next = new Accounts;
			cur = cur->next;
		}
		cin >> cur->pwd >> cur->uName >> cur->role >> cur->socialID >> cur->lastname >> cur->firstname >> cur->gender;
		inpDate(cur->doB);
	}
}