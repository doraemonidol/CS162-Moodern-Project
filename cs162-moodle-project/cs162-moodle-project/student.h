#pragma once
void studentEnrollment(Students* student, Courses* courseList, Date curDate);

bool cmpDate(Date left, Date right, Date middle);

bool deleteEnrolledCourse(Students*& student, string courseID, Date curday);