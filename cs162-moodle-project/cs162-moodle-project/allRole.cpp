#include "main.h"
#include "allRole.h"
#include "finalization.h"
#include "initialization.h"
#include "lecturer.h"
#include "staff.h"
#include "student.h"

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