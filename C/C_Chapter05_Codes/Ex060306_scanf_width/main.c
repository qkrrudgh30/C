#include <stdio.h>

int main(void)
{
    int num1, num2;

    scanf("%d %d", &num1, &num2);    /* 123456789 987654321 입력 */
    printf("%d %d\n", num1, num2);   /* 123456789 987654321 출력 */

    /* 너비를 지정 후에 여러 데이터를 한 번에 읽을 경우 아래와 같은 문제가 발생합니다. */
    scanf("%3d %3d", &num1, &num2);  /* 123456789 987654321 입력 */
    printf("%d %d\n", num1, num2);   /* 123 456 출력 */

    scanf("%3d %3d", &num1, &num2);  /* 건너 뜀. 아직 버퍼에 남아 있는 것을 변수에 저장. */
    printf("%d %d\n", num1, num2);   /* 789 987 출력 */

    return 0;
}

