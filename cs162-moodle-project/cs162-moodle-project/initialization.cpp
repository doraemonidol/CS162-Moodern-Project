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
	Accounts* cur = nullptr;
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

void inpScoreboards(Scoreboards*& Board){
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

void inpStaffs(Staffs*& St){
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
