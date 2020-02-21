//
// Created by invin on 2020-02-21.
//
/*
 * ����ü(Structure)
 * 1) ����ü�� Ȱ���Ͽ� Ŀ���� �ڷ����� �����.
 *    - ���� ���� ������ ���� �ϳ��� ��ü�� ǥ���ϰ��� �� �� ����ü�� ���
 *    - struct ����ü�� {
 *        �ڷ���1 ������1;
 *        �ڷ���2 ������2;
 *        ...
 *      }
 * 2) �ɸ���, ����, �л�, ��ǥ �� �پ��� ��ü���� ǥ���� �� �ִ�.
 */
#include <stdio.h>
#include <string.h>

// 1) �ϳ��� ����ü ������ ����ϴ� ��� ���ǿ� ���ÿ� ������ ���� �ִ�.
// 2) �� ��� ������ ���� ������ ���ȴ�.
struct Student { // �л� ����ü ���� �� ����
    char studentId[20];
    char name[20];
    int grade;
    char major[51];
} s;

int main(void) {
    // �⺻������ ����ü�� ������ ������ ���� ����(.)�� ����Ѵ�.
    struct Student s = { "2007231115", "Jaeyoung Lee", 4, "Economy" };

    // ����ü ���� ���
    printf("ID : %s\n", s.studentId);
    printf("Name : %s\n", s.name);
    printf("Grade : %d\n", s.grade);
    printf("Major : %s\n", s.major);
    return 0;
}