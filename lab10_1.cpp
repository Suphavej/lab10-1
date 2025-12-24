#include <iostream>
#include <string>

using namespace std;

int main() {
    char grade;
    int countA = 0, countB = 0, countC = 0, countD = 0, countF = 0;
    int totalStudents = 0;
    int studentNum = 1;

    cout << "Please input grade of each student (A-F) or input 0 to exit." << endl;

    while (true) {
        cout << "Student [" << studentNum << "]: ";
        cin >> grade;

        if (grade == '0') {
            break; // ออกจาก loop เมื่อกด 0
        }

        switch (grade) {
            case 'A': case 'a':
                countA++;
                totalStudents++;
                studentNum++;
                break;
            case 'B': case 'b':
                countB++;
                totalStudents++;
                studentNum++;
                break;
            case 'C': case 'c':
                countC++;
                totalStudents++;
                studentNum++;
                break;
            case 'D': case 'd':
                countD++;
                totalStudents++;
                studentNum++;
                break;
            case 'F': case 'f':
                countF++;
                totalStudents++;
                studentNum++;
                break;
            default:
                cout << "Wrong input. Please input again." << endl;
                // ไม่เพิ่ม studentNum เพราะเป็นการกรอกผิด
                break;
        }
    }

    // ส่วนการแสดงผลสรุป
    cout << "In total " << totalStudents << " students." << endl;
    cout << "A = " << countA << ", B = " << countB << ", C = " << countC 
         << ", D = " << countD << ", F = " << countF << endl;

    return 0;
}