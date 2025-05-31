#include <stdio.h>
#include <limits.h>
#include <stdint.h>
#include "ft_printf.h"

static void  header(const char *title)
{
    printf("\n==== %s ====""\n", title);
}

int main(void)
{
    /*──────────────────────────────────────────────*/
    /* %c                                            */
    /*──────────────────────────────────────────────*/
    header("%c (char)");
    int ret1 = ft_printf("ft : |%c|\n", 'A');
    int ret2 = printf   ("std: |%c|\n", 'A');
    printf("ret ft=%d, std=%d\n", ret1, ret2);

    ret1 = ft_printf("ft : |%c|\n", 0);
    ret2 = printf   ("std: |%c|\n", 0);
    printf("ret ft=%d, std=%d\n", ret1, ret2);

    /*──────────────────────────────────────────────*/
    /* %s                                            */
    /*──────────────────────────────────────────────*/
    header("%s (string)");
    char *str = "Hello, world!";
    ret1 = ft_printf("ft : |%s|\n", str);
    ret2 = printf   ("std: |%s|\n", str);
    printf("ret ft=%d, std=%d\n", ret1, ret2);

    ret1 = ft_printf("ft : |%s|\n", "");
    ret2 = printf   ("std: |%s|\n", "");
    printf("ret ft=%d, std=%d\n", ret1, ret2);

    char *nullstr = NULL;
    ret1 = ft_printf("cus: |%s|\n", nullstr);
    ret2 = printf  ("std: |%s|\n", nullstr);
    printf("ret ft=%d, std=%d\n", ret1, ret2);

    /*──────────────────────────────────────────────*/
    /* %p                                            */
    /*──────────────────────────────────────────────*/
    header("%p (pointer)");
    int  var = 42;
    ret1 = ft_printf("ft : |%p|\n", &var);
    ret2 = printf   ("std: |%p|\n", &var);
    printf("ret ft=%d, std=%d\n", ret1, ret2);

    ret1 = ft_printf("ft : |%p|\n", (void *)0);
    ret2 = printf   ("std: |%p|\n", (void *)0);
    printf("ret ft=%d, std=%d\n", ret1, ret2);

    /*──────────────────────────────────────────────*/
    /* %d / %i                                       */
    /*──────────────────────────────────────────────*/
    header("%d / %i (signed int)");
    ret1 = ft_printf("ft : |%d| |%i| |%d| |%d| |%d|\n", 0, 0, 42, INT_MAX, INT_MIN);
    ret2 = printf   ("std: |%d| |%i| |%d| |%d| |%d|\n", 0, 0, 42, INT_MAX, INT_MIN);
    printf("ret ft=%d, std=%d\n", ret1, ret2);

    /*──────────────────────────────────────────────*/
    /* %u                                            */
    /*──────────────────────────────────────────────*/
    header("%u (unsigned int)");
    ret1 = ft_printf("ft : |%u| |%u| |%u|\n", 0u, 1u, UINT_MAX);
    ret2 = printf   ("std: |%u| |%u| |%u|\n", 0u, 1u, UINT_MAX);
    printf("ret ft=%d, std=%d\n", ret1, ret2);

    /*──────────────────────────────────────────────*/
    /* %x / %X                                       */
    /*──────────────────────────────────────────────*/
    header("%x / %X (hexadecimal)");
    ret1 = ft_printf("ft : |%x| |%x| |%x| |%X|\n", 0u, 255u, UINT_MAX, UINT_MAX);
    ret2 = printf   ("std: |%x| |%x| |%x| |%X|\n", 0u, 255u, UINT_MAX, UINT_MAX);
    printf("ret ft=%d, std=%d\n", ret1, ret2);

    /*──────────────────────────────────────────────*/
    /* %%                                            */
    /*──────────────────────────────────────────────*/
    header("%% (percent)");
    ret1 = ft_printf("ft : |%%|\n");
    ret2 = printf   ("std: |%%|\n");
    printf("ret ft=%d, std=%d\n", ret1, ret2);

    /*──────────────────────────────────────────────*/
    /* Composite                                     */
    /*──────────────────────────────────────────────*/
    header("Composite format");
    ret1 = ft_printf("ft : [mix] %c %s %p %d %u %x %X %%\n", 'Z', "mix", &var, -123, 123u, 0xdeadbeef, 0xdeadbeef);
    ret2 = printf   ("std: [mix] %c %s %p %d %u %x %X %%\n", 'Z', "mix", &var, -123, 123u, 0xdeadbeef, 0xdeadbeef);
    printf("ret ft=%d, std=%d\n", ret1, ret2);

    printf("\nAll mandatory cases executed. Compare outputs above to validate.\n");
    return (0);
}
