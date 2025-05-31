#include "ft_printf.h"
#include <limits.h>
#include <stdio.h>

void	print_test_header(char *test_name)
{
	printf("\n\n########### %s ###########\n", test_name);
	puts("--------------------------");
}

void	print_return_values(int ft_ret, int og_ret)
{
	printf("ft戻り値: %d\n", ft_ret);
	printf("og戻り値: %d\n", og_ret);
	if (ft_ret != og_ret)
		printf("!!! 戻り値が異なります !!!\n");
	puts("--------------------------");
}

int	main(void)
{
	int		ft_ret;
	int		og_ret;
	int		num;
	char	*str;
	void	*ptr;
	int		*ptr_max;

	// 基本テスト（変換指定子なし）
	print_test_header("変換指定子なし");
	ft_ret = ft_printf("ft_printf: Hello, world!\n");
	og_ret = printf("   printf: Hello, world!\n");
	print_return_values(ft_ret, og_ret);
	ft_ret = ft_printf("ft_printf: 特殊文字: \t \n \\ \'\n");
	og_ret = printf("   printf: 特殊文字: \t \n \\ \'\n");
	print_return_values(ft_ret, og_ret);
	ft_ret = ft_printf("ft_printf: 空文字列: \n");
	og_ret = printf("   printf: 空文字列: \n");
	print_return_values(ft_ret, og_ret);
	// %c テスト（文字）
	print_test_header("%c（文字）");
	ft_ret = ft_printf("ft_printf: %c %c %c\n", 'a', 'Z', '0');
	og_ret = printf("   printf: %c %c %c\n", 'a', 'Z', '0');
	print_return_values(ft_ret, og_ret);
	ft_ret = ft_printf("ft_printf: ASCII範囲外: %c %c\n", 0, 128);
	og_ret = printf("   printf: ASCII範囲外: %c %c\n", 0, 128);
	print_return_values(ft_ret, og_ret);
	ft_ret = ft_printf("ft_printf: 特殊文字: %c %c %c\n", '\n', '\t', '\\');
	og_ret = printf("   printf: 特殊文字: %c %c %c\n", '\n', '\t', '\\');
	print_return_values(ft_ret, og_ret);
	// %s テスト（文字列）
	print_test_header("%s（文字列）");
	ft_ret = ft_printf("ft_printf: %s %s %s\n", "Hello", "42Tokyo", "");
	og_ret = printf("   printf: %s %s %s\n", "Hello", "42Tokyo", "");
	print_return_values(ft_ret, og_ret);
	ft_ret = ft_printf("ft_printf: 特殊文字を含む: %s\n", "Hello\tWorld\n\\");
	og_ret = printf("   printf: 特殊文字を含む: %s\n", "Hello\tWorld\n\\");
	print_return_values(ft_ret, og_ret);
	ft_ret = ft_printf("ft_printf: 長い文字列: %s\n",
			"これは非常に長い文字列です。これは非常に長い文字列です。これは非常に長い文字列です。");
	og_ret = printf("   printf: 長い文字列: %s\n",
			"これは非常に長い文字列です。これは非常に長い文字列です。これは非常に長い文字列です。");
	ft_ret = ft_printf("ft_ printf: %s\n", (char *)NULL);
	og_ret = printf("    printf: %s\n", (char *)NULL);
	print_return_values(ft_ret, og_ret);
	// %p テスト（ポインタ）
	print_test_header("%p（ポインタ）");
	num = 42;
	str = "test";
	ptr = NULL;
	ft_ret = ft_printf("ft_printf: %p %p %p\n", &num, str, ptr);
	og_ret = printf("   printf: %p %p %p\n", &num, str, ptr);
	print_return_values(ft_ret, og_ret);
	ptr_max = (int *)ULONG_MAX;
	ft_ret = ft_printf("ft_printf: 最大値: %p\n", ptr_max);
	og_ret = printf("   printf: 最大値: %p\n", ptr_max);
	print_return_values(ft_ret, og_ret);
	ft_ret = ft_printf("ft_printf: 自分自身: %p\n", &ft_ret);
	og_ret = printf("   printf: 自分自身: %p\n", &og_ret);
	print_return_values(ft_ret, og_ret);
	// %d テスト（10進数）
	print_test_header("%d（10進数）");
	ft_ret = ft_printf("ft_printf: %d %d %d %d\n", 42, -42, 0, INT_MIN);
	og_ret = printf("   printf: %d %d %d %d\n", 42, -42, 0, INT_MIN);
	print_return_values(ft_ret, og_ret);
	ft_ret = ft_printf("ft_printf: INT_MAX: %d\n", INT_MAX);
	og_ret = printf("   printf: INT_MAX: %d\n", INT_MAX);
	print_return_values(ft_ret, og_ret);
	ft_ret = ft_printf("ft_printf: 大きな数: %d %d\n", 123456789, -123456789);
	og_ret = printf("   printf: 大きな数: %d %d\n", 123456789, -123456789);
	print_return_values(ft_ret, og_ret);
	// %i テスト（整数）
	print_test_header("%i（整数）");
	ft_ret = ft_printf("ft_printf: %i %i %i %i\n", 42, -42, 0, INT_MAX);
	og_ret = printf("   printf: %i %i %i %i\n", 42, -42, 0, INT_MAX);
	print_return_values(ft_ret, og_ret);
	ft_ret = ft_printf("ft_printf: INT_MIN: %i\n", INT_MIN);
	og_ret = printf("   printf: INT_MIN: %i\n", INT_MIN);
	print_return_values(ft_ret, og_ret);
	ft_ret = ft_printf("ft_printf: 大きな数: %i %i\n", 987654321, -987654321);
	og_ret = printf("   printf: 大きな数: %i %i\n", 987654321, -987654321);
	print_return_values(ft_ret, og_ret);
	// %u テスト（符号なし整数）
	print_test_header("%u（符号なし整数）");
	ft_ret = ft_printf("ft_printf: %u %u %u\n", 42, 0, UINT_MAX);
	og_ret = printf("   printf: %u %u %u\n", 42, 0, UINT_MAX);
	print_return_values(ft_ret, og_ret);
	ft_ret = ft_printf("ft_printf: 負の数（オーバーフロー）: %u\n", -1);
	og_ret = printf("   printf: 負の数（オーバーフロー）: %u\n", -1);
	print_return_values(ft_ret, og_ret);
	ft_ret = ft_printf("ft_printf: 大きな数: %u\n", 4294967295U);
	og_ret = printf("   printf: 大きな数: %u\n", 4294967295U);
	print_return_values(ft_ret, og_ret);
	// %x テスト（16進数小文字）
	print_test_header("%x（16進数小文字）");
	ft_ret = ft_printf("ft_printf: %x %x %x\n", 42, 0, 255);
	og_ret = printf("   printf: %x %x %x\n", 42, 0, 255);
	print_return_values(ft_ret, og_ret);
	ft_ret = ft_printf("ft_printf: 大きな数: %x\n", 0xABCDEF);
	og_ret = printf("   printf: 大きな数: %x\n", 0xABCDEF);
	print_return_values(ft_ret, og_ret);
	ft_ret = ft_printf("ft_printf: 最大値: %x\n", UINT_MAX);
	og_ret = printf("   printf: 最大値: %x\n", UINT_MAX);
	print_return_values(ft_ret, og_ret);
	ft_ret = ft_printf("ft_printf: 負の数: %x\n", -42);
	og_ret = printf("   printf: 負の数: %x\n", -42);
	print_return_values(ft_ret, og_ret);
	// %X テスト（16進数大文字）
	print_test_header("%X（16進数大文字）");
	ft_ret = ft_printf("ft_printf: %X %X %X\n", 42, 0, 255);
	og_ret = printf("   printf: %X %X %X\n", 42, 0, 255);
	print_return_values(ft_ret, og_ret);
	ft_ret = ft_printf("ft_printf: 大きな数: %X\n", 0xabcdef);
	og_ret = printf("   printf: 大きな数: %X\n", 0xabcdef);
	print_return_values(ft_ret, og_ret);
	ft_ret = ft_printf("ft_printf: 最大値: %X\n", UINT_MAX);
	og_ret = printf("   printf: 最大値: %X\n", UINT_MAX);
	print_return_values(ft_ret, og_ret);
	ft_ret = ft_printf("ft_printf: 負の数: %X\n", -42);
	og_ret = printf("   printf: 負の数: %X\n", -42);
	print_return_values(ft_ret, og_ret);
	// %% テスト（パーセント記号）
	print_test_header("%%（パーセント記号）");
	ft_ret = ft_printf("ft_printf: 100%% %%\n");
	og_ret = printf("   printf: 100%% %%\n");
	print_return_values(ft_ret, og_ret);
	ft_ret = ft_printf("ft_printf: %%%%%%\n");
	og_ret = printf("   printf: %%%%%%\n");
	print_return_values(ft_ret, og_ret);
	// 複合テスト
	print_test_header("複合テスト");
	ft_ret = ft_printf("ft_printf: %c%s%p%d%i%u%x%X%%\n", 'A', "42", &num, 42,
			42, 42, 42, 42);
	og_ret = printf("   printf: %c%s%p%d%i%u%x%X%%\n", 'A', "42", &num, 42, 42,
			42, 42, 42);
	print_return_values(ft_ret, og_ret);
	ft_ret = ft_printf("ft_printf: 入れ子: %s%c%s\n", "Hello ", '4', "2 World");
	og_ret = printf("   printf: 入れ子: %s%c%s\n", "Hello ", '4', "2 World");
	print_return_values(ft_ret, og_ret);
	ft_ret = ft_printf("ft_printf: 変換指定子の連続: %d%d%d%d\n", 1, 2, 3, 4);
	og_ret = printf("   printf: 変換指定子の連続: %d%d%d%d\n", 1, 2, 3, 4);
	print_return_values(ft_ret, og_ret);
	ft_ret = ft_printf("ft_printf: 極端なケース: %s %p %X\n", "", NULL, UINT_MAX);
	og_ret = printf("   printf: 極端なケース: %s %p %X\n", "", NULL, UINT_MAX);
	print_return_values(ft_ret, og_ret);
	return (0);
}