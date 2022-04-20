#pragma comment(lib, "user32.lib")
#include "main.h"
#include "allRole.h"
#include "finalization.h"
#include "initialization.h"
#include "loginScreen.h"
#include "staff.h"
#include "student.h"
#pragma warning(disable : 4996)
//const HWND hWnd = GetConsoleWindow();

[System::STAThreadAttribute] void main() {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    setWindowSize(95, 30);
    AcademicYears* yearList = nullptr;
    Students* studentList = nullptr;
    Staffs* staffList = nullptr;
    Accounts* accountList = nullptr;
    do {
        CS162MoodleProject::loginScreen form;
        CS162MoodleProject::functionScreen form1;
        system("cls");
        initData(yearList, studentList, staffList, accountList);
        //FreeConsole();
        ShowWindow(GetConsoleWindow(), SW_HIDE);
        form.getData(yearList, studentList, staffList, accountList);
        Application::Run(% form);

        if (form.cur_account != nullptr && form.cur_account->uName == "admin") {

            ShowWindow(GetConsoleWindow(), SW_SHOW);
            SetForegroundWindow(GetConsoleWindow());

            system("cls");
            cin.clear();
            int i = 1;
            printCenteredText( R"(   _   ___  __  __ ___ _  _ ___ ___ _____ ___    _ _____ ___  ___ )", i); i++;
            printCenteredText( R"(  /_\ |   \|  \/  |_ _| \| |_ _/ __|_   _| _ \  /_\_   _/ _ \| _ \)", i); i++;
            printCenteredText( R"( / _ \| |) | |\/| || || .` || |\__ \ | | |   / / _ \| || (_) |   /)", i); i++;
            printCenteredText( R"(/_/ \_\___/|_|  |_|___|_|\_|___|___/ |_| |_|_\/_/ \_\_| \___/|_|_\)", i); i++;
            printCenteredText( R"( ___ ___ ___ ___ ___ ___  _  _ )", i); i++;
            printCenteredText( R"(/ __| __/ __/ __|_ _/ _ \| \| |)", i); i++;
            printCenteredText( R"(\__ \ _|\__ \__ \| | (_) | .` |)", i); i++;
            printCenteredText( R"(|___/___|___/___/___\___/|_|\_|)", i); i++;

            cout << "\n\nNumber of new staffs: ";
            cin.clear();
            int n;
            cin >> n;
            Accounts* curacc;
            for (int i = 0; i < n; i++) {
                cout << "----------Staff " << i << "----------\n";
                curacc = new Accounts;
                cout << "  + Username: ";
                cin >> curacc->uName;
                cout << "  + Password: 123456 (default)\n";
                cout << "  + First name: ";
                cin >> curacc->firstname;
                cout << "  + Last name: ";
                cin.get();
                getline(cin, curacc->lastname);
                cout << "  + Gender (M: Male | F: Female | O: Prefer not to say): ";
                cin >> curacc->gender;
                curacc->gender = toupper(curacc->gender);
                cout << "  + Social ID: ";
                cin >> curacc->socialID;
                cout << "  + Date of birth (<day> <month> <year>): ";
                cin >> curacc->doB.day >> curacc->doB.month >> curacc->doB.year;
                curacc->role = 1;
                curacc->pwd = "123456";
                Staffs* newStaff = new Staffs;
                newStaff->account = curacc;
                newStaff->next = staffList;
                staffList = newStaff;
            }
            system("pause");
            unloadData(yearList, studentList, staffList);
            continue;
        }

        if (!form.Exit) {
            form1.getData(yearList, studentList, staffList, accountList, form.cur_account);
            form1.setRole(form.Role);
            Application::Run(% form1);
            form1.returnData(yearList, studentList, staffList, accountList);

            ShowWindow(GetConsoleWindow(), SW_SHOW);
            system("cls");
            unloadData(yearList, studentList, staffList);
        }
        if (form.Exit || form1.Exit1)
            break;

    } while (true);
}

int getWindowWidth()
{
    HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_SCREEN_BUFFER_INFO csbf;
    GetConsoleScreenBufferInfo(hOut, &csbf);
    return csbf.dwSize.X;
}

void setConsoleCursorPosition(const short& x, const short& y)
{
    COORD pos { x, y };
    HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleCursorPosition(hOut, pos);
}

int getStartPositionOfACenteredText(const int& textSize)
{
    return (getWindowWidth() - textSize) / 2;
}

int printCenteredText(const std::string& text, const int& coordY)
{
    int coordX = getStartPositionOfACenteredText(text.size());
    setConsoleCursorPosition(coordX, coordY);
    std::cout << text;
    return coordX;
}

void setWindowSize(const short& width, const short& height)
{
    COORD pos { width, height };
    SMALL_RECT rect;
    HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);

    rect = { 0, 0, (short)(width - 1), (short)(height - 1) };
    SetConsoleWindowInfo(hOut, TRUE, &rect);
    SetConsoleScreenBufferSize(hOut, pos);
    SetConsoleActiveScreenBuffer(hOut);
}