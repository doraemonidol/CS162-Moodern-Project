#include "main.h"
#include "allRole.h"
#include "finalization.h"
#include "initialization.h"
#include "staff.h"
#include "student.h"
#pragma warning(disable : 4996)

int main() {
    AcademicYears* yearList = nullptr;
    Students* studentList = nullptr;
    Staffs* staffList = nullptr;
    Accounts* accountList = nullptr;

    initData(yearList, studentList, staffList, accountList);
	return 0;
}