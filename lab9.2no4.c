#include <stdio.h>
#include <string.h> 
#include <ctype.h> 

int checkLogin(char *login, char *passwd);
int checkValidPass(char *ps);

int main() {
    char login[64], password[64];
    printf("Enter login : "); gets(login);
    printf("Enter password : "); gets(password);

    if (checkLogin(login, password) == 1) {
        printf("Welcome\n");
    } else {
        printf("Incorrect login or password\n");
    }

    // แก้ไข: ใส่วงเล็บครอบเงื่อนไข และจัดวาง else ให้ถูกต้อง
    if (checkValidPass(password)) {
        printf("Accepted\n");
    } else {
        printf("Reject\n");
    }

    return 0;
}

int checkValidPass(char *ps) {
    int len = strlen(ps),i;
    int Accepted = 0;

    // เงื่อนไขที่ 1: ความยาวต้องเท่ากับ 5
    if (len != 5) {
        return 0; 
    }

    // เงื่อนไขที่ 2: ต้องมีตัวเลขอย่างน้อย 1 ตัว
    for (i = 0; i < len; i++) {
        if (isdigit(ps[i])) {
            Accepted = 1;
            break; 
        }
    }
    return Accepted;
}

int checkLogin(char *login, char *passwd) {
    // strcmp คืนค่า 0 เมื่อข้อความเหมือนกัน การใส่ ! จึงหมายถึง "ถ้าเหมือนกัน"
    if (!strcmp(login, "student1") && !strcmp(passwd, "mypass"))
        return 1;
    else
        return 0;
}
