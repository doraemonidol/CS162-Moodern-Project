#include "main.h"
#include "allRole.h"
#include "finalization.h"
#include "initialization.h"
#include "lecturer.h"
#include "staff.h"
#include "student.h"
void viewDate(Date d) {
	if (d.day.size() != 2) cout << 0;
	cout << d.day << '/';
	if (d.month.size() != 2) cout << 0;
	cout << d.month << '/';
	cout << d.year << '\n';
}
void viewClass(Classes* cl) {

}
void viewAccounts(Accounts* acc) {
	cout << "Main Profile\n";
	cout << "Username: " << acc->uName<<'\n';
	cout << "Role: ";
	switch (acc->role) {

	}
	cout << '\n';
	cout << "Last name: " << acc->lastname << '\n';
	cout << "First name: " << acc->firstname << '\n';
	if (acc->gender != 'O') {
		cout << "Gender: ";
		if (acc->gender == 'F') cout << "Female\n";
		else cout << "Male\n";
	}
	cout << "Day of birth: ";
	viewDate(acc->doB);
}

void inpScoreboards(Scoreboards *& pHead){
    Scoreboards* cur;
    int n;
    cin >> n;
    while (n--){
        if (!pHead){
            pHead = new Scoreboards;
            cur = pHead;
        }
        else{
            cur->next = new Scoreboards;
            cur = cur->next;
        }
        cin >> cur->courseName >> cur->courseID >> cur->midtermScore >> cur->finalScore >> cur->labScore >> cur->bonusScore;
    }
}
void outScorebards(Scoreboards *& pHead){
    int n = 0;
    Scoreboards* cur = pHead;
    while (cur){
        n++;
        cur = cur->next;
    }
    cout << n << '\n';
    while (pHead){
        cout << cur->courseName << " " << cur->courseID << " " << cur->midtermScore << " "<< cur->finalScore << " "<< cur->labScore<< " "<< cur->bonusScore << " ";
        pHead = pHead->next;
    }
}
