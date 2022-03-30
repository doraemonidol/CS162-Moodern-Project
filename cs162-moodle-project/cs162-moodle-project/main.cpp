#include "main.h"
#include "allRole.h"
#include "finalization.h"
#include "initialization.h"
#include "loginScreen.h"
#include "staff.h"
#include "student.h"
#pragma warning(disable : 4996)

[STAThreadAttribute] void main() {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    do {
        AcademicYears* yearList = nullptr;
        Students* studentList = nullptr;
        Staffs* staffList = nullptr;
        Accounts* accountList = nullptr;

        initData(yearList, studentList, staffList, accountList);
        CS162MoodleProject::loginScreen form;
        CS162MoodleProject::functionScreen form1;
        form.getData(yearList, studentList, staffList, accountList);
        Application::Run(% form);
        if (!form.Exit) {
            form1.getData(yearList, studentList, staffList, accountList, form.cur_account);
            form1.setRole(form.Role);
            Application::Run(% form1);
        }
        unloadData(yearList, studentList, staffList);
        if (form.Exit || form1.Exit1)
            break;
    } while (true);
    /* 

    int status;
    Login(accountList, status);
    //addSchoolYear(yearList);
    //addSemester(yearList->semesters);
    //CSVToScoreboard(yearList->semesters->courses->findCourseByID("PH212"));
    //viewCourseScoreboards(yearList->semesters->courses->findCourseByID("PH212"));
    */
    //system("pause");
}