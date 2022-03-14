#include "main.h"
#include "allRole.h"
#include "finalization.h"
#include "initialization.h"
#include "lecturer.h"
#include "staff.h"
#include "student.h"

void inpLecturers(Lecturers* &lec_head){
    string tmp;
    cin>> tmp;
    Lecturers* lec_cur;
    while (tmp!= ""){
        if (lec_head == nullptr){
            lec_head = new Lecturers;
            lec_cur = lec_head;
        }
        else {
            lec_cur->next = new Lecturers;
            lec_cur = lec_cur->next;
        }
        //inpAccounts(lec_cur->account);
        lec_cur->account->uName = tmp;
        cin>>lec_cur->account->pwd;
        cin>>lec_cur->account->role;
        cin>>lec_cur->account->socialID;
        getline(cin,lec_cur->account->lastname,'\n');
        getline(cin,lec_cur->account->firstname,'\n');
        cin >> lec_cur->account->gender;
        //input date
        //cin>>lec_cur->account->doB->day>> lec_cur->account->doB->month >> lec_cur->account->doB->year;
    }
}