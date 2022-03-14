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

void inpScoreboards(Scoreboards *& Board){
    Scoreboards* cur;
    int n;
    cin >> n;
    while (n--){
        if (!Board){
            Board = new Scoreboards;
            cur = Board;
        }
        else{
            cur->next = new Scoreboards;
            cur = cur->next;
        }
        cin >> cur->courseName >> cur->courseID >> cur->midtermScore >> cur->finalScore >> cur->labScore >> cur->bonusScore;
    }
}
void outScorebards(Scoreboards *& Board){
    int n = 0;
    Scoreboards* cur = Board;
    while (cur){
        n++;
        cur = cur->next;
    }
    cout << n << '\n';
    while (Board){
        cout << cur->courseName << " " << cur->courseID << " " << cur->midtermScore << " "<< cur->finalScore << " "<< cur->labScore<< " "<< cur->bonusScore << " ";
        Board = Board->next;
    }
}

void inpStaffs(Staffs *& St){
    Staffs* cur;
    int n;
    cin >> n;
    while (n--){
        if (!St){
            St = new Staffs;
            cur = St; 
        }
        else{
            cur->next = new Staffs;
            cur = cur->next;
        }
        inpAccounts(cur->account);
    }
}
void outStaffs(Staffs *& St){
    Staffs* cur = St;
    int n = 0;
    while (cur){
        n++;
        cur = cur->next;
    }
    cout << n << '\n';
    while(St){
        outAccounts(St->account);
        St = St->next;
    }
}