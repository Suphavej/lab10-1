#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <fstream> // เติมเพื่อใช้ ifstream
#include <cstdlib> // หรือใช้ string เพื่อรองรับการแปลงค่า (atof)

using namespace std;

int main()
{
        int count = 0;
        float sum = 0;
        float sum_of_square = 0;
        string textline;
        ifstream source("score.txt"); // เปิดไฟล์ชื่อ score.txt
        while (getline(source, textline)) // อ่านไฟล์ทีละบรรทัด
        {
                sum += atof(textline.c_str()); // แปลง string เป็น float แล้วบวกสะสม
                sum_of_square += pow(atof(textline.c_str()), 2); // บวกค่ากำลังสองสะสม
                count++;
        }
        cout << "Number of data = " << count << "\n";
        cout << setprecision(3);
        
        float mean = sum / count;
        cout << "Mean = " << mean << "\n";
        
        // สูตร SD: sqrt((sum_of_square / count) - (mean * mean))
        cout << "Standard deviation = " << sqrt((sum_of_square / count) - pow(mean, 2));
        
        return 0;
}