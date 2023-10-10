#include <iostream>

using namespace std;
struct Student{
    int id, semester_completed, credit_completed;
    float cgpa;
};
int main()
{
    Student s[10];
    s[0].id = 11111;
    s[0].semester_completed = 8;
    s[0].credit_completed = 96;
    s[0].cgpa = 3.12;

    s[1].id=22222;
    s[1].semester_completed=11;
    s[1].credit_completed=118;
    s[1].cgpa=3.58;

    s[2].id=33333;
    s[2].semester_completed=5;
    s[2].credit_completed=56;
    s[2].cgpa=3.08;

    s[3].id=44444;
    s[3].semester_completed=2;
    s[3].credit_completed=25;
    s[3].cgpa=3.78;

    s[4].id=55555;
    s[4].semester_completed=5;
    s[4].credit_completed=60;
    s[4].cgpa=3.12;

    s[5].id=66666;
    s[5].semester_completed=4;
    s[5].credit_completed=104;
    s[5].cgpa=3.12;

    s[6].id=77777;
    s[6].semester_completed=11;
    s[6].credit_completed=118;
    s[6].cgpa=3.58;

    s[7].id=88888;
    s[7].semester_completed=5;
    s[7].credit_completed=56;
    s[7].cgpa=3.08;

    s[8].id=99999;
    s[8].semester_completed=2;
    s[8].credit_completed=25;
    s[8].cgpa=3.78;

    s[9].id=10000;
    s[9].semester_completed=5;
    s[9].credit_completed=60;
    s[9].cgpa=3.12;

    for (int i = 0; i < 10; i++)
        {
            if (s[i].cgpa >= 3.75)
            {
            cout << "Student ID with CGPA 3.75 or Above: " << s[i].id << endl;
            }
        }
    cout << "Scholarship Student : " << endl;
    for (int i = 0; i < 10; i++)
        {
            if (s[i].credit_completed > 50)
            {
                cout << "Student ID who completed 50 credit or more: " << s[i].id << endl;
            }
        }
        cout << "Students who completed 2 semesters and 28 credits  :" << endl;
    for (int i = 0; i < 10; i++)
        {
            if (s[i].semester_completed >= 2 && s[i].credit_completed >= 28)
                {
                    cout << "Student ID: " << s[i].id << endl;
                }
        }



    return 0;
}
