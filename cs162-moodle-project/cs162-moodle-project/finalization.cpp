#include "main.h"
#include "allRole.h"
#include "finalization.h"
#include "initialization.h"
#include "lecturer.h"
#include "staff.h"
#include "student.h"
void outDate(Date& d) {
	cout << d.day << ' ' << d.month << ' ' << d.year << '\n';
}
void outAccounts(Accounts*& acc) {
	int n = 0;
	Accounts* tmp = acc;
	//elements count
	while (tmp) {
		n++;
		tmp = tmp->next;
	}
	cout << n << '\n';
	while (acc) {
		cout << acc->pwd << ' ' << acc->uName << ' ' << acc->role << ' ' << acc->socialID << ' ' << acc->lastname << ' ' << acc->firstname << ' ' << acc->gender << ' ';
		outDate(acc->doB);
		Accounts* erase = acc;
		acc = acc->next;
		delete erase;
	}
}

void outScoreboards(Scoreboards*& Board){
    int n = 0;
    Scoreboards* cur = Board;
    while (cur){
        n++;
        cur = cur->next;
    }
    cout << n << '\n';
    while (Board){
        cout << Board->courseName << " " << Board->courseID << " " << Board->midtermScore << " "<< Board->finalScore << " "<< Board->labScore<< " "<< Board->bonusScore << " ";
		Scoreboards* del = Board;
        Board = Board->next;
		delete del;
    }
}

void outStaffs(Staffs*& St){
    Staffs* cur = St;
    int n = 0;
    while (cur){
        n++;
        cur = cur->next;
    }
    cout << n << '\n';
    while(St){
        outAccounts(St->account);
		Staffs* del = St;
        St = St->next;
		delete del;
    }
}