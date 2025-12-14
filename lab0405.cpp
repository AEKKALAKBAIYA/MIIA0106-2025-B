#include <iostream>
#include <string>
#include <windows.h> 

using namespace std;

void showAction(string action) {
    cout << "--------------------------------" << endl;
    cout << ">> หุ่นยนต์กำลัง: " << action << endl;
    cout << "--------------------------------" << endl;
}

int main() {
    
    SetConsoleOutputCP(65001);

    int sensorLeft, sensorRight;

    cout << "=== โปรแกรมจำลอง Robot Line Follower ===" << endl;
    cout << "กรุณาป้อนค่าสถานะเซนเซอร์ (0 = ขาว/ไม่เจอเส้น, 1 = ดำ/เจอเส้น)" << endl;
    cout << "กด Ctrl+C เพื่อออกจากโปรแกรม" << endl << endl;

    while (true) {
        cout << "\nระบุค่า Sensor ซ้าย (0 หรือ 1): ";
        cin >> sensorLeft;

        cout << "ระบุค่า Sensor ขวา (0 หรือ 1): ";
        cin >> sensorRight;

        
        if (sensorLeft == 1 && sensorRight == 1) {
            showAction("หยุด (Stop) - เจอเส้นตัดขวาง");
        }
        else if (sensorLeft == 1 && sensorRight == 0) {
            showAction("เลี้ยวซ้าย (Turn Left)");
        }
        else if (sensorLeft == 0 && sensorRight == 1) {
            showAction("เลี้ยวขวา (Turn Right)");
        }
        else if (sensorLeft == 0 && sensorRight == 0) {
            showAction("เดินหน้า (Forward)");
        }
        else {
            cout << ">> Error: กรุณากรอกเพียงเลข 0 หรือ 1 เท่านั้น" << endl;
        }
    }

    return 0;
}