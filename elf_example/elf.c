#include "util.h"

//typedef void (*func_type)();

#if 0
void dynload_elf()
{
    int a, b, max;
    void *val;
    func_type ptr;

    a = 0x60;
    b = 0x1;
    max = dynload_max(a, b);
    val = (void *)max;
    ptr = (func_type)(0x001bd800 + val);

    ptr("hehe%s<%d>\r\n", __func__, __LINE__);
    ptr("xixi%s<%d>\r\n", __func__, __LINE__);

    ptr("g_http_download_task <0x%8X>, value = 0x%8X\r\n", &g_http_download_task, g_http_download_task);
    if (g_http_download_task != -1) {
        ptr("Task already running\r\n");
    } else {
        ptr("Task generated...\r\n");
    }

    return;
}
#endif

char global_var[1<<20];

void dynload_entry()
{
//    func_type ptr;
    int a, b, max;

    a = 0x60;
    b = 0x1;
    max = dlmax(a, b);

//    ptr = (func_type)(0x001bd860);
//    ptr("max = %d\r\n", max);
    printk("max = %d\r\n", max);

    return;
}

void dynload_exit()
{
//    func_type ptr;

//    ptr = (func_type)(0x001bd860);

//    ptr("Exit...\r\n");
    printk("Exit...\r\n");

    return;
}
