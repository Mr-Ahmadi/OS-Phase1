#include "types.h"
#include "riscv.h"
#include "custom_logger.h"
#include "defs.h"
void log_message(int level, const char *message) {
    switch (level)
    {
    case 2:
        printf("WARNING - ");
        break;
    case 3:
        printf("ERROR - ");
        break;
    default:
        printf("INFO - ");
        break;
    }

    printf("Log: %s\n", message);
}