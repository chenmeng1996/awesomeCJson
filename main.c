#include <stdio.h>
#include "include/cJSON.h"

/*
 * refer: https://blog.csdn.net/fengxinlinux/article/details/53121287
 */
int main() {
    cJSON *usr;
    cJSON *array;

    usr = cJSON_CreateObject();
    cJSON_AddStringToObject(usr, "name", "cm");
    cJSON_AddStringToObject(usr, "password", "123");
    cJSON_AddNumberToObject(usr, "num", 1);

    char *out = cJSON_Print(usr);
    printf("%s\n", out);

    // 释放内存
    cJSON_Delete(usr);

    return 0;
}
