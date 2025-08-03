#include <stdio.h>
#include <time.h>
#include <string.h>
#include "utils.h"

void logError(const char* message) {
    FILE* log = NULL;
    errno_t err = fopen_s(&log, "runtime.log", "a");
    if (err != 0 || log == NULL) {
        return;  // Ошибка открытия
    }

    time_t now = time(NULL);
    char timestamp[26];
    ctime_s(timestamp, sizeof(timestamp), &now);
    timestamp[strcspn(timestamp, "\n")] = 0;

    fprintf(log, "[%s] %s\n", timestamp, message);
    fclose(log);
}
