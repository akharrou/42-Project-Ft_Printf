/**
 *
 * TEST MAIN
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <float.h>
#include <math.h>
#include <unistd.h>

#include "ft_printf.h"

// #include "ft_printf.c"
// #include "parser.c"
// #include "formatter.c"

// #include "Handlers/b_handler.c"
// #include "Handlers/c_handler.c"
// #include "Handlers/d_handler.c"
// #include "Handlers/f_handler.c"
// #include "Handlers/i_handler.c"
// #include "Handlers/mod_handler.c"
// #include "Handlers/o_handler.c"
// #include "Handlers/xx_handler.c"
// #include "Handlers/X__handler.c"
// #include "Handlers/p_handler.c"
// #include "Handlers/r_handler.c"
// #include "Handlers/s_handler.c"

int		main(int ac, char *av[])
{
	// if (ac < 2)
	// {
	// 	printf("Usage: ./a format ...\n");
	// 	return (1);
	// }

	// ft_putnbr(ft_printf("%s\n"));
	// ft_putnbr(ft_printf("%rmncds%dyhsd%mq%%wd\n", 4));

	// printf("%.0f\n", 283.0);
	// printf("%.1i\n", 2);

	// ft_printf("Hello world! This is Johnathan !\n");

	// ft_printf("Hello world! This is %Johnathan !\n");

	// ft_printf("%-#20.5hhs"); // [√]
	// ft_printf("%+042Lp"); // [√]
	// ft_printf("% -85lX"); // [√]
	// ft_printf("%+#0000#20.5hu"); // [√]
	// ft_printf("%-#20.5hh"); // [√]
	// ft_printf("%s"); // [√]
	// ft_printf("%%"); // [√]
	// ft_printf("% %"); // [√]
	// ft_printf("%%%%%%%"); // [√]

	// ft_printf(""); 						write(1, "\n", 1);
	// ft_printf("This is a string");      write(1, "\n", 1);
	// ft_printf("This is %a string");     write(1, "\n", 1);
	// ft_printf("%This is a string");     write(1, "\n", 1);

	// printf("%lli", (long long)10);

	// ft_printf("%i", (int)10);     write(1, "\n", 1);

	// ft_printf("%i", (int)11);
	// ft_printf("%i", (int)12);
	// ft_printf("%i", (int)13);

	// printf("%+10.5f", 13.456);
	// printf("%-+20.5d", 13);
	// printf("|%-+20.5f|\n", 13.23);
	// printf("|% +20.5f|", 13.23);

	// printf("%f\n", -340282346638528859811704183484516925441.000000);
	// printf("%f\n", 4294967296.1);
	// printf("%f\n", FLT_MIN);
	// printf("%f\n", FLT_MAX);
	// printf("%f\n", FLT_EPSILON);

	// printf("%f\n", FLT_MAX);
	// printf("%Lf\n", LDBL_MAX);
	// printf("%.30Lf\n", (long double)-18131231244674417236523842376892354236872735.0);

	//
	// /* — — — — – – – – – – – – – – – – – – – – – – – – – –  */ ft_printf("%i, %i, %i, %i, %i", 10, 50, 100, 150, 1000);



/* ========================================================================= */
/* ========================================================================= */
/* ========================================================================= */


/* %s SPECIFIER TESTS */

/**
 * Only takes the following flags & fields:
 *
 * 		– Flag: '-',
 *      - Width
 *      - Precision
 *
 */

	// ft_printf("%s\n", NULL);
	// printf("%s\n", NULL);

	// ft_printf("|%-10.2s|\n", "hello");
	// printf("|%-10.2s|\n\n", "hello");

	// ft_printf("|%12.2s|\n", "hello");
	// printf("|%12.2s|\n\n", "hello");

	// ft_printf("|%-2.1223s|\n", "hello");
	// printf("|%-2.1223s|\n\n", "hello");

	// ft_printf("|%-200.12s|\n", "hello");
	// printf("|%-200.12s|\n\n", "hello");

	// ft_printf("|%*.12s|\n", 10, "hello");
	// printf("|%*.12s|\n\n", 10, "hello");

	// ft_printf("|%*.*s|\n", 40, 5, "hello");
	// printf("|%*.*s|\n\n", 40, 5, "hello");

	// ft_printf("|%*.*s|\n", 25, 2, "hello");
	// printf("|%*.*s|\n\n", 25, 2, "hello");

/* — — — — – – – – – – – – – – – – – – – – – – – – – –  */

// /* %c SPECIFIER TESTS */

// /**
//  * Only takes the following flags & fields:
//  *
//  * 		– Flag: '-'
//  *       - Width
//  *       - Precison
//  *
//  */

	// ft_printf("%r\n", NULL);
	// printf("%r\n", NULL);

	// ft_printf("|%-10.2s|\n", "\x08hello\x09");
	// printf("|%-10.2s|\n\n", "\x08hello\x09");

	// ft_printf("|%12.2s|\n", "\x30h\x29 e\x28l\x27l\x26o\x25");
	// printf("|%12.2s|\n\n", "\x30h\x29 e\x28l\x27l\x26o\x25");

	// ft_printf("|%-2.1223s|\n", "hello");
	// printf("|%-2.1223s|\n\n", "hello");

	// ft_printf("|%-200.12s|\n", "hello");
	// printf("|%-200.12s|\n\n", "hello");

	// ft_printf("|%*.12s|\n", 10, "hello");
	// printf("|%*.12s|\n\n", 10, "hello");

	// ft_printf("|%*.*s|\n", 40, 5, "hello");
	// printf("|%*.*s|\n\n", 40, 5, "hello");

	// ft_printf("|%*.*s|\n", 25, 2, "hello");
	// printf("|%*.*s|\n\n", 25, 2, "hello");


/* — — — — – – – – – – – – – – – – – – – – – – – – – –  */

// /* %c SPECIFIER TESTS */

// /**
//  * Only takes the following flags & fields:
//  *
//  * 		– Flag: '-'
//  *       - Width
//  *
//  */

	// ft_printf("|%c|\n", 127);
	// printf("|%c|\n\n", 127);

	// ft_printf("|%c|\n", 'a');
	// printf("|%c|\n\n", 'a');

	// ft_printf("|%c|	|%c|	|%c|\n", 'a', 'b', 'c');
	// printf("|%c|	|%c|	|%c|\n\n", 'a', 'b', 'c');

	// ft_printf("|%10c|\n", 'z');
	// printf("|%10c|\n\n", 'z');

	// ft_printf("|%-*c|\n", 10, 'y');
	// printf("|%-*c|\n\n", 10, 'y');

	// ft_printf("|%25c|\n", 'x');
	// printf("|%25c|\n\n", 'x');

	// ft_printf("|%c%c%c%c%c!|\n", 'K', 'e', 'v', 'i', 'n');
	// printf("|%c%c%c%c%c!|\n\n", 'K', 'e', 'v', 'i', 'n');

	// ft_printf("|%c%c%c%c%c%c%c%c%c|\n",
	// 	'B', 'e', ' ', 'd', 'e', 'v', 'i', 'n', '\'');
	// printf("|%c%c%c%c%c%c%c%c%c|\n\n",
	// 	'B', 'e', ' ', 'd', 'e', 'v', 'i', 'n', '\'');

/* — — — — – – – – – – – – – – – – – – – – – – – – – –  */

// /* %% SPECIFIER TESTS */

// /**
//  * Only takes the following flags & fields:
//  *
//  * 		– Flag: '-',
//  *       - Width
//  *
//  * Everything else does nothing even though you can
//  * specify those fields and flags.
//  *
//  */

	// ft_printf("|%%|\n");
	// printf("|%%|\n\n");

	// ft_printf("|%20%|\n");
	// printf("|%20%|\n\n");

	// ft_printf("|%*%|\n", 15);
	// printf("|%*%|\n\n", 15);

	// ft_printf("|%10.5%|\n");
	// printf("|%10.5%|\n\n");

	// ft_printf("|%+%|\n");
	// printf("|%+%|\n\n");

	// ft_printf("|%#%|\n");
	// printf("|%#%|\n\n");

	// ft_printf("|%-010.20%|\n");
	// printf("|%-010.20%|\n\n");

	// ft_printf("|% +5.10%|\n");
	// printf("|% +5.10%|\n\n");

/* — — — — – – – – – – – – – – – – – – – – – – – – – –  */

// /* %d & %i SPECIFIER TESTS */

// /**
//  * Only takes the following flags & fields:
//  *
//  * 		– Flag: '-', ' ', '0', '+'
//  *       - Width: defined or '*'
//  *       - Precision: defined or '*'
//  *       - Length: 'h', 'hh', 'l', 'll'
//  *
//  */

// // MAXs & MINs

// 	ft_printf("|%hhi|\n",  (signed char)CHAR_MAX);
// 	printf("|%hhi|\n\n",   (signed char)CHAR_MAX);
// 	ft_printf("|%hhi|\n",  (signed char)CHAR_MIN);
// 	printf("|%hhi|\n\n",   (signed char)CHAR_MIN);

// 	ft_printf("|%hi|\n",   (short int)SHORT_MAX);
// 	printf("|%hi|\n\n",    (short int)SHORT_MAX);
// 	ft_printf("|%hi|\n",   (short int)SHORT_MIN);
// 	printf("|%hi|\n\n",    (short int)SHORT_MIN);

// 	ft_printf("|%i|\n",    (int)INT_MAX);
// 	printf("|%i|\n\n",     (int)INT_MAX);
// 	ft_printf("|%i|\n",    (int)INT_MIN);
// 	printf("|%i|\n\n",     (int)INT_MIN);

// 	ft_printf("|%li|\n",   (long int)LONG_MAX);
// 	printf("|%li|\n\n",    (long int)LONG_MAX);
// 	ft_printf("|%li|\n",   (long int)-9223372036854775807);
// 	printf("|%li|\n\n",    (long int)-9223372036854775807);

// 	ft_printf("|%lli|\n",  (long long)LLONG_MAX);
// 	printf("|%lli|\n\n",   (long long)LLONG_MAX);


// /* ++++++++++++++++++++++++++++ LENGTH HH +++++++++++++++++++++++++++ */
// /* ++++++++++++++++++++++++++++ LENGTH HH +++++++++++++++++++++++++++ */


// // Width & Precision (with no flags)

// 	ft_printf("|%10hhi|\n", (signed char)112);
// 	printf("|%10hhi|\n\n", (signed char)112);

// 	ft_printf("|%30hhi|\n", (signed char)112);
// 	printf("|%30hhi|\n\n", (signed char)112);

// 	ft_printf("|%.6hhi|\n", (signed char)112);
// 	printf("|%.6hhi|\n\n", (signed char)112);

// 	ft_printf("|%.10hhi|\n", (signed char)112);
// 	printf("|%.10hhi|\n\n", (signed char)112);

// 	ft_printf("|%25.10hhi|\n", (signed char)112);
// 	printf("|%25.10hhi|\n\n", (signed char)112);

// 	ft_printf("|%25.*hhi|\n", 10, (signed char)112);
// 	printf("|%25.*hhi|\n\n", 10, (signed char)112);

// 	ft_printf("|%25.*hhi|\n", 10, (signed char)112);
// 	printf("|%25.*hhi|\n\n", 10, (signed char)112);

// 	ft_printf("|%*.*hhi|\n", 25, 10, (signed char)112);
// 	printf("|%*.*hhi|\n\n", 25, 10, (signed char)112);

// 	ft_printf("|%*.10hhi|\n", 25, (signed char)112);
// 	printf("|%*.10hhi|\n\n", 25, (signed char)112);

// // Width & Precision (with '-')

// 	ft_printf("|%-10hhi|\n", (signed char)112);
// 	printf("|%-10hhi|\n\n", (signed char)112);

// 	ft_printf("|%-30hhi|\n", (signed char)112);
// 	printf("|%-30hhi|\n\n", (signed char)112);

// 	ft_printf("|%-.6hhi|\n", (signed char)112);
// 	printf("|%-.6hhi|\n\n", (signed char)112);

// 	ft_printf("|%-.10hhi|\n", (signed char)112);
// 	printf("|%-.10hhi|\n\n", (signed char)112);

// 	ft_printf("|%-25.10hhi|\n", (signed char)112);
// 	printf("|%-25.10hhi|\n\n", (signed char)112);

// 	ft_printf("|%-25.*hhi|\n", 10, (signed char)112);
// 	printf("|%-25.*hhi|\n\n", 10, (signed char)112);

// 	ft_printf("|%-25.*hhi|\n", 10, (signed char)112);
// 	printf("|%-25.*hhi|\n\n", 10, (signed char)112);

// 	ft_printf("|%-*.*hhi|\n", 25, 10, (signed char)112);
// 	printf("|%-*.*hhi|\n\n", 25, 10, (signed char)112);

// 	ft_printf("|%-*.10hhi|\n", 25, (signed char)112);
// 	printf("|%-*.10hhi|\n\n", 25, (signed char)112);

// // Width & Precision ('-' with '+')

// 	ft_printf("|%+-10hhi|\n", (signed char)112);
// 	printf("|%+-10hhi|\n\n", (signed char)112);

// 	ft_printf("|%+-30hhi|\n", (signed char)112);
// 	printf("|%+-30hhi|\n\n", (signed char)112);

// 	ft_printf("|%+-.6hhi|\n", (signed char)112);
// 	printf("|%+-.6hhi|\n\n", (signed char)112);

// 	ft_printf("|%+-.10hhi|\n", (signed char)112);
// 	printf("|%+-.10hhi|\n\n", (signed char)112);

// 	ft_printf("|%+-25.10hhi|\n", (signed char)112);
// 	printf("|%+-25.10hhi|\n\n", (signed char)112);

// 	ft_printf("|%+-25.*hhi|\n", 10, (signed char)112);
// 	printf("|%+-25.*hhi|\n\n", 10, (signed char)112);

// 	ft_printf("|%+-25.*hhi|\n", 10, (signed char)112);
// 	printf("|%+-25.*hhi|\n\n", 10, (signed char)112);

// 	ft_printf("|%+-*.*hhi|\n", 25, 10, (signed char)112);
// 	printf("|%+-*.*hhi|\n\n", 25, 10, (signed char)112);

// 	ft_printf("|%+-*.10hhi|\n", 25, (signed char)112);
// 	printf("|%+-*.10hhi|\n\n", 25, (signed char)112);

// // Width & Precision ('-' with '+')

// 	ft_printf("|%+-10hhi|\n", (signed char)-112);
// 	printf("|%+-10hhi|\n\n", (signed char)-112);

// 	ft_printf("|%+-30hhi|\n", (signed char)-112);
// 	printf("|%+-30hhi|\n\n", (signed char)-112);

// 	ft_printf("|%+-.6hhi|\n", (signed char)-112);
// 	printf("|%+-.6hhi|\n\n", (signed char)-112);

// 	ft_printf("|%+-.10hhi|\n", (signed char)-112);
// 	printf("|%+-.10hhi|\n\n", (signed char)-112);

// 	ft_printf("|%+-25.10hhi|\n", (signed char)-112);
// 	printf("|%+-25.10hhi|\n\n", (signed char)-112);

// 	ft_printf("|%+-25.*hhi|\n", 10, (signed char)-112);
// 	printf("|%+-25.*hhi|\n\n", 10, (signed char)-112);

// 	ft_printf("|%+-25.*hhi|\n", 10, (signed char)-112);
// 	printf("|%+-25.*hhi|\n\n", 10, (signed char)-112);

// 	ft_printf("|%+-*.*hhi|\n", 25, 10, (signed char)-112);
// 	printf("|%+-*.*hhi|\n\n", 25, 10, (signed char)-112);

// 	ft_printf("|%+-*.10hhi|\n", 25, (signed char)-112);
// 	printf("|%+-*.10hhi|\n\n", 25, (signed char)-112);

// // Width & Precision ('-' with ' ')

// 	ft_printf("|% -10hhi|\n", (signed char)112);
// 	printf("|% -10hhi|\n\n", (signed char)112);

// 	ft_printf("|% -30hhi|\n", (signed char)112);
// 	printf("|% -30hhi|\n\n", (signed char)112);

// 	ft_printf("|% -.6hhi|\n", (signed char)112);
// 	printf("|% -.6hhi|\n\n", (signed char)112);

// 	ft_printf("|% -.10hhi|\n", (signed char)112);
// 	printf("|% -.10hhi|\n\n", (signed char)112);

// 	ft_printf("|% -25.10hhi|\n", (signed char)112);
// 	printf("|% -25.10hhi|\n\n", (signed char)112);

// 	ft_printf("|% -25.*hhi|\n", 10, (signed char)112);
// 	printf("|% -25.*hhi|\n\n", 10, (signed char)112);

// 	ft_printf("|% -25.*hhi|\n", 10, (signed char)112);
// 	printf("|% -25.*hhi|\n\n", 10, (signed char)112);

// 	ft_printf("|% -*.*hhi|\n", 25, 10, (signed char)112);
// 	printf("|% -*.*hhi|\n\n", 25, 10, (signed char)112);

// 	ft_printf("|% -*.10hhi|\n", 25, (signed char)112);
// 	printf("|% -*.10hhi|\n\n", 25, (signed char)112);

// // Width & Precision ' ')

// 	ft_printf("|% 10hhi|\n", (signed char)112);
// 	printf("|% 10hhi|\n\n", (signed char)112);

// 	ft_printf("|% 30hhi|\n", (signed char)112);
// 	printf("|% 30hhi|\n\n", (signed char)112);

// 	ft_printf("|% .6hhi|\n", (signed char)112);
// 	printf("|% .6hhi|\n\n", (signed char)112);

// 	ft_printf("|% .10hhi|\n", (signed char)112);
// 	printf("|% .10hhi|\n\n", (signed char)112);

// 	ft_printf("|% 25.10hhi|\n", (signed char)112);
// 	printf("|% 25.10hhi|\n\n", (signed char)112);

// 	ft_printf("|% 25.*hhi|\n", 10, (signed char)112);
// 	printf("|% 25.*hhi|\n\n", 10, (signed char)112);

// 	ft_printf("|% 25.*hhi|\n", 10, (signed char)112);
// 	printf("|% 25.*hhi|\n\n", 10, (signed char)112);

// 	ft_printf("|% *.*hhi|\n", 25, 10, (signed char)112);
// 	printf("|% *.*hhi|\n\n", 25, 10, (signed char)112);

// 	ft_printf("|% *.10hhi|\n", 25, (signed char)112);
// 	printf("|% *.10hhi|\n\n", 25, (signed char)112);

// // Width & Precision ('0')

// 	ft_printf("|%010hhi|\n", (signed char)112);
// 	printf("|%010hhi|\n\n", (signed char)112);

// 	ft_printf("|%030hhi|\n", (signed char)112);
// 	printf("|%030hhi|\n\n", (signed char)112);

// 	ft_printf("|%0.6hhi|\n", (signed char)112);
// 	printf("|%0.6hhi|\n\n", (signed char)112);

// 	ft_printf("|%0.10hhi|\n", (signed char)112);
// 	printf("|%0.10hhi|\n\n", (signed char)112);

// 	ft_printf("|%025.10hhi|\n", (signed char)112);
// 	printf("|%025.10hhi|\n\n", (signed char)112);

// 	ft_printf("|%025.*hhi|\n", 10, (signed char)112);
// 	printf("|%025.*hhi|\n\n", 10, (signed char)112);

// 	ft_printf("|%025.*hhi|\n", 10, (signed char)112);
// 	printf("|%025.*hhi|\n\n", 10, (signed char)112);

// 	ft_printf("|%0*.*hhi|\n", 25, 10, (signed char)112);
// 	printf("|%0*.*hhi|\n\n", 25, 10, (signed char)112);

// 	ft_printf("|%0*.10hhi|\n", 25, (signed char)112);
// 	printf("|%0*.10hhi|\n\n", 25, (signed char)112);


// /* ++++++++++++++++++++++++++++ LENGTH H +++++++++++++++++++++++++++ */
// /* ++++++++++++++++++++++++++++ LENGTH H +++++++++++++++++++++++++++ */

// // Width & Precision (with no flags)

// 	ft_printf("|%10hi|\n", (short)27352);
// 	printf("|%10hi|\n\n", (short)27352);

// 	ft_printf("|%30hi|\n", (short)27352);
// 	printf("|%30hi|\n\n", (short)27352);

// 	ft_printf("|%.6hi|\n", (short)27352);
// 	printf("|%.6hi|\n\n", (short)27352);

// 	ft_printf("|%.10hi|\n", (short)27352);
// 	printf("|%.10hi|\n\n", (short)27352);

// 	ft_printf("|%25.10hi|\n", (short)27352);
// 	printf("|%25.10hi|\n\n", (short)27352);

// 	ft_printf("|%25.*hi|\n", 10, (short)27352);
// 	printf("|%25.*hi|\n\n", 10, (short)27352);

// 	ft_printf("|%25.*hi|\n", 10, (short)27352);
// 	printf("|%25.*hi|\n\n", 10, (short)27352);

// 	ft_printf("|%*.*hi|\n", 25, 10, (short)27352);
// 	printf("|%*.*hi|\n\n", 25, 10, (short)27352);

// 	ft_printf("|%*.10hi|\n", 25, (short)27352);
// 	printf("|%*.10hi|\n\n", 25, (short)27352);

// // Width & Precision (with '-')

// 	ft_printf("|%-10hi|\n", (short)27352);
// 	printf("|%-10hi|\n\n", (short)27352);

// 	ft_printf("|%-30hi|\n", (short)27352);
// 	printf("|%-30hi|\n\n", (short)27352);

// 	ft_printf("|%-.6hi|\n", (short)27352);
// 	printf("|%-.6hi|\n\n", (short)27352);

// 	ft_printf("|%-.10hi|\n", (short)27352);
// 	printf("|%-.10hi|\n\n", (short)27352);

// 	ft_printf("|%-25.10hi|\n", (short)27352);
// 	printf("|%-25.10hi|\n\n", (short)27352);

// 	ft_printf("|%-25.*hi|\n", 10, (short)27352);
// 	printf("|%-25.*hi|\n\n", 10, (short)27352);

// 	ft_printf("|%-25.*hi|\n", 10, (short)27352);
// 	printf("|%-25.*hi|\n\n", 10, (short)27352);

// 	ft_printf("|%-*.*hi|\n", 25, 10, (short)27352);
// 	printf("|%-*.*hi|\n\n", 25, 10, (short)27352);

// 	ft_printf("|%-*.10hi|\n", 25, (short)27352);
// 	printf("|%-*.10hi|\n\n", 25, (short)27352);

// // Width & Precision ('-' with '+')

// 	ft_printf("|%+-10hi|\n", (short)27352);
// 	printf("|%+-10hi|\n\n", (short)27352);

// 	ft_printf("|%+-30hi|\n", (short)27352);
// 	printf("|%+-30hi|\n\n", (short)27352);

// 	ft_printf("|%+-.6hi|\n", (short)27352);
// 	printf("|%+-.6hi|\n\n", (short)27352);

// 	ft_printf("|%+-.10hi|\n", (short)27352);
// 	printf("|%+-.10hi|\n\n", (short)27352);

// 	ft_printf("|%+-25.10hi|\n", (short)27352);
// 	printf("|%+-25.10hi|\n\n", (short)27352);

// 	ft_printf("|%+-25.*hi|\n", 10, (short)27352);
// 	printf("|%+-25.*hi|\n\n", 10, (short)27352);

// 	ft_printf("|%+-25.*hi|\n", 10, (short)27352);
// 	printf("|%+-25.*hi|\n\n", 10, (short)27352);

// 	ft_printf("|%+-*.*hi|\n", 25, 10, (short)27352);
// 	printf("|%+-*.*hi|\n\n", 25, 10, (short)27352);

// 	ft_printf("|%+-*.10hi|\n", 25, (short)27352);
// 	printf("|%+-*.10hi|\n\n", 25, (short)27352);

// // Width & Precision ('-' with '+')

// 	ft_printf("|%+-10hi|\n", (short)-27352);
// 	printf("|%+-10hi|\n\n", (short)-27352);

// 	ft_printf("|%+-30hi|\n", (short)-27352);
// 	printf("|%+-30hi|\n\n", (short)-27352);

// 	ft_printf("|%+-.6hi|\n", (short)-27352);
// 	printf("|%+-.6hi|\n\n", (short)-27352);

// 	ft_printf("|%+-.10hi|\n", (short)-27352);
// 	printf("|%+-.10hi|\n\n", (short)-27352);

// 	ft_printf("|%+-25.10hi|\n", (short)-27352);
// 	printf("|%+-25.10hi|\n\n", (short)-27352);

// 	ft_printf("|%+-25.*hi|\n", 10, (short)-27352);
// 	printf("|%+-25.*hi|\n\n", 10, (short)-27352);

// 	ft_printf("|%+-25.*hi|\n", 10, (short)-27352);
// 	printf("|%+-25.*hi|\n\n", 10, (short)-27352);

// 	ft_printf("|%+-*.*hi|\n", 25, 10, (short)-27352);
// 	printf("|%+-*.*hi|\n\n", 25, 10, (short)-27352);

// 	ft_printf("|%+-*.10hi|\n", 25, (short)-27352);
// 	printf("|%+-*.10hi|\n\n", 25, (short)-27352);

// // Width & Precision ('-' with ' ')

// 	ft_printf("|% -10hi|\n", (short)27352);
// 	printf("|% -10hi|\n\n", (short)27352);

// 	ft_printf("|% -30hi|\n", (short)27352);
// 	printf("|% -30hi|\n\n", (short)27352);

// 	ft_printf("|% -.6hi|\n", (short)27352);
// 	printf("|% -.6hi|\n\n", (short)27352);

// 	ft_printf("|% -.10hi|\n", (short)27352);
// 	printf("|% -.10hi|\n\n", (short)27352);

// 	ft_printf("|% -25.10hi|\n", (short)27352);
// 	printf("|% -25.10hi|\n\n", (short)27352);

// 	ft_printf("|% -25.*hi|\n", 10, (short)27352);
// 	printf("|% -25.*hi|\n\n", 10, (short)27352);

// 	ft_printf("|% -25.*hi|\n", 10, (short)27352);
// 	printf("|% -25.*hi|\n\n", 10, (short)27352);

// 	ft_printf("|% -*.*hi|\n", 25, 10, (short)27352);
// 	printf("|% -*.*hi|\n\n", 25, 10, (short)27352);

// 	ft_printf("|% -*.10hi|\n", 25, (short)27352);
// 	printf("|% -*.10hi|\n\n", 25, (short)27352);

// // Width & Precision ' ')

// 	ft_printf("|% 10hi|\n", (short)27352);
// 	printf("|% 10hi|\n\n", (short)27352);

// 	ft_printf("|% 30hi|\n", (short)27352);
// 	printf("|% 30hi|\n\n", (short)27352);

// 	ft_printf("|% .6hi|\n", (short)27352);
// 	printf("|% .6hi|\n\n", (short)27352);

// 	ft_printf("|% .10hi|\n", (short)27352);
// 	printf("|% .10hi|\n\n", (short)27352);

// 	ft_printf("|% 25.10hi|\n", (short)27352);
// 	printf("|% 25.10hi|\n\n", (short)27352);

// 	ft_printf("|% 25.*hi|\n", 10, (short)27352);
// 	printf("|% 25.*hi|\n\n", 10, (short)27352);

// 	ft_printf("|% 25.*hi|\n", 10, (short)27352);
// 	printf("|% 25.*hi|\n\n", 10, (short)27352);

// 	ft_printf("|% *.*hi|\n", 25, 10, (short)27352);
// 	printf("|% *.*hi|\n\n", 25, 10, (short)27352);

// 	ft_printf("|% *.10hi|\n", 25, (short)27352);
// 	printf("|% *.10hi|\n\n", 25, (short)27352);

// // Width & Precision ('0')

// 	ft_printf("|%010hi|\n", (short)27352);
// 	printf("|%010hi|\n\n", (short)27352);

// 	ft_printf("|%030hi|\n", (short)27352);
// 	printf("|%030hi|\n\n", (short)27352);

// 	ft_printf("|%0.6hi|\n", (short)27352);
// 	printf("|%0.6hi|\n\n", (short)27352);

// 	ft_printf("|%0.10hi|\n", (short)27352);
// 	printf("|%0.10hi|\n\n", (short)27352);

// 	ft_printf("|%025.10hi|\n", (short)27352);
// 	printf("|%025.10hi|\n\n", (short)27352);

// 	ft_printf("|%025.*hi|\n", 10, (short)27352);
// 	printf("|%025.*hi|\n\n", 10, (short)27352);

// 	ft_printf("|%025.*hi|\n", 10, (short)27352);
// 	printf("|%025.*hi|\n\n", 10, (short)27352);

// 	ft_printf("|%0*.*hi|\n", 25, 10, (short)27352);
// 	printf("|%0*.*hi|\n\n", 25, 10, (short)27352);

// 	ft_printf("|%0*.10hi|\n", 25, (short)27352);
// 	printf("|%0*.10hi|\n\n", 25, (short)27352);


// /* ++++++++++++++++++++++++++++ LENGTH DEFAULT +++++++++++++++++++++++++++ */
// /* ++++++++++++++++++++++++++++ LENGTH DEFAULT +++++++++++++++++++++++++++ */


// // Width & Precision (with no flags)

// 	ft_printf("|%10i|\n", 12345);
// 	printf("|%10i|\n\n", 12345);

// 	ft_printf("|%30i|\n", 12345);
// 	printf("|%30i|\n\n", 12345);

// 	ft_printf("|%.6i|\n", 12345);
// 	printf("|%.6i|\n\n", 12345);

// 	ft_printf("|%.10i|\n", 12345);
// 	printf("|%.10i|\n\n", 12345);

// 	ft_printf("|%25.10i|\n", 12345);
// 	printf("|%25.10i|\n\n", 12345);

// 	ft_printf("|%25.*i|\n", 10, 12345);
// 	printf("|%25.*i|\n\n", 10, 12345);

// 	ft_printf("|%25.*i|\n", 10, 12345);
// 	printf("|%25.*i|\n\n", 10, 12345);

// 	ft_printf("|%*.*i|\n", 25, 10, 12345);
// 	printf("|%*.*i|\n\n", 25, 10, 12345);

// 	ft_printf("|%*.10i|\n", 25, 12345);
// 	printf("|%*.10i|\n\n", 25, 12345);

// // Width & Precision (with '-')

// 	ft_printf("|%-10i|\n", 12345);
// 	printf("|%-10i|\n\n", 12345);

// 	ft_printf("|%-30i|\n", 12345);
// 	printf("|%-30i|\n\n", 12345);

// 	ft_printf("|%-.6i|\n", 12345);
// 	printf("|%-.6i|\n\n", 12345);

// 	ft_printf("|%-.10i|\n", 12345);
// 	printf("|%-.10i|\n\n", 12345);

// 	ft_printf("|%-25.10i|\n", 12345);
// 	printf("|%-25.10i|\n\n", 12345);

// 	ft_printf("|%-25.*i|\n", 10, 12345);
// 	printf("|%-25.*i|\n\n", 10, 12345);

// 	ft_printf("|%-25.*i|\n", 10, 12345);
// 	printf("|%-25.*i|\n\n", 10, 12345);

// 	ft_printf("|%-*.*i|\n", 25, 10, 12345);
// 	printf("|%-*.*i|\n\n", 25, 10, 12345);

// 	ft_printf("|%-*.10i|\n", 25, 12345);
// 	printf("|%-*.10i|\n\n", 25, 12345);

// // Width & Precision ('-' with '+')

// 	ft_printf("|%+-10i|\n", 12345);
// 	printf("|%+-10i|\n\n", 12345);

// 	ft_printf("|%+-30i|\n", 12345);
// 	printf("|%+-30i|\n\n", 12345);

// 	ft_printf("|%+-.6i|\n", 12345);
// 	printf("|%+-.6i|\n\n", 12345);

// 	ft_printf("|%+-.10i|\n", 12345);
// 	printf("|%+-.10i|\n\n", 12345);

// 	ft_printf("|%+-25.10i|\n", 12345);
// 	printf("|%+-25.10i|\n\n", 12345);

// 	ft_printf("|%+-25.*i|\n", 10, 12345);
// 	printf("|%+-25.*i|\n\n", 10, 12345);

// 	ft_printf("|%+-25.*i|\n", 10, 12345);
// 	printf("|%+-25.*i|\n\n", 10, 12345);

// 	ft_printf("|%+-*.*i|\n", 25, 10, 12345);
// 	printf("|%+-*.*i|\n\n", 25, 10, 12345);

// 	ft_printf("|%+-*.10i|\n", 25, 12345);
// 	printf("|%+-*.10i|\n\n", 25, 12345);

// // Width & Precision ('-' with '+')

// 	ft_printf("|%+-10i|\n", -12345);
// 	printf("|%+-10i|\n\n", -12345);

// 	ft_printf("|%+-30i|\n", -12345);
// 	printf("|%+-30i|\n\n", -12345);

// 	ft_printf("|%+-.6i|\n", -12345);
// 	printf("|%+-.6i|\n\n", -12345);

// 	ft_printf("|%+-.10i|\n", -12345);
// 	printf("|%+-.10i|\n\n", -12345);

// 	ft_printf("|%+-25.10i|\n", -12345);
// 	printf("|%+-25.10i|\n\n", -12345);

// 	ft_printf("|%+-25.*i|\n", 10, -12345);
// 	printf("|%+-25.*i|\n\n", 10, -12345);

// 	ft_printf("|%+-25.*i|\n", 10, -12345);
// 	printf("|%+-25.*i|\n\n", 10, -12345);

// 	ft_printf("|%+-*.*i|\n", 25, 10, -12345);
// 	printf("|%+-*.*i|\n\n", 25, 10, -12345);

// 	ft_printf("|%+-*.10i|\n", 25, -12345);
// 	printf("|%+-*.10i|\n\n", 25, -12345);

// // Width & Precision ('-' with ' ')

// 	ft_printf("|% -10i|\n", 12345);
// 	printf("|% -10i|\n\n", 12345);

// 	ft_printf("|% -30i|\n", 12345);
// 	printf("|% -30i|\n\n", 12345);

// 	ft_printf("|% -.6i|\n", 12345);
// 	printf("|% -.6i|\n\n", 12345);

// 	ft_printf("|% -.10i|\n", 12345);
// 	printf("|% -.10i|\n\n", 12345);

// 	ft_printf("|% -25.10i|\n", 12345);
// 	printf("|% -25.10i|\n\n", 12345);

// 	ft_printf("|% -25.*i|\n", 10, 12345);
// 	printf("|% -25.*i|\n\n", 10, 12345);

// 	ft_printf("|% -25.*i|\n", 10, 12345);
// 	printf("|% -25.*i|\n\n", 10, 12345);

// 	ft_printf("|% -*.*i|\n", 25, 10, 12345);
// 	printf("|% -*.*i|\n\n", 25, 10, 12345);

// 	ft_printf("|% -*.10i|\n", 25, 12345);
// 	printf("|% -*.10i|\n\n", 25, 12345);

// // Width & Precision ' ')

// 	ft_printf("|% 10i|\n", 12345);
// 	printf("|% 10i|\n\n", 12345);

// 	ft_printf("|% 30i|\n", 12345);
// 	printf("|% 30i|\n\n", 12345);

// 	ft_printf("|% .6i|\n", 12345);
// 	printf("|% .6i|\n\n", 12345);

// 	ft_printf("|% .10i|\n", 12345);
// 	printf("|% .10i|\n\n", 12345);

// 	ft_printf("|% 25.10i|\n", 12345);
// 	printf("|% 25.10i|\n\n", 12345);

// 	ft_printf("|% 25.*i|\n", 10, 12345);
// 	printf("|% 25.*i|\n\n", 10, 12345);

// 	ft_printf("|% 25.*i|\n", 10, 12345);
// 	printf("|% 25.*i|\n\n", 10, 12345);

// 	ft_printf("|% *.*i|\n", 25, 10, 12345);
// 	printf("|% *.*i|\n\n", 25, 10, 12345);

// 	ft_printf("|% *.10i|\n", 25, 12345);
// 	printf("|% *.10i|\n\n", 25, 12345);

// // Width & Precision ('0')

// 	ft_printf("|%010i|\n", 12345);
// 	printf("|%010i|\n\n", 12345);

// 	ft_printf("|%030i|\n", 12345);
// 	printf("|%030i|\n\n", 12345);

// 	ft_printf("|%0.6i|\n", 12345);
// 	printf("|%0.6i|\n\n", 12345);

// 	ft_printf("|%0.10i|\n", 12345);
// 	printf("|%0.10i|\n\n", 12345);

// 	ft_printf("|%025.10i|\n", 12345);
// 	printf("|%025.10i|\n\n", 12345);

// 	ft_printf("|%025.*i|\n", 10, 12345);
// 	printf("|%025.*i|\n\n", 10, 12345);

// 	ft_printf("|%025.*i|\n", 10, 12345);
// 	printf("|%025.*i|\n\n", 10, 12345);

// 	ft_printf("|%0*.*i|\n", 25, 10, 12345);
// 	printf("|%0*.*i|\n\n", 25, 10, 12345);

// 	ft_printf("|%0*.10i|\n", 25, 12345);
// 	printf("|%0*.10i|\n\n", 25, 12345);


// /* ++++++++++++++++++++++++++++ LENGTH L +++++++++++++++++++++++++++ */
// /* ++++++++++++++++++++++++++++ LENGTH L +++++++++++++++++++++++++++ */


// // Width & Precision (with no flags)

// 	ft_printf("|%10li|\n", (signed long)52728623);
// 	printf("|%10li|\n\n", (signed long)52728623);

// 	ft_printf("|%30li|\n", (signed long)52728623);
// 	printf("|%30li|\n\n", (signed long)52728623);

// 	ft_printf("|%.6li|\n", (signed long)52728623);
// 	printf("|%.6li|\n\n", (signed long)52728623);

// 	ft_printf("|%.10li|\n", (signed long)52728623);
// 	printf("|%.10li|\n\n", (signed long)52728623);

// 	ft_printf("|%40.10li|\n", (signed long)52728623);
// 	printf("|%40.10li|\n\n", (signed long)52728623);

// 	ft_printf("|%40.*li|\n", 10, (signed long)52728623);
// 	printf("|%40.*li|\n\n", 10, (signed long)52728623);

// 	ft_printf("|%40.*li|\n", 10, (signed long)52728623);
// 	printf("|%40.*li|\n\n", 10, (signed long)52728623);

// 	ft_printf("|%*.*li|\n", 40, 10, (signed long)52728623);
// 	printf("|%*.*li|\n\n", 40, 10, (signed long)52728623);

// 	ft_printf("|%*.10li|\n", 40, (signed long)52728623);
// 	printf("|%*.10li|\n\n", 40, (signed long)52728623);

// // Width & Precision (with '-')

// 	ft_printf("|%-10li|\n", (signed long)52728623);
// 	printf("|%-10li|\n\n", (signed long)52728623);

// 	ft_printf("|%-30li|\n", (signed long)52728623);
// 	printf("|%-30li|\n\n", (signed long)52728623);

// 	ft_printf("|%-.6li|\n", (signed long)52728623);
// 	printf("|%-.6li|\n\n", (signed long)52728623);

// 	ft_printf("|%-.10li|\n", (signed long)52728623);
// 	printf("|%-.10li|\n\n", (signed long)52728623);

// 	ft_printf("|%-40.10li|\n", (signed long)52728623);
// 	printf("|%-40.10li|\n\n", (signed long)52728623);

// 	ft_printf("|%-40.*li|\n", 10, (signed long)52728623);
// 	printf("|%-40.*li|\n\n", 10, (signed long)52728623);

// 	ft_printf("|%-40.*li|\n", 10, (signed long)52728623);
// 	printf("|%-40.*li|\n\n", 10, (signed long)52728623);

// 	ft_printf("|%-*.*li|\n", 40, 10, (signed long)52728623);
// 	printf("|%-*.*li|\n\n", 40, 10, (signed long)52728623);

// 	ft_printf("|%-*.10li|\n", 40, (signed long)52728623);
// 	printf("|%-*.10li|\n\n", 40, (signed long)52728623);

// // Width & Precision ('-' with '+')

// 	ft_printf("|%+-10li|\n", (signed long)52728623);
// 	printf("|%+-10li|\n\n", (signed long)52728623);

// 	ft_printf("|%+-30li|\n", (signed long)52728623);
// 	printf("|%+-30li|\n\n", (signed long)52728623);

// 	ft_printf("|%+-.6li|\n", (signed long)52728623);
// 	printf("|%+-.6li|\n\n", (signed long)52728623);

// 	ft_printf("|%+-.10li|\n", (signed long)52728623);
// 	printf("|%+-.10li|\n\n", (signed long)52728623);

// 	ft_printf("|%+-40.10li|\n", (signed long)52728623);
// 	printf("|%+-40.10li|\n\n", (signed long)52728623);

// 	ft_printf("|%+-40.*li|\n", 10, (signed long)52728623);
// 	printf("|%+-40.*li|\n\n", 10, (signed long)52728623);

// 	ft_printf("|%+-40.*li|\n", 10, (signed long)52728623);
// 	printf("|%+-40.*li|\n\n", 10, (signed long)52728623);

// 	ft_printf("|%+-*.*li|\n", 40, 10, (signed long)52728623);
// 	printf("|%+-*.*li|\n\n", 40, 10, (signed long)52728623);

// 	ft_printf("|%+-*.10li|\n", 40, (signed long)52728623);
// 	printf("|%+-*.10li|\n\n", 40, (signed long)52728623);

// // Width & Precision ('-' with '+')

// 	ft_printf("|%+-10li|\n", (signed long)-52728623);
// 	printf("|%+-10li|\n\n", (signed long)-52728623);

// 	ft_printf("|%+-30li|\n", (signed long)-52728623);
// 	printf("|%+-30li|\n\n", (signed long)-52728623);

// 	ft_printf("|%+-.6li|\n", (signed long)-52728623);
// 	printf("|%+-.6li|\n\n", (signed long)-52728623);

// 	ft_printf("|%+-.10li|\n", (signed long)-52728623);
// 	printf("|%+-.10li|\n\n", (signed long)-52728623);

// 	ft_printf("|%+-40.10li|\n", (signed long)-52728623);
// 	printf("|%+-40.10li|\n\n", (signed long)-52728623);

// 	ft_printf("|%+-40.*li|\n", 10, (signed long)-52728623);
// 	printf("|%+-40.*li|\n\n", 10, (signed long)-52728623);

// 	ft_printf("|%+-40.*li|\n", 10, (signed long)-52728623);
// 	printf("|%+-40.*li|\n\n", 10, (signed long)-52728623);

// 	ft_printf("|%+-*.*li|\n", 40, 10, (signed long)-52728623);
// 	printf("|%+-*.*li|\n\n", 40, 10, (signed long)-52728623);

// 	ft_printf("|%+-*.10li|\n", 40, (signed long)-52728623);
// 	printf("|%+-*.10li|\n\n", 40, (signed long)-52728623);

// // Width & Precision ('-' with ' ')

// 	ft_printf("|% -10li|\n", (signed long)52728623);
// 	printf("|% -10li|\n\n", (signed long)52728623);

// 	ft_printf("|% -30li|\n", (signed long)52728623);
// 	printf("|% -30li|\n\n", (signed long)52728623);

// 	ft_printf("|% -.6li|\n", (signed long)52728623);
// 	printf("|% -.6li|\n\n", (signed long)52728623);

// 	ft_printf("|% -.10li|\n", (signed long)52728623);
// 	printf("|% -.10li|\n\n", (signed long)52728623);

// 	ft_printf("|% -40.10li|\n", (signed long)52728623);
// 	printf("|% -40.10li|\n\n", (signed long)52728623);

// 	ft_printf("|% -40.*li|\n", 10, (signed long)52728623);
// 	printf("|% -40.*li|\n\n", 10, (signed long)52728623);

// 	ft_printf("|% -40.*li|\n", 10, (signed long)52728623);
// 	printf("|% -40.*li|\n\n", 10, (signed long)52728623);

// 	ft_printf("|% -*.*li|\n", 40, 10, (signed long)52728623);
// 	printf("|% -*.*li|\n\n", 40, 10, (signed long)52728623);

// 	ft_printf("|% -*.10li|\n", 40, (signed long)52728623);
// 	printf("|% -*.10li|\n\n", 40, (signed long)52728623);

// // Width & Precision ' ')

// 	ft_printf("|% 10li|\n", (signed long)52728623);
// 	printf("|% 10li|\n\n", (signed long)52728623);

// 	ft_printf("|% 30li|\n", (signed long)52728623);
// 	printf("|% 30li|\n\n", (signed long)52728623);

// 	ft_printf("|% .6li|\n", (signed long)52728623);
// 	printf("|% .6li|\n\n", (signed long)52728623);

// 	ft_printf("|% .10li|\n", (signed long)52728623);
// 	printf("|% .10li|\n\n", (signed long)52728623);

// 	ft_printf("|% 40.10li|\n", (signed long)52728623);
// 	printf("|% 40.10li|\n\n", (signed long)52728623);

// 	ft_printf("|% 40.*li|\n", 10, (signed long)52728623);
// 	printf("|% 40.*li|\n\n", 10, (signed long)52728623);

// 	ft_printf("|% 40.*li|\n", 10, (signed long)52728623);
// 	printf("|% 40.*li|\n\n", 10, (signed long)52728623);

// 	ft_printf("|% *.*li|\n", 40, 10, (signed long)52728623);
// 	printf("|% *.*li|\n\n", 40, 10, (signed long)52728623);

// 	ft_printf("|% *.10li|\n", 40, (signed long)52728623);
// 	printf("|% *.10li|\n\n", 40, (signed long)52728623);

// // Width & Precision ('0')

// 	ft_printf("|%010li|\n", (signed long)52728623);
// 	printf("|%010li|\n\n", (signed long)52728623);

// 	ft_printf("|%030li|\n", (signed long)52728623);
// 	printf("|%030li|\n\n", (signed long)52728623);

// 	ft_printf("|%0.6li|\n", (signed long)52728623);
// 	printf("|%0.6li|\n\n", (signed long)52728623);

// 	ft_printf("|%0.10li|\n", (signed long)52728623);
// 	printf("|%0.10li|\n\n", (signed long)52728623);

// 	ft_printf("|%040.10li|\n", (signed long)52728623);
// 	printf("|%040.10li|\n\n", (signed long)52728623);

// 	ft_printf("|%040.*li|\n", 10, (signed long)52728623);
// 	printf("|%040.*li|\n\n", 10, (signed long)52728623);

// 	ft_printf("|%040.*li|\n", 10, (signed long)52728623);
// 	printf("|%040.*li|\n\n", 10, (signed long)52728623);

// 	ft_printf("|%0*.*li|\n", 40, 10, (signed long)52728623);
// 	printf("|%0*.*li|\n\n", 40, 10, (signed long)52728623);

// 	ft_printf("|%0*.10li|\n", 40, (signed long)52728623);
// 	printf("|%0*.10li|\n\n", 40, (signed long)52728623);


// /* ++++++++++++++++++++++++++++ LENGTH LL +++++++++++++++++++++++++++ */
// /* ++++++++++++++++++++++++++++ LENGTH LL +++++++++++++++++++++++++++ */


// // Width & Precision (with no flags)

// 	ft_printf("|%10lli|\n", (long long int)27323472342);
// 	printf("|%10lli|\n\n", (long long int)27323472342);

// 	ft_printf("|%30lli|\n", (long long int)27323472342);
// 	printf("|%30lli|\n\n", (long long int)27323472342);

// 	ft_printf("|%.6lli|\n", (long long int)27323472342);
// 	printf("|%.6lli|\n\n", (long long int)27323472342);

// 	ft_printf("|%.10lli|\n", (long long int)27323472342);
// 	printf("|%.10lli|\n\n", (long long int)27323472342);

// 	ft_printf("|%25.10lli|\n", (long long int)27323472342);
// 	printf("|%25.10lli|\n\n", (long long int)27323472342);

// 	ft_printf("|%25.*lli|\n", 60, (long long int)27323472342);
// 	printf("|%25.*lli|\n\n", 60, (long long int)27323472342);

// 	ft_printf("|%25.*lli|\n", 60, (long long int)27323472342);
// 	printf("|%25.*lli|\n\n", 60, (long long int)27323472342);

// 	ft_printf("|%*.*lli|\n", 50, 60, (long long int)27323472342);
// 	printf("|%*.*lli|\n\n", 50, 60, (long long int)27323472342);

// 	ft_printf("|%*.60lli|\n", 50, (long long int)27323472342);
// 	printf("|%*.60lli|\n\n", 50, (long long int)27323472342);

// // Width & Precision (with '-')

// 	ft_printf("|%-60lli|\n", (long long int)27323472342);
// 	printf("|%-60lli|\n\n", (long long int)27323472342);

// 	ft_printf("|%-30lli|\n", (long long int)27323472342);
// 	printf("|%-30lli|\n\n", (long long int)27323472342);

// 	ft_printf("|%-.6lli|\n", (long long int)27323472342);
// 	printf("|%-.6lli|\n\n", (long long int)27323472342);

// 	ft_printf("|%-.60lli|\n", (long long int)27323472342);
// 	printf("|%-.60lli|\n\n", (long long int)27323472342);

// 	ft_printf("|%-50.60lli|\n", (long long int)27323472342);
// 	printf("|%-50.60lli|\n\n", (long long int)27323472342);

// 	ft_printf("|%-50.*lli|\n", 60, (long long int)27323472342);
// 	printf("|%-50.*lli|\n\n", 60, (long long int)27323472342);

// 	ft_printf("|%-50.*lli|\n", 60, (long long int)27323472342);
// 	printf("|%-50.*lli|\n\n", 60, (long long int)27323472342);

// 	ft_printf("|%-*.*lli|\n", 50, 60, (long long int)27323472342);
// 	printf("|%-*.*lli|\n\n", 50, 60, (long long int)27323472342);

// 	ft_printf("|%-*.60lli|\n", 50, (long long int)27323472342);
// 	printf("|%-*.60lli|\n\n", 50, (long long int)27323472342);

// // Width & Precision ('-' with '+')

// 	ft_printf("|%+-60lli|\n", (long long int)27323472342);
// 	printf("|%+-60lli|\n\n", (long long int)27323472342);

// 	ft_printf("|%+-30lli|\n", (long long int)27323472342);
// 	printf("|%+-30lli|\n\n", (long long int)27323472342);

// 	ft_printf("|%+-.6lli|\n", (long long int)27323472342);
// 	printf("|%+-.6lli|\n\n", (long long int)27323472342);

// 	ft_printf("|%+-.60lli|\n", (long long int)27323472342);
// 	printf("|%+-.60lli|\n\n", (long long int)27323472342);

// 	ft_printf("|%+-50.60lli|\n", (long long int)27323472342);
// 	printf("|%+-50.60lli|\n\n", (long long int)27323472342);

// 	ft_printf("|%+-50.*lli|\n", 60, (long long int)27323472342);
// 	printf("|%+-50.*lli|\n\n", 60, (long long int)27323472342);

// 	ft_printf("|%+-50.*lli|\n", 60, (long long int)27323472342);
// 	printf("|%+-50.*lli|\n\n", 60, (long long int)27323472342);

// 	ft_printf("|%+-*.*lli|\n", 50, 60, (long long int)27323472342);
// 	printf("|%+-*.*lli|\n\n", 50, 60, (long long int)27323472342);

// 	ft_printf("|%+-*.60lli|\n", 50, (long long int)27323472342);
// 	printf("|%+-*.60lli|\n\n", 50, (long long int)27323472342);

// // Width & Precision ('-' with '+')

// 	ft_printf("|%+-60lli|\n", (long long int)-27323472342);
// 	printf("|%+-60lli|\n\n", (long long int)-27323472342);

// 	ft_printf("|%+-30lli|\n", (long long int)-27323472342);
// 	printf("|%+-30lli|\n\n", (long long int)-27323472342);

// 	ft_printf("|%+-.6lli|\n", (long long int)-27323472342);
// 	printf("|%+-.6lli|\n\n", (long long int)-27323472342);

// 	ft_printf("|%+-.60lli|\n", (long long int)-27323472342);
// 	printf("|%+-.60lli|\n\n", (long long int)-27323472342);

// 	ft_printf("|%+-50.60lli|\n", (long long int)-27323472342);
// 	printf("|%+-50.60lli|\n\n", (long long int)-27323472342);

// 	ft_printf("|%+-50.*lli|\n", 60, (long long int)-27323472342);
// 	printf("|%+-50.*lli|\n\n", 60, (long long int)-27323472342);

// 	ft_printf("|%+-50.*lli|\n", 60, (long long int)-27323472342);
// 	printf("|%+-50.*lli|\n\n", 60, (long long int)-27323472342);

// 	ft_printf("|%+-*.*lli|\n", 50, 60, (long long int)-27323472342);
// 	printf("|%+-*.*lli|\n\n", 50, 60, (long long int)-27323472342);

// 	ft_printf("|%+-*.60lli|\n", 50, (long long int)-27323472342);
// 	printf("|%+-*.60lli|\n\n", 50, (long long int)-27323472342);

// // Width & Precision ('-' with ' ')

// 	ft_printf("|% -60lli|\n", (long long int)27323472342);
// 	printf("|% -60lli|\n\n", (long long int)27323472342);

// 	ft_printf("|% -30lli|\n", (long long int)27323472342);
// 	printf("|% -30lli|\n\n", (long long int)27323472342);

// 	ft_printf("|% -.6lli|\n", (long long int)27323472342);
// 	printf("|% -.6lli|\n\n", (long long int)27323472342);

// 	ft_printf("|% -.60lli|\n", (long long int)27323472342);
// 	printf("|% -.60lli|\n\n", (long long int)27323472342);

// 	ft_printf("|% -50.60lli|\n", (long long int)27323472342);
// 	printf("|% -50.60lli|\n\n", (long long int)27323472342);

// 	ft_printf("|% -50.*lli|\n", 60, (long long int)27323472342);
// 	printf("|% -50.*lli|\n\n", 60, (long long int)27323472342);

// 	ft_printf("|% -50.*lli|\n", 60, (long long int)27323472342);
// 	printf("|% -50.*lli|\n\n", 60, (long long int)27323472342);

// 	ft_printf("|% -*.*lli|\n", 50, 60, (long long int)27323472342);
// 	printf("|% -*.*lli|\n\n", 50, 60, (long long int)27323472342);

// 	ft_printf("|% -*.60lli|\n", 50, (long long int)27323472342);
// 	printf("|% -*.60lli|\n\n", 50, (long long int)27323472342);

// // Width & Precision ' ')

// 	ft_printf("|% 60lli|\n", (long long int)27323472342);
// 	printf("|% 60lli|\n\n", (long long int)27323472342);

// 	ft_printf("|% 30lli|\n", (long long int)27323472342);
// 	printf("|% 30lli|\n\n", (long long int)27323472342);

// 	ft_printf("|% .6lli|\n", (long long int)27323472342);
// 	printf("|% .6lli|\n\n", (long long int)27323472342);

// 	ft_printf("|% .60lli|\n", (long long int)27323472342);
// 	printf("|% .60lli|\n\n", (long long int)27323472342);

// 	ft_printf("|% 50.60lli|\n", (long long int)27323472342);
// 	printf("|% 50.60lli|\n\n", (long long int)27323472342);

// 	ft_printf("|% 50.*lli|\n", 60, (long long int)27323472342);
// 	printf("|% 50.*lli|\n\n", 60, (long long int)27323472342);

// 	ft_printf("|% 50.*lli|\n", 60, (long long int)27323472342);
// 	printf("|% 50.*lli|\n\n", 60, (long long int)27323472342);

// 	ft_printf("|% *.*lli|\n", 50, 60, (long long int)27323472342);
// 	printf("|% *.*lli|\n\n", 50, 60, (long long int)27323472342);

// 	ft_printf("|% *.60lli|\n", 50, (long long int)27323472342);
// 	printf("|% *.60lli|\n\n", 50, (long long int)27323472342);

// // Width & Precision ('0')

// 	ft_printf("|%060lli|\n", (long long int)27323472342);
// 	printf("|%060lli|\n\n", (long long int)27323472342);

// 	ft_printf("|%030lli|\n", (long long int)27323472342);
// 	printf("|%030lli|\n\n", (long long int)27323472342);

// 	ft_printf("|%0.6lli|\n", (long long int)27323472342);
// 	printf("|%0.6lli|\n\n", (long long int)27323472342);

// 	ft_printf("|%0.60lli|\n", (long long int)27323472342);
// 	printf("|%0.60lli|\n\n", (long long int)27323472342);

// 	ft_printf("|%050.60lli|\n", (long long int)27323472342);
// 	printf("|%050.60lli|\n\n", (long long int)27323472342);

// 	ft_printf("|%050.*lli|\n", 60, (long long int)27323472342);
// 	printf("|%050.*lli|\n\n", 60, (long long int)27323472342);

// 	ft_printf("|%050.*lli|\n", 60, (long long int)27323472342);
// 	printf("|%050.*lli|\n\n", 60, (long long int)27323472342);

// 	ft_printf("|%0*.*lli|\n", 50, 60, (long long int)27323472342);
// 	printf("|%0*.*lli|\n\n", 50, 60, (long long int)27323472342);

// 	ft_printf("|%0*.60lli|\n", 50, (long long int)27323472342);
// 	printf("|%0*.60lli|\n\n", 50, (long long int)27323472342);

/* — — — — – – – – – – – – – – – – – – – – – – – – – –  */

// /* %u SPECIFIER TESTS */

// /**
//  * Only takes the following flags & fields:
//  *
//  * 		– Flag: '-', '0'
//  *       - Width: defined or '*'
//  *       - Precision: defined or '*'
//  *       - Length: 'h', 'hh', 'l', 'll'
//  *
//  */

// // MAXs & MINs

// 	ft_printf("|%hhu|\n",  (unsigned char)UCHAR_MAX);
// 	printf("|%hhu|\n\n",   (unsigned char)UCHAR_MAX);

// 	ft_printf("|%hu|\n",   (unsigned short)USHORT_MAX);
// 	printf("|%hu|\n\n",    (unsigned short)USHORT_MAX);

// 	ft_printf("|%u|\n",    (unsigned int)UINT_MAX);
// 	printf("|%u|\n\n",     (unsigned int)UINT_MAX);

// 	ft_printf("|%lu|\n",   (unsigned long)ULONG_MAX);
// 	printf("|%lu|\n\n",    (unsigned long)ULONG_MAX);

// 	ft_printf("|%llu|\n",  (unsigned long long)ULLONG_MAX);
// 	printf("|%llu|\n\n",   (unsigned long long)ULLONG_MAX);


// /* ++++++++++++++++++++++++++++ LENGTH HH +++++++++++++++++++++++++++ */
// /* ++++++++++++++++++++++++++++ LENGTH HH +++++++++++++++++++++++++++ */


// // Width & Precision (with no flags)

// 	ft_printf("|%10hhu|\n", (unsigned char)112);
// 	printf("|%10hhu|\n\n", (unsigned char)112);

// 	ft_printf("|%30hhu|\n", (unsigned char)112);
// 	printf("|%30hhu|\n\n", (unsigned char)112);

// 	ft_printf("|%.6hhu|\n", (unsigned char)112);
// 	printf("|%.6hhu|\n\n", (unsigned char)112);

// 	ft_printf("|%.10hhu|\n", (unsigned char)112);
// 	printf("|%.10hhu|\n\n", (unsigned char)112);

// 	ft_printf("|%25.10hhu|\n", (unsigned char)112);
// 	printf("|%25.10hhu|\n\n", (unsigned char)112);

// 	ft_printf("|%25.*hhu|\n", 10, (unsigned char)112);
// 	printf("|%25.*hhu|\n\n", 10, (unsigned char)112);

// 	ft_printf("|%25.*hhu|\n", 10, (unsigned char)112);
// 	printf("|%25.*hhu|\n\n", 10, (unsigned char)112);

// 	ft_printf("|%*.*hhu|\n", 25, 10, (unsigned char)112);
// 	printf("|%*.*hhu|\n\n", 25, 10, (unsigned char)112);

// 	ft_printf("|%*.10hhu|\n", 25, (unsigned char)112);
// 	printf("|%*.10hhu|\n\n", 25, (unsigned char)112);

// // Width & Precision (with '-')

// 	ft_printf("|%-10hhu|\n", (unsigned char)112);
// 	printf("|%-10hhu|\n\n", (unsigned char)112);

// 	ft_printf("|%-30hhu|\n", (unsigned char)112);
// 	printf("|%-30hhu|\n\n", (unsigned char)112);

// 	ft_printf("|%-.6hhu|\n", (unsigned char)112);
// 	printf("|%-.6hhu|\n\n", (unsigned char)112);

// 	ft_printf("|%-.10hhu|\n", (unsigned char)112);
// 	printf("|%-.10hhu|\n\n", (unsigned char)112);

// 	ft_printf("|%-25.10hhu|\n", (unsigned char)112);
// 	printf("|%-25.10hhu|\n\n", (unsigned char)112);

// 	ft_printf("|%-25.*hhu|\n", 10, (unsigned char)112);
// 	printf("|%-25.*hhu|\n\n", 10, (unsigned char)112);

// 	ft_printf("|%-25.*hhu|\n", 10, (unsigned char)112);
// 	printf("|%-25.*hhu|\n\n", 10, (unsigned char)112);

// 	ft_printf("|%-*.*hhu|\n", 25, 10, (unsigned char)112);
// 	printf("|%-*.*hhu|\n\n", 25, 10, (unsigned char)112);

// 	ft_printf("|%-*.10hhu|\n", 25, (unsigned char)112);
// 	printf("|%-*.10hhu|\n\n", 25, (unsigned char)112);

// // Width & Precision ('-')

// 	ft_printf("|%-10hhu|\n", (unsigned char)112);
// 	printf("|%-10hhu|\n\n", (unsigned char)112);

// 	ft_printf("|%-30hhu|\n", (unsigned char)112);
// 	printf("|%-30hhu|\n\n", (unsigned char)112);

// 	ft_printf("|%-.6hhu|\n", (unsigned char)112);
// 	printf("|%-.6hhu|\n\n", (unsigned char)112);

// 	ft_printf("|%-.10hhu|\n", (unsigned char)112);
// 	printf("|%-.10hhu|\n\n", (unsigned char)112);

// 	ft_printf("|%-25.10hhu|\n", (unsigned char)112);
// 	printf("|%-25.10hhu|\n\n", (unsigned char)112);

// 	ft_printf("|%-25.*hhu|\n", 10, (unsigned char)112);
// 	printf("|%-25.*hhu|\n\n", 10, (unsigned char)112);

// 	ft_printf("|%-25.*hhu|\n", 10, (unsigned char)112);
// 	printf("|%-25.*hhu|\n\n", 10, (unsigned char)112);

// 	ft_printf("|%-*.*hhu|\n", 25, 10, (unsigned char)112);
// 	printf("|%-*.*hhu|\n\n", 25, 10, (unsigned char)112);

// 	ft_printf("|%-*.10hhu|\n", 25, (unsigned char)112);
// 	printf("|%-*.10hhu|\n\n", 25, (unsigned char)112);

// // Width & Precision ('0')

// 	ft_printf("|%010hhu|\n", (unsigned char)112);
// 	printf("|%010hhu|\n\n", (unsigned char)112);

// 	ft_printf("|%030hhu|\n", (unsigned char)112);
// 	printf("|%030hhu|\n\n", (unsigned char)112);

// 	ft_printf("|%0.6hhu|\n", (unsigned char)112);
// 	printf("|%0.6hhu|\n\n", (unsigned char)112);

// 	ft_printf("|%0.10hhu|\n", (unsigned char)112);
// 	printf("|%0.10hhu|\n\n", (unsigned char)112);

// 	ft_printf("|%025.10hhu|\n", (unsigned char)112);
// 	printf("|%025.10hhu|\n\n", (unsigned char)112);

// 	ft_printf("|%025.*hhu|\n", 10, (unsigned char)112);
// 	printf("|%025.*hhu|\n\n", 10, (unsigned char)112);

// 	ft_printf("|%025.*hhu|\n", 10, (unsigned char)112);
// 	printf("|%025.*hhu|\n\n", 10, (unsigned char)112);

// 	ft_printf("|%0*.*hhu|\n", 25, 10, (unsigned char)112);
// 	printf("|%0*.*hhu|\n\n", 25, 10, (unsigned char)112);

// 	ft_printf("|%0*.10hhu|\n", 25, (unsigned char)112);
// 	printf("|%0*.10hhu|\n\n", 25, (unsigned char)112);


// /* ++++++++++++++++++++++++++++ LENGTH H +++++++++++++++++++++++++++ */
// /* ++++++++++++++++++++++++++++ LENGTH H +++++++++++++++++++++++++++ */

// // Width & Precision (with no flags)

// 	ft_printf("|%10hu|\n", (unsigned short)27352);
// 	printf("|%10hu|\n\n", (unsigned short)27352);

// 	ft_printf("|%30hu|\n", (unsigned short)27352);
// 	printf("|%30hu|\n\n", (unsigned short)27352);

// 	ft_printf("|%.6hu|\n", (unsigned short)27352);
// 	printf("|%.6hu|\n\n", (unsigned short)27352);

// 	ft_printf("|%.10hu|\n", (unsigned short)27352);
// 	printf("|%.10hu|\n\n", (unsigned short)27352);

// 	ft_printf("|%25.10hu|\n", (unsigned short)27352);
// 	printf("|%25.10hu|\n\n", (unsigned short)27352);

// 	ft_printf("|%25.*hu|\n", 10, (unsigned short)27352);
// 	printf("|%25.*hu|\n\n", 10, (unsigned short)27352);

// 	ft_printf("|%25.*hu|\n", 10, (unsigned short)27352);
// 	printf("|%25.*hu|\n\n", 10, (unsigned short)27352);

// 	ft_printf("|%*.*hu|\n", 25, 10, (unsigned short)27352);
// 	printf("|%*.*hu|\n\n", 25, 10, (unsigned short)27352);

// 	ft_printf("|%*.10hu|\n", 25, (unsigned short)27352);
// 	printf("|%*.10hu|\n\n", 25, (unsigned short)27352);

// // Width & Precision (with '-')

// 	ft_printf("|%-10hu|\n", (unsigned short)27352);
// 	printf("|%-10hu|\n\n", (unsigned short)27352);

// 	ft_printf("|%-30hu|\n", (unsigned short)27352);
// 	printf("|%-30hu|\n\n", (unsigned short)27352);

// 	ft_printf("|%-.6hu|\n", (unsigned short)27352);
// 	printf("|%-.6hu|\n\n", (unsigned short)27352);

// 	ft_printf("|%-.10hu|\n", (unsigned short)27352);
// 	printf("|%-.10hu|\n\n", (unsigned short)27352);

// 	ft_printf("|%-25.10hu|\n", (unsigned short)27352);
// 	printf("|%-25.10hu|\n\n", (unsigned short)27352);

// 	ft_printf("|%-25.*hu|\n", 10, (unsigned short)27352);
// 	printf("|%-25.*hu|\n\n", 10, (unsigned short)27352);

// 	ft_printf("|%-25.*hu|\n", 10, (unsigned short)27352);
// 	printf("|%-25.*hu|\n\n", 10, (unsigned short)27352);

// 	ft_printf("|%-*.*hu|\n", 25, 10, (unsigned short)27352);
// 	printf("|%-*.*hu|\n\n", 25, 10, (unsigned short)27352);

// 	ft_printf("|%-*.10hu|\n", 25, (unsigned short)27352);
// 	printf("|%-*.10hu|\n\n", 25, (unsigned short)27352);

// // Width & Precision ('0')

// 	ft_printf("|%010hu|\n", (unsigned short)27352);
// 	printf("|%010hu|\n\n", (unsigned short)27352);

// 	ft_printf("|%030hu|\n", (unsigned short)27352);
// 	printf("|%030hu|\n\n", (unsigned short)27352);

// 	ft_printf("|%0.6hu|\n", (unsigned short)27352);
// 	printf("|%0.6hu|\n\n", (unsigned short)27352);

// 	ft_printf("|%0.10hu|\n", (unsigned short)27352);
// 	printf("|%0.10hu|\n\n", (unsigned short)27352);

// 	ft_printf("|%025.10hu|\n", (unsigned short)27352);
// 	printf("|%025.10hu|\n\n", (unsigned short)27352);

// 	ft_printf("|%025.*hu|\n", 10, (unsigned short)27352);
// 	printf("|%025.*hu|\n\n", 10, (unsigned short)27352);

// 	ft_printf("|%025.*hu|\n", 10, (unsigned short)27352);
// 	printf("|%025.*hu|\n\n", 10, (unsigned short)27352);

// 	ft_printf("|%0*.*hu|\n", 25, 10, (unsigned short)27352);
// 	printf("|%0*.*hu|\n\n", 25, 10, (unsigned short)27352);

// 	ft_printf("|%0*.10hu|\n", 25, (unsigned short)27352);
// 	printf("|%0*.10hu|\n\n", 25, (unsigned short)27352);


// /* ++++++++++++++++++++++++++++ LENGTH DEFAULT +++++++++++++++++++++++++++ */
// /* ++++++++++++++++++++++++++++ LENGTH DEFAULT +++++++++++++++++++++++++++ */


// // Width & Precision (with no flags)

// 	ft_printf("|%10u|\n", (unsigned int)12345);
// 	printf("|%10u|\n\n", (unsigned int)12345);

// 	ft_printf("|%30u|\n", (unsigned int)12345);
// 	printf("|%30u|\n\n", (unsigned int)12345);

// 	ft_printf("|%.6u|\n", (unsigned int)12345);
// 	printf("|%.6u|\n\n", (unsigned int)12345);

// 	ft_printf("|%.10u|\n", (unsigned int)12345);
// 	printf("|%.10u|\n\n", (unsigned int)12345);

// 	ft_printf("|%25.10u|\n", (unsigned int)12345);
// 	printf("|%25.10u|\n\n", (unsigned int)12345);

// 	ft_printf("|%25.*u|\n", 10, (unsigned int)12345);
// 	printf("|%25.*u|\n\n", 10, (unsigned int)12345);

// 	ft_printf("|%25.*u|\n", 10, (unsigned int)12345);
// 	printf("|%25.*u|\n\n", 10, (unsigned int)12345);

// 	ft_printf("|%*.*u|\n", 25, 10, (unsigned int)12345);
// 	printf("|%*.*u|\n\n", 25, 10, (unsigned int)12345);

// 	ft_printf("|%*.10u|\n", 25, (unsigned int)12345);
// 	printf("|%*.10u|\n\n", 25, (unsigned int)12345);

// // Width & Precision (with '-')

// 	ft_printf("|%-10u|\n", (unsigned int)12345);
// 	printf("|%-10u|\n\n", (unsigned int)12345);

// 	ft_printf("|%-30u|\n", (unsigned int)12345);
// 	printf("|%-30u|\n\n", (unsigned int)12345);

// 	ft_printf("|%-.6u|\n", (unsigned int)12345);
// 	printf("|%-.6u|\n\n", (unsigned int)12345);

// 	ft_printf("|%-.10u|\n", (unsigned int)12345);
// 	printf("|%-.10u|\n\n", (unsigned int)12345);

// 	ft_printf("|%-25.10u|\n", (unsigned int)12345);
// 	printf("|%-25.10u|\n\n", (unsigned int)12345);

// 	ft_printf("|%-25.*u|\n", 10, (unsigned int)12345);
// 	printf("|%-25.*u|\n\n", 10, (unsigned int)12345);

// 	ft_printf("|%-25.*u|\n", 10, (unsigned int)12345);
// 	printf("|%-25.*u|\n\n", 10, (unsigned int)12345);

// 	ft_printf("|%-*.*u|\n", 25, 10, (unsigned int)12345);
// 	printf("|%-*.*u|\n\n", 25, 10, (unsigned int)12345);

// 	ft_printf("|%-*.10u|\n", 25, (unsigned int)12345);
// 	printf("|%-*.10u|\n\n", 25, (unsigned int)12345);

// // Width & Precision ('0')

// 	ft_printf("|%010u|\n", (unsigned int)12345);
// 	printf("|%010u|\n\n", (unsigned int)12345);

// 	ft_printf("|%030u|\n", (unsigned int)12345);
// 	printf("|%030u|\n\n", (unsigned int)12345);

// 	ft_printf("|%0.6u|\n", (unsigned int)12345);
// 	printf("|%0.6u|\n\n", (unsigned int)12345);

// 	ft_printf("|%0.10u|\n", (unsigned int)12345);
// 	printf("|%0.10u|\n\n", (unsigned int)12345);

// 	ft_printf("|%025.10u|\n", (unsigned int)12345);
// 	printf("|%025.10u|\n\n", (unsigned int)12345);

// 	ft_printf("|%025.*u|\n", 10, (unsigned int)12345);
// 	printf("|%025.*u|\n\n", 10, (unsigned int)12345);

// 	ft_printf("|%025.*u|\n", 10, (unsigned int)12345);
// 	printf("|%025.*u|\n\n", 10, (unsigned int)12345);

// 	ft_printf("|%0*.*u|\n", 25, 10, (unsigned int)12345);
// 	printf("|%0*.*u|\n\n", 25, 10, (unsigned int)12345);

// 	ft_printf("|%0*.10u|\n", 25, (unsigned int)12345);
// 	printf("|%0*.10u|\n\n", 25, (unsigned int)12345);


// /* ++++++++++++++++++++++++++++ LENGTH L +++++++++++++++++++++++++++ */
// /* ++++++++++++++++++++++++++++ LENGTH L +++++++++++++++++++++++++++ */


// // Width & Precision (with no flags)

// 	ft_printf("|%10lu|\n", (unsigned long)52728623);
// 	printf("|%10lu|\n\n", (unsigned long)52728623);

// 	ft_printf("|%30lu|\n", (unsigned long)52728623);
// 	printf("|%30lu|\n\n", (unsigned long)52728623);

// 	ft_printf("|%.6lu|\n", (unsigned long)52728623);
// 	printf("|%.6lu|\n\n", (unsigned long)52728623);

// 	ft_printf("|%.10lu|\n", (unsigned long)52728623);
// 	printf("|%.10lu|\n\n", (unsigned long)52728623);

// 	ft_printf("|%40.10lu|\n", (unsigned long)52728623);
// 	printf("|%40.10lu|\n\n", (unsigned long)52728623);

// 	ft_printf("|%40.*lu|\n", 10, (unsigned long)52728623);
// 	printf("|%40.*lu|\n\n", 10, (unsigned long)52728623);

// 	ft_printf("|%40.*lu|\n", 10, (unsigned long)52728623);
// 	printf("|%40.*lu|\n\n", 10, (unsigned long)52728623);

// 	ft_printf("|%*.*lu|\n", 40, 10, (unsigned long)52728623);
// 	printf("|%*.*lu|\n\n", 40, 10, (unsigned long)52728623);

// 	ft_printf("|%*.10lu|\n", 40, (unsigned long)52728623);
// 	printf("|%*.10lu|\n\n", 40, (unsigned long)52728623);

// // Width & Precision (with '-')

// 	ft_printf("|%-10lu|\n", (unsigned long)52728623);
// 	printf("|%-10lu|\n\n", (unsigned long)52728623);

// 	ft_printf("|%-30lu|\n", (unsigned long)52728623);
// 	printf("|%-30lu|\n\n", (unsigned long)52728623);

// 	ft_printf("|%-.6lu|\n", (unsigned long)52728623);
// 	printf("|%-.6lu|\n\n", (unsigned long)52728623);

// 	ft_printf("|%-.10lu|\n", (unsigned long)52728623);
// 	printf("|%-.10lu|\n\n", (unsigned long)52728623);

// 	ft_printf("|%-40.10lu|\n", (unsigned long)52728623);
// 	printf("|%-40.10lu|\n\n", (unsigned long)52728623);

// 	ft_printf("|%-40.*lu|\n", 10, (unsigned long)52728623);
// 	printf("|%-40.*lu|\n\n", 10, (unsigned long)52728623);

// 	ft_printf("|%-40.*lu|\n", 10, (unsigned long)52728623);
// 	printf("|%-40.*lu|\n\n", 10, (unsigned long)52728623);

// 	ft_printf("|%-*.*lu|\n", 40, 10, (unsigned long)52728623);
// 	printf("|%-*.*lu|\n\n", 40, 10, (unsigned long)52728623);

// 	ft_printf("|%-*.10lu|\n", 40, (unsigned long)52728623);
// 	printf("|%-*.10lu|\n\n", 40, (unsigned long)52728623);

// // Width & Precision ('0')

// 	ft_printf("|%010lu|\n", (unsigned long)52728623);
// 	printf("|%010lu|\n\n", (unsigned long)52728623);

// 	ft_printf("|%030lu|\n", (unsigned long)52728623);
// 	printf("|%030lu|\n\n", (unsigned long)52728623);

// 	ft_printf("|%0.6lu|\n", (unsigned long)52728623);
// 	printf("|%0.6lu|\n\n", (unsigned long)52728623);

// 	ft_printf("|%0.10lu|\n", (unsigned long)52728623);
// 	printf("|%0.10lu|\n\n", (unsigned long)52728623);

// 	ft_printf("|%040.10lu|\n", (unsigned long)52728623);
// 	printf("|%040.10lu|\n\n", (unsigned long)52728623);

// 	ft_printf("|%040.*lu|\n", 10, (unsigned long)52728623);
// 	printf("|%040.*lu|\n\n", 10, (unsigned long)52728623);

// 	ft_printf("|%040.*lu|\n", 10, (unsigned long)52728623);
// 	printf("|%040.*lu|\n\n", 10, (unsigned long)52728623);

// 	ft_printf("|%0*.*lu|\n", 40, 10, (unsigned long)52728623);
// 	printf("|%0*.*lu|\n\n", 40, 10, (unsigned long)52728623);

// 	ft_printf("|%0*.10lu|\n", 40, (unsigned long)52728623);
// 	printf("|%0*.10lu|\n\n", 40, (unsigned long)52728623);


// /* ++++++++++++++++++++++++++++ LENGTH LL +++++++++++++++++++++++++++ */
// /* ++++++++++++++++++++++++++++ LENGTH LL +++++++++++++++++++++++++++ */


// // Width & Precision (with no flags)

// 	ft_printf("|%10llu|\n", (long long int)27323472342);
// 	printf("|%10llu|\n\n", (long long int)27323472342);

// 	ft_printf("|%30llu|\n", (long long int)27323472342);
// 	printf("|%30llu|\n\n", (long long int)27323472342);

// 	ft_printf("|%.6llu|\n", (long long int)27323472342);
// 	printf("|%.6llu|\n\n", (long long int)27323472342);

// 	ft_printf("|%.10llu|\n", (long long int)27323472342);
// 	printf("|%.10llu|\n\n", (long long int)27323472342);

// 	ft_printf("|%25.10llu|\n", (long long int)27323472342);
// 	printf("|%25.10llu|\n\n", (long long int)27323472342);

// 	ft_printf("|%25.*llu|\n", 60, (long long int)27323472342);
// 	printf("|%25.*llu|\n\n", 60, (long long int)27323472342);

// 	ft_printf("|%25.*llu|\n", 60, (long long int)27323472342);
// 	printf("|%25.*llu|\n\n", 60, (long long int)27323472342);

// 	ft_printf("|%*.*llu|\n", 50, 60, (long long int)27323472342);
// 	printf("|%*.*llu|\n\n", 50, 60, (long long int)27323472342);

// 	ft_printf("|%*.60llu|\n", 50, (long long int)27323472342);
// 	printf("|%*.60llu|\n\n", 50, (long long int)27323472342);

// // Width & Precision (with '-')

// 	ft_printf("|%-60llu|\n", (long long int)27323472342);
// 	printf("|%-60llu|\n\n", (long long int)27323472342);

// 	ft_printf("|%-30llu|\n", (long long int)27323472342);
// 	printf("|%-30llu|\n\n", (long long int)27323472342);

// 	ft_printf("|%-.6llu|\n", (long long int)27323472342);
// 	printf("|%-.6llu|\n\n", (long long int)27323472342);

// 	ft_printf("|%-.60llu|\n", (long long int)27323472342);
// 	printf("|%-.60llu|\n\n", (long long int)27323472342);

// 	ft_printf("|%-50.60llu|\n", (long long int)27323472342);
// 	printf("|%-50.60llu|\n\n", (long long int)27323472342);

// 	ft_printf("|%-50.*llu|\n", 60, (long long int)27323472342);
// 	printf("|%-50.*llu|\n\n", 60, (long long int)27323472342);

// 	ft_printf("|%-50.*llu|\n", 60, (long long int)27323472342);
// 	printf("|%-50.*llu|\n\n", 60, (long long int)27323472342);

// 	ft_printf("|%-*.*llu|\n", 50, 60, (long long int)27323472342);
// 	printf("|%-*.*llu|\n\n", 50, 60, (long long int)27323472342);

// 	ft_printf("|%-*.60llu|\n", 50, (long long int)27323472342);
// 	printf("|%-*.60llu|\n\n", 50, (long long int)27323472342);

// // Width & Precision ('0')

// 	ft_printf("|%060llu|\n", (long long int)27323472342);
// 	printf("|%060llu|\n\n", (long long int)27323472342);

// 	ft_printf("|%030llu|\n", (long long int)27323472342);
// 	printf("|%030llu|\n\n", (long long int)27323472342);

// 	ft_printf("|%0.6llu|\n", (long long int)27323472342);
// 	printf("|%0.6llu|\n\n", (long long int)27323472342);

// 	ft_printf("|%0.60llu|\n", (long long int)27323472342);
// 	printf("|%0.60llu|\n\n", (long long int)27323472342);

// 	ft_printf("|%050.60llu|\n", (long long int)27323472342);
// 	printf("|%050.60llu|\n\n", (long long int)27323472342);

// 	ft_printf("|%050.*llu|\n", 60, (long long int)27323472342);
// 	printf("|%050.*llu|\n\n", 60, (long long int)27323472342);

// 	ft_printf("|%050.*llu|\n", 60, (long long int)27323472342);
// 	printf("|%050.*llu|\n\n", 60, (long long int)27323472342);

// 	ft_printf("|%0*.*llu|\n", 50, 60, (long long int)27323472342);
// 	printf("|%0*.*llu|\n\n", 50, 60, (long long int)27323472342);

// 	ft_printf("|%0*.60llu|\n", 50, (long long int)27323472342);
// 	printf("|%0*.60llu|\n\n", 50, (long long int)27323472342);


/* — — — — – – – – – – – – – – – – – – – – – – – – – –  */

/* %o SPECIFIER TESTS */

/**
 * Only takes the following flags & fields:
 *
**
**             Flags: '-', '+', ' ', '0'
**             Width: defined or '*'
**             Precision: defined or '*'
**             Length: 'L'
 *
 */

// MAXs & MINs --------------------------------------------- */

	// ft_printf("|%f|\n",  (double)127.0);
	// printf("|%f|\n\n",   (double)127.0);

	// ft_printf("|%f|\n",   (double)USHORT_MAX);
	// printf("|%f|\n\n",    (double)USHORT_MAX);

	// ft_printf("|%f|\n",    (double)UINT_MAX);
	// printf("|%f|\n\n",     (double)UINT_MAX);

	// ft_printf("|%f|\n",   (double)ULONG_MAX);
	// printf("|%f|\n\n",    (double)ULONG_MAX);

	// ft_printf("|%f|\n",  (double)ULLONG_MAX);
	// printf("|%f|\n\n",   (double)ULLONG_MAX);

	// ft_printf("|%f|\n",  (double)CHAR_MIN);
	// printf("|%f|\n\n",   (double)CHAR_MIN);

	// ft_printf("|%f|\n",   (double)SHORT_MIN);
	// printf("|%f|\n\n",    (double)SHORT_MIN);

	// ft_printf("|%f|\n",    (double)INT_MIN);
	// printf("|%f|\n\n",     (double)INT_MIN);

	// ft_printf("|%f|\n",   (double)LONG_MIN);
	// printf("|%f|\n\n",    (double)LONG_MIN);

	// ft_printf("|%f|\n",  (double)LLONG_MIN);
	// printf("|%f|\n\n",   (double)LLONG_MIN);

// /* --------------------------------------------- */

	// ft_printf("|%f|\n", 0.2323);
	// printf("|%f|\n\n", 0.2323);

	// ft_printf("|%f|\n", 0.2323);
	// printf("|%f|\n\n", 0.2323);

	// ft_printf("|%f|\n", 0.2323);
	// printf("|%f|\n\n", 0.2323);


/* — — — — – – – – – – – – – – – – – – – – – – – – – –  */

/* %b SPECIFIER TESTS */

/**
 * Only takes the following flags & fields:
 *
 *
 *             Flags: '-', '+', ' ', '0', '#'
 *             Width: defined or '*'
 *             Precision: defined or '*'
 *             Length: 'hh', 'h', 'l', 'll'
 *
 */

// /* --------------------------------------------- */

// 	ft_printf("|+%.32b|\n", INT_MAX);
// 	ft_printf("|%b|\n\n", INT_MIN);

// 	ft_printf("|+%.*b|\n", 32, INT_MAX);
// 	ft_printf("|%b|\n\n", INT_MIN);

// 	ft_printf("|% b|\n", 90);
// 	ft_printf("|%b|\n\n", -90);

// 	ft_printf("|% b|\n", 100);
// 	ft_printf("|%b|\n\n", -100);

// /* --------------------------------------------- */

// 	ft_printf("|%+#.*b|\n", 32, INT_MAX);
// 	ft_printf("|%#b|\n\n", INT_MIN);

// 	ft_printf("|%+#.32b|\n", INT_MAX);
// 	ft_printf("|%#b|\n\n", INT_MIN);

// 	ft_printf("|% #b|\n", 90);
// 	ft_printf("|%#b|\n\n", -90);

// 	ft_printf("|% #b|\n", 100);
// 	ft_printf("|%#b|\n\n", -100);

// /* --------------------------------------------- */

// 	ft_printf("|%+#60.*b|\n", 32, INT_MAX);
// 	ft_printf("|%#60b|\n\n", INT_MIN);

// 	ft_printf("|%+#60.32b|\n", INT_MAX);
// 	ft_printf("|%#60b|\n\n", INT_MIN);

// 	ft_printf("|% #20b|\n", 90);
// 	ft_printf("|%#20b|\n\n", -90);

// 	ft_printf("|% #20b|\n", 100);
// 	ft_printf("|%#20b|\n\n", -100);


/* — — — — – – – – – – – – – – – – – – – – – – – – – –  */

/* %o SPECIFIER TESTS */

/**
 * Only takes the following flags & fields:
 *
**
**             Flags: '-', '+', ' ', '0', '#'
**             Width: defined or '*'
**             Precision: defined or '*'
**             Length: 'hh', 'h', 'l', 'll'
 *
 */

	// ft_printf("|%p|\n", (void *)0);
	// printf("|%p|\n\n", (void *)0);

/* — — — — – – – – – – – – – – – – – – – – – – – – – –  */

/* %x SPECIFIER TESTS */

/**
 * Only takes the following flags & fields:
 *
**
**             Flags: '-', '+', ' ', '0', '#'
**             Width: defined or '*'
**             Precision: defined or '*'
**             Length: 'hh', 'h', 'l', 'll'
 *
 */

	// ft_printf("|%p|\n", (void *)0);
	// printf("|%p|\n\n", (void *)0);

/* — — — — – – – – – – – – – – – – – – – – – – – – – –  */

/* %X SPECIFIER TESTS */

/**
 * Only takes the following flags & fields:
 *
**
**             Flags: '-', '+', ' ', '0', '#'
**             Width: defined or '*'
**             Precision: defined or '*'
**             Length: 'hh', 'h', 'l', 'll'
 *
 */

	// ft_printf("|%X|\n",  (signed char)CHAR_MAX);
	// printf("|%X|\n\n",   (signed char)CHAR_MAX);
	// ft_printf("|%X|\n",  (signed char)CHAR_MIN);
	// printf("|%X|\n\n",   (signed char)CHAR_MIN);

	// ft_printf("|%X|\n",   (short int)SHORT_MAX);
	// printf("|%X|\n\n",    (short int)SHORT_MAX);
	// ft_printf("|%X|\n",   (short int)SHORT_MIN);
	// printf("|%X|\n\n",    (short int)SHORT_MIN);

	// ft_printf("|%X|\n",    (int)INT_MAX);
	// printf("|%X|\n\n",     (int)INT_MAX);
	// ft_printf("|%X|\n",    (int)INT_MIN);
	// printf("|%X|\n\n",     (int)INT_MIN);

	// ft_printf("|%X|\n",   (long int)LONG_MAX);
	// printf("|%X|\n\n",    (long int)LONG_MAX);
	// ft_printf("|%X|\n",   (long int)-9223372036854775807);
	// printf("|%X|\n\n",    (long int)-9223372036854775807);

	// ft_printf("|%X|\n",  (long long)LLONG_MAX);
	// printf("|%X|\n\n",   (long long)LLONG_MAX);

/* — — — — – – – – – – – – – – – – – – – – – – – – – –  */


	// ft_printf("|%X|\n",    (int)100);
	// printf("|%X|\n\n",     (int)100);

	// ft_printf("|%X|\n",    (int)90);
	// printf("|%X|\n\n",     (int)90);

	// ft_printf("|%20X|\n",    (int)90);
	// printf("|%20X|\n\n",     (int)90);

	// ft_printf("|%.20X|\n",    (int)90);
	// printf("|%.20X|\n\n",     (int)90);

	// ft_printf("|%0.15X|\n",    (int)90);
	// printf("|%0.15X|\n\n",     (int)90);

	// ft_printf("|%.20X|\n",    (int)90);
	// printf("|%.20X|\n\n",     (int)90);


/* — — — — – – – – – – – – – – – – – – – – – – – – – –  */

/* %p SPECIFIER TESTS */

/**
 * Only takes the following flags & fields:
 *
 * 		– Flag: '-',
 *      - Width
 *
 */

	// ft_printf("|%*p|\n", 40, (void *)NULL);
	// printf("|%*p|\n\n", 40, (void *)NULL);

	// ft_printf("|%p|\n", (void *)0);
	// printf("|%p|\n\n", (void *)0);

	// ft_printf("|%-p|\n", av);
	// printf("|%-p|\n\n", av);

	// ft_printf("|%p|\n", &(av[0]));
	// printf("|%p|\n\n", &(av[0]));

	// ft_printf("|%-30p|\n", av[0]);
	// printf("|%-30p|\n\n", av[0]);

	// ft_printf("|%*p|\n", 10, &ft_printf);
	// printf("|%*p|\n\n", 10, &ft_printf);

	// ft_printf("|%*p|\n", 25, &printf);
	// printf("|%*p|\n\n", 60, &printf);

/* — — — — – – – – – – – – – – – – – – – – – – – – – –  */

/* {styles} SPECIFIER TESTS */

	// ft_printf("|%*p|\n", 40, (void *)NULL);
	// printf("|%*p|\n\n", 40, (void *)NULL);

	// ft_printf("|%p|\n", (void *)0);
	// printf("|%p|\n\n", (void *)0);

	// ft_printf("|%-p|\n", av);
	// printf("|%-p|\n\n", av);

	// ft_printf("|%p|\n", &(av[0]));
	// printf("|%p|\n\n", &(av[0]));

	// ft_printf("|%-30p|\n", av[0]);
	// printf("|%-30p|\n\n", av[0]);

	// ft_printf("|%*p|\n", 10, &ft_printf);
	// printf("|%*p|\n\n", 10, &ft_printf);

	// ft_printf("|%*p|\n", 25, &printf);
	// printf("|%*p|\n\n", 60, &printf);

/* — — — — – – – – – – – – – – – – – – – – – – – – – –  */

	// ft_printf("%s{red underlined bglyellow}", "James");
	// ft_printf("%s{red bgwhite underlined} said %s{lyellow} %s{bgred}\n", "James", "whatt", "???");

	// ft_printf("%r{lyellow bgred}%p{bgred}%s{bgred}\n", " DANGER ZONE ", NULL, " ! ");

	// ft_printf("%s{dim italic}\n", "/*\n**    NAME\n**         style_handler -- formatted style conversion\n**\n**    SYNOPSIS\n**         #include <libft.h>\n**\n**         char	*\n**         style_handler(t_format format, char *string);\n**\n**    PARAMETERS\n**\n**         t_format format         Structure containing the variable\n**                                 and information about how it must\n**                                 be formatted.\n**\n**         char *string          Output string that we want to style.\n**\n**    DESCRIPTION\n**         Handles the 'style' specification of a formatted string.\n**\n**         Goes through the styles parsed in the format string and\n**         prepends them as their corresponding ANSI code to the output\n**         string.\n**\n**         After having applied all styles, a reset ANSI code is appended\n**         to the end of the output string; this is so that the styling is\n**         not applied to characters that might come after in the output.\n**\n**    RETURN VALUES\n**         If style(s) were specified and successfully applied, the output\n**         string all styled up is returned; otherwise the output string\n**         untouched is returned.\n*/");

	// ft_printf("%s{red inverted}", "hello world");

	// ft_printf("it %s{bglgreen lred inverted}\n", " works! ");

	// printf("[%i] vs [%i]\n", ft_printf("|%lo|\n", (long)INT_MIN), printf("|%lo|\n", (long)INT_MIN));
	// printf("[%i] vs [%i]\n", ft_printf("|%lo|\n", (long)INT_MIN), printf("|%lo|\n", (long)INT_MIN));
	// printf("[%i] vs [%i]\n", ft_printf("|%x|\n", -235), printf("|%x|\n", -235));
	// printf("[%i] vs [%i]\n", ft_printf("|%x|\n", -42), printf("|%x|\n", -42));
	// printf("[%i] vs [%i]\n", ft_printf("|%x|\n", -232082), printf("|%x|\n", -232082));
	// printf("[%i] vs [%i]\n", ft_printf("|%x|\n", 217236), printf("|%x|\n", 217236));
	// printf("[%i] vs [%i]\n", ft_printf("|%o|\n", -235), printf("|%o|\n", -235));
	// printf("[%i] vs [%i]\n", ft_printf("|%o|\n", -42), printf("|%o|\n", -42));
	// printf("[%i] vs [%i]\n", ft_printf("|%o|\n", -232082), printf("|%o|\n", -232082));
	// printf("[%i] vs [%i]\n", ft_printf("|%o|\n", 217236), printf("|%o|\n", 217236));

/* — — — — – – – – – – – – – – – – – – – – – – – – – –  */

    // i = ft_printf("and %c stuff\n", '\0');
    // j =    printf("and %c stuff\n", '\0');

/* — — — — – – – – – – – – – – – – – – – – – – – – – –  */

	// ft_printf("test%#.4o et %02o %#014.0o!!\n", 012, 036, 12587499);
	//    printf("test%#.4o et %02o %#014.0o!!\n", 012, 036, 12587499);

    // i = ft_printf("cc%#.4X et %#0012x %#04hx !!\n", 0xaef, 0xe, (unsigned short)0);
    // j =    printf("cc%#.4X et %#0012x %#04hx !!\n", 0xaef, 0xe, (unsigned short)0);

    // i = ft_printf("test%---10.6x et %01hhX !!\n", 0xaabb, (unsigned char)0);
    // j =    printf("test%---10.6x et %01hhX !!\n", 0xaabb, (unsigned char)0);

    // i = ft_printf("t %#7.5X%0006.2x et %lX!\n", 0xab, 0x876, 0xff11ff11ff1);
    // j =    printf("t %#7.5X%0006.2x et %lX!\n", 0xab, 0x876, 0xff11ff11ff1);

    // i = ft_printf("osef ! %#9llX et %-12hhx\n", (unsigned long long)-1248759650, (unsigned char)-1478223695);
    // j =    printf("osef ! %#9llX et %-12hhx\n", (unsigned long long)-1248759650, (unsigned char)-1478223695);

    // i = ft_printf("%0#10.0x\n", 0);
    // j =    printf("%0#10.0x\n", 0);

    // i = ft_printf("%s\n", NULL);
    // j =    printf("%s\n", NULL);

    // i = ft_printf("%s\n", "coco");
    // j =    printf("%s\n", "coco");

    // i = ft_printf("%--.4u et %#o%#012o%1lc\n", -12, 0, 0, 95);
    // j =    printf("%--.4u et %#o%#012o%1lc\n", -12, 0, 0, 95);

/* — — — — – – – – – – – – – – – – – – – – – – – – – –  */

    // i = ft_printf("%020f\n", -2836.232);
    // j =    printf("%020f\n", -2836.232);

    // i = ft_printf("%020.f\n", -2836.232);
    // j =    printf("%020.f\n", -2836.232);

    // i = ft_printf("%0.f\n", -2836.232);
    // j =    printf("%0.f\n", -2836.232);

    // i = ft_printf("%20.f\n", -2836.232);
    // j =    printf("%20.f\n", -2836.232);

    // i = ft_printf("%f\n", 0.0);
    // j =    printf("%f\n", 0.0);

    // i = ft_printf("%f\n", -0.0);
    // j =    printf("%f\n", -0.0);

    // i = ft_printf("%023f\n", -237.0);
    // j =    printf("%023f\n", -237.0);

    // i = ft_printf("%.23f\n", -0.0);
    // j =    printf("%.23f\n", -0.0);

    // i = ft_printf("%54.23f\n", -0.0);
    // j =    printf("%54.23f\n", -0.0);

    // i = ft_printf("%054.23f\n", -0.0);
    // j =    printf("%054.23f\n", -0.0);

    // i = ft_printf("%+54.23f\n", 0.0);
    // j =    printf("%+54.23f\n", 0.0);

    // i= ft_printf("Hello World %c ! This is Mich%cl ! And J%cmes\n", 0, 0, 1);
    // j=    printf("Hello World %c ! This is Mich%cl ! And J%cmes\n", 0, 0, 1);

    // i= ft_printf("Hello World %c ! This is Mich%cl ! And J%cmes\n", 34, 35, 36);
    // j=    printf("Hello World %c ! This is Mich%cl ! And J%cmes\n", 34, 35, 36);

    // i = ft_printf("%+54.23f\n", -0.0);
    // j =    printf("%+54.23f\n", -0.0);

    // i = ft_printf("%54.23f\n", -0.0);
    // j =    printf("%54.23f\n", -0.0);

    // i = ft_printf("%.23f\n", -0.0);
    // j =    printf("%.23f\n", -0.0);

    // i = ft_printf("%f\n", -0.0);
    // j =    printf("%f\n", -0.0);

    // i = ft_printf("%.4f\n", -0.0);
    // j =    printf("%.4f\n", -0.0);

    // i = ft_printf("%09.4f\n", -0.0);
    // j =    printf("%09.4f\n", -0.0);

    // i = ft_printf("%-20.4f\n", -0.0);
    // j =    printf("%-20.4f\n", -0.0);

    // i = ft_printf("%f\n", 0.0);
    // j =    printf("%f\n", 0.0);

    // i = ft_printf("%+f\n", 0.0);
    // j =    printf("%+f\n", 0.0);

    // i = ft_printf("%+f\n", 0.0);
    // j =    printf("%+f\n", 0.0);

	// printf("\n------------------------------\n");
	// printf("[%i] vs [%i]\n", i, j);

/* — — — — – – – – – – – – – – – – – – – – – – – – – –  */

	// int i;
	// int j;

	// i   =  ft_printf("%c  -  %c  -  %c  -  %c  -  %c  -  %c  -  %c  -  %c  -  %c  -  %c  -  %c  -  %c  -  %c  -  %c  -  %c  -  %c  -  %c  -  %c  -  %c  -  %c  -  %c  -  %c  -  %c  -  %c  -  %c  -  %c  -  %c  -  %c  -  %c  -  %c  -  %c  -  %c  -  %c  -  %c  -  %c  -  %c  -  %c  -  %c  -  %c  -  %c  -  %c  -  %c  -  %c  -  %c  -  %c  -  %c  -  %c  -  %c  -  %c  -  %c  -  %c  -  %c  -  %c  -  %c  -  %c  -  %c  -  %c  -  %c  -  %c  -  %c  -  %c  -  %c  -  %c  -  %c  -  %c  -  %c  -  %c  -  %c  -  %c  -  %c  -  %c  -  %c\n", 1, 2, 3, 4, 5, 6, 7, 8, 9, 11, 12, 13, 14, 15, 16, 17, 18, 19, 1, 2, 3, 4, 5, 6, 7, 8, 9, 11, 12, 13, 14, 15, 16, 17, 18, 19, 1, 2, 3, 4, 5, 6, 7, 8, 9, 11, 12, 13, 14, 15, 16, 17, 18, 19, 1, 2, 3, 4, 5, 6, 7, 8, 9, 11, 12, 13, 14, 15, 16, 17, 18, 19);
	// j   =     printf("%c  -  %c  -  %c  -  %c  -  %c  -  %c  -  %c  -  %c  -  %c  -  %c  -  %c  -  %c  -  %c  -  %c  -  %c  -  %c  -  %c  -  %c  -  %c  -  %c  -  %c  -  %c  -  %c  -  %c  -  %c  -  %c  -  %c  -  %c  -  %c  -  %c  -  %c  -  %c  -  %c  -  %c  -  %c  -  %c  -  %c  -  %c  -  %c  -  %c  -  %c  -  %c  -  %c  -  %c  -  %c  -  %c  -  %c  -  %c  -  %c  -  %c  -  %c  -  %c  -  %c  -  %c  -  %c  -  %c  -  %c  -  %c  -  %c  -  %c  -  %c  -  %c  -  %c  -  %c  -  %c  -  %c  -  %c  -  %c  -  %c  -  %c  -  %c  -  %c\n", 1, 2, 3, 4, 5, 6, 7, 8, 9, 11, 12, 13, 14, 15, 16, 17, 18, 19, 1, 2, 3, 4, 5, 6, 7, 8, 9, 11, 12, 13, 14, 15, 16, 17, 18, 19, 1, 2, 3, 4, 5, 6, 7, 8, 9, 11, 12, 13, 14, 15, 16, 17, 18, 19, 1, 2, 3, 4, 5, 6, 7, 8, 9, 11, 12, 13, 14, 15, 16, 17, 18, 19);

	// printf("\n------------------------------\n");
	// printf("[%i] vs [%i]\n", i, j);

/* — — — — – – – – – – – – – – – – – – – – – – – – – –  */

	// int i;
	// int j;

	// i   =  ft_printf("%c  -  %c  -  %c  -  %c  -  %c  -  %c  -  %c  -  %c  -  %c  -  %c  -  %c  -  %c  -  %c  -  %c  -  %c  -  %c  -  %c  -  %c  -  %c  -  %c  -  %c  -  %c  -  %c  -  %c  -  %c  -  %c  -  %c  -  %c  -  %c  -  %c  -  %c  -  %c  -  %c  -  %c  -  %c  -  %c  -  %c  -  %c  -  %c  -  %c  -  %c  -  %c  -  %c  -  %c  -  %c  -  %c  -  %c  -  %c  -  %c  -  %c  -  %c  -  %c  -  %c  -  %c  -  %c  -  %c  -  %c  -  %c  -  %c  -  %c  -  %c  -  %c  -  %c  -  %c  -  %c  -  %c  -  %c  -  %c  -  %c  -  %c  -  %c  -  %c\n", 1, 2, 3, 4, 5, 6, 7, 8, 9, 11, 0, 13, 14, 15, 16, 17, 18, 19, 1, 2, 3, 4, 5, 6, 7, 8, 9, 11, 0, 13, 14, 15, 16, 17, 18, 19, 1, 2, 3, 4, 5, 6, 7, 8, 9, 11, 0, 13, 14, 15, 16, 17, 18, 19, 1, 2, 3, 4, 5, 6, 7, 8, 9, 11, 0, 13, 14, 15, 16, 17, 18, 19);
	// j   =     printf("%c  -  %c  -  %c  -  %c  -  %c  -  %c  -  %c  -  %c  -  %c  -  %c  -  %c  -  %c  -  %c  -  %c  -  %c  -  %c  -  %c  -  %c  -  %c  -  %c  -  %c  -  %c  -  %c  -  %c  -  %c  -  %c  -  %c  -  %c  -  %c  -  %c  -  %c  -  %c  -  %c  -  %c  -  %c  -  %c  -  %c  -  %c  -  %c  -  %c  -  %c  -  %c  -  %c  -  %c  -  %c  -  %c  -  %c  -  %c  -  %c  -  %c  -  %c  -  %c  -  %c  -  %c  -  %c  -  %c  -  %c  -  %c  -  %c  -  %c  -  %c  -  %c  -  %c  -  %c  -  %c  -  %c  -  %c  -  %c  -  %c  -  %c  -  %c  -  %c\n", 1, 2, 3, 4, 5, 6, 7, 8, 9, 11, 0, 13, 14, 15, 16, 17, 18, 19, 1, 2, 3, 4, 5, 6, 7, 8, 9, 11, 0, 13, 14, 15, 16, 17, 18, 19, 1, 2, 3, 4, 5, 6, 7, 8, 9, 11, 0, 13, 14, 15, 16, 17, 18, 19, 1, 2, 3, 4, 5, 6, 7, 8, 9, 11, 0, 13, 14, 15, 16, 17, 18, 19);

	// printf("\n------------------------------\n");
	// printf("[%i] vs [%i]\n", i, j);

/* — — — — – – – – – – – – – – – – – – – – – – – – – –  */

	// int i;
	// int j;

	// i  =  ft_printf("Done ? %f\n", -0.0);
	// j  =     printf("Done ? %f\n", -0.0);

	// printf("\n------------------------------\n");
	// printf("[%i] vs [%i]\n", i, j);

/* — — — — – – – – – – – – – – – – – – – – – – – – – –  */


		// ft_printf("\n");                                /*-> "" */
		// printf("\n");                                /*-> "" */

		// ft_printf("\n");                              /*-> "$\n" */
		// printf("\n");                              /*-> "$\n" */

		// ft_printf("test\n");                            /*-> "test" */
		// printf("test\n");                            /*-> "test" */

		// ft_printf("test\n");                          /*-> "test$\n" */
		// printf("test\n");                          /*-> "test$\n" */

		// ft_printf("1234\n");                            /*-> "1234" */
		// printf("1234\n");                            /*-> "1234" */

		// ft_printf("%%\n");                              /*-> "%" */
		// printf("%%\n");                              /*-> "%" */

		// ft_printf("%5%\n");                             /*-> "    %" */
		// printf("%5%\n");                             /*-> "    %" */

		// ft_printf("%-5%\n");                            /*-> "%    " */
		// printf("%-5%\n");                            /*-> "%    " */

		// ft_printf("%.0%\n");                            /*-> "%" */
		// printf("%.0%\n");                            /*-> "%" */

		// ft_printf("%%\n");                      /*-> "%" */
		// printf("%%\n");                              /*-> "%" */

		// ft_printf("%   %\n");                           /*-> "%" */
		// printf("%   %\n");                           /*-> "%" */

		// ft_printf("%x\n", 42);                          /*-> "2a" */
		// printf("%x\n", 42);                          /*-> "2a" */

		// ft_printf("%X\n", 42);                          /*-> "2A" */
		// printf("%X\n", 42);                          /*-> "2A" */

		// ft_printf("%x\n", 0);                           /*-> "0" */
		// printf("%x\n", 0);                           /*-> "0" */

		// ft_printf("%X\n", 0);                           /*-> "0" */
		// printf("%X\n", 0);                           /*-> "0" */

		// ft_printf("%x\n", -42);                         /*-> "ffffffd6" */
		// printf("%x\n", -42);                         /*-> "ffffffd6" */

		// ft_printf("%X\n", -42);                         /*-> "FFFFFFD6" */
		// printf("%X\n", -42);                         /*-> "FFFFFFD6" */

		// ft_printf("%x\n", (unsigned int)4294967296);                  /*-> "0" */
		// printf("%x\n", (unsigned int)4294967296);                  /*-> "0" */

		// ft_printf("%X\n", (unsigned int)4294967296);                  /*-> "0" */
		// printf("%X\n", (unsigned int)4294967296);                  /*-> "0" */

		// ft_printf("%x\n", 0);                        /*-> "0" */
		// printf("%x\n", 0);                        /*-> "0" */

		// ft_printf("%10x\n", 42);                        /*-> "        2a" */
		// printf("%10x\n", 42);                        /*-> "        2a" */

		// ft_printf("%-10x\n", 42);                       /*-> "2a        " */
		// printf("%-10x\n", 42);                       /*-> "2a        " */

		// ft_printf("%lx\n", 4294967296);                 /*-> "100000000" */
		// printf("%lx\n", 4294967296);                 /*-> "100000000" */

		// ft_printf("%llX\n", (long long)4294967296);                /*-> "100000000" */
		// printf("%llX\n", (long long)4294967296);                /*-> "100000000" */

		// ft_printf("%hx\n", (unsigned short)4294967296);                 /*-> "0" */
		// printf("%hx\n", (unsigned short)4294967296);                 /*-> "0" */

		// ft_printf("%hhX\n", (unsigned char)4294967296);                /*-> "0" */
		// printf("%hhX\n", (unsigned char)4294967296);                /*-> "0" */

		// ft_printf("%jx\n", 4294967295);                 /*-> "ffffffff" */
		// printf("%jx\n", 4294967295);                 /*-> "ffffffff" */

		// ft_printf("%jx\n", 4294967296);                 /*-> "100000000" */
		// printf("%jx\n", 4294967296);                 /*-> "100000000" */

		// ft_printf("%jx\n", -4294967296);                /*-> "ffffffff00000000" */
		// printf("%jx\n", -4294967296);                /*-> "ffffffff00000000" */

		// ft_printf("%jx\n", -4294967297);                /*-> "fffffffeffffffff" */
		// printf("%jx\n", -4294967297);                /*-> "fffffffeffffffff" */

		// ft_printf("%llx\n", (long long)9223372036854775807);       /*-> "7fffffffffffffff" */
		// printf("%llx\n", (long long)9223372036854775807);       /*-> "7fffffffffffffff" */

		// // ft_printf("%llx\n", 9223372036854775808);       /*-> "7fffffffffffffff" */
		// // printf("%llx\n", 9223372036854775808);       /*-> "7fffffffffffffff" */

		// ft_printf("%010x\n", 542);                      /*-> "000000021e" */
		// printf("%010x\n", 542);                      /*-> "000000021e" */

		// ft_printf("%-15x\n", 542);                      /*-> "21e            " */
		// printf("%-15x\n", 542);                      /*-> "21e            " */

		// ft_printf("%2x\n", 542);                        /*-> "21e" */
		// printf("%2x\n", 542);                        /*-> "21e" */

		// ft_printf("%.2x\n", 5427);                      /*-> "1533" */
		// printf("%.2x\n", 5427);                      /*-> "1533" */

		// ft_printf("%5.2x\n", 5427);                     /*-> " 1533" */
		// printf("%5.2x\n", 5427);                     /*-> " 1533" */

		// ft_printf("%#x\n", 42);                         /*-> "0x2a" */
		// printf("%#x\n", 42);                         /*-> "0x2a" */

		// ft_printf("%#llx\n", (long long)9223372036854775807);      /*-> "0x7fffffffffffffff" */
		// printf("%#llx\n", (long long)9223372036854775807);      /*-> "0x7fffffffffffffff" */

		// ft_printf("%#x\n", 0);                          /*-> "0" */
		// printf("%#x\n", 0);                          /*-> "0" */

		// ft_printf("%#x\n", 42);                         /*-> "0x2a" */
		// printf("%#x\n", 42);                         /*-> "0x2a" */

		// ft_printf("%#X\n", 42);                         /*-> "0X2A" */
		// printf("%#X\n", 42);                         /*-> "0X2A" */

		// ft_printf("%#8x\n", 42);                        /*-> "    0x2a" */
		// printf("%#8x\n", 42);                        /*-> "    0x2a" */

		// ft_printf("%#08x\n", 42);                       /*-> "0x00002a" */
		// printf("%#08x\n", 42);                       /*-> "0x00002a" */

		// ft_printf("%#-8x\n", 42);                      /*-> "0x2a    " */
		// printf("%#-8x\n", 42);                      /*-> "0x2a    " */

		// ft_printf("@moulitest: %#.x %#.0x\n", 0, 0);    /*-> "@moulitest:  " */
		// printf("@moulitest: %#.x %#.0x\n", 0, 0);    /*-> "@moulitest:  " */

		// ft_printf("@moulitest: %.x %.0x\n", 0, 0);      /*-> "@moulitest:  " */
		// printf("@moulitest: %.x %.0x\n", 0, 0);      /*-> "@moulitest:  " */

		// ft_printf("@moulitest: %5.x %5.0x\n", 0, 0);    /*-> "@moulitest:            " */
		// printf("@moulitest: %5.x %5.0x\n", 0, 0);    /*-> "@moulitest:            " */

		// ft_printf("%s\n", "abc");                       /*-> "abc" */
		// printf("%s\n", "abc");                       /*-> "abc" */

		// ft_printf("%s\n", "this is a string");          /*-> "this is a string" */
		// printf("%s\n", "this is a string");          /*-> "this is a string" */

		// ft_printf("%s \n", "this is a string");         /*-> "this is a string " */
		// printf("%s \n", "this is a string");         /*-> "this is a string " */

		// ft_printf("%s  \n", "this is a string");        /*-> "this is a string  " */
		// printf("%s  \n", "this is a string");        /*-> "this is a string  " */

		// ft_printf("this is a %s\n", "string");          /*-> "this is a string" */
		// printf("this is a %s\n", "string");          /*-> "this is a string" */

		// ft_printf("%s is a string\n", "this");          /*-> "this is a string" */
		// printf("%s is a string\n", "this");          /*-> "this is a string" */

		// ft_printf("Line Feed %s", "\n");              /*-> "Line Feed $\n" */
		// printf("Line Feed %s", "\n");              /*-> "Line Feed $\n" */

		// ft_printf("%10s is a string\n", "this");        /*-> "      this is a string" */
		// printf("%10s is a string\n", "this");        /*-> "      this is a string" */

		// ft_printf("%.2s is a string\n", "this");        /*-> "th is a string" */
		// printf("%.2s is a string\n", "this");        /*-> "th is a string" */

		// ft_printf("%5.2s is a string\n", "this");       /*-> "   th is a string" */
		// printf("%5.2s is a string\n", "this");       /*-> "   th is a string" */

		// ft_printf("%10s is a string\n", "");            /*-> "           is a string" */
		// printf("%10s is a string\n", "");            /*-> "           is a string" */

		// ft_printf("%.2s is a string\n", "");            /*-> " is a string" */
		// printf("%.2s is a string\n", "");            /*-> " is a string" */

		// ft_printf("%5.2s is a string\n", "");           /*-> "      is a string" */
		// printf("%5.2s is a string\n", "");           /*-> "      is a string" */

		// ft_printf("%-10s is a string\n", "this");       /*-> "this       is a string" */
		// printf("%-10s is a string\n", "this");       /*-> "this       is a string" */

		// ft_printf("%-.2s is a string\n", "this");       /*-> "th is a string" */
		// printf("%-.2s is a string\n", "this");       /*-> "th is a string" */

		// ft_printf("%-5.2s is a string\n", "this");      /*-> "th    is a string" */
		// printf("%-5.2s is a string\n", "this");      /*-> "th    is a string" */

		// ft_printf("%-10s is a string\n", "");           /*-> "           is a string" */
		// printf("%-10s is a string\n", "");           /*-> "           is a string" */

		// ft_printf("%-.2s is a string\n", "");           /*-> " is a string" */
		// printf("%-.2s is a string\n", "");           /*-> " is a string" */

		// ft_printf("%-5.2s is a string\n", "");          /*-> "      is a string" */
		// printf("%-5.2s is a string\n", "");          /*-> "      is a string" */

		// ft_printf("%s %s\n", "this", "is");             /*-> "this is" */
		// printf("%s %s\n", "this", "is");             /*-> "this is" */

		// ft_printf("%s %s %s\n", "this", "is", "a");     /*-> "this is a" */
		// printf("%s %s %s\n", "this", "is", "a");     /*-> "this is a" */

		// ft_printf("%s %s %s %s\n", "this", "is", "a", "multi"); /*-> "this is a multi" */
		// printf("%s %s %s %s\n", "this", "is", "a", "multi"); /*-> "this is a multi" */

		// ft_printf("%s %s %s %s string. gg!\n", "this", "is", "a", "multi"); /*-> "this is a multi string. gg!" */
		// printf("%s %s %s %s string. gg!\n", "this", "is", "a", "multi"); /*-> "this is a multi string. gg!" */

		// ft_printf("%s%s%s%s%s\n", "this", "is", "a", "multi", "string"); /*-> "thisisamultistring" */
		// printf("%s%s%s%s%s\n", "this", "is", "a", "multi", "string"); /*-> "thisisamultistring" */

		// ft_printf("@moulitest: %s\n", NULL);            /*-> "@moulitest: (null)" */
		// printf("@moulitest: %s\n", NULL);            /*-> "@moulitest: (null)" */

		// ft_printf("%2c\n", 0);                      /*-> "^@" */
		// printf("%2c\n", 0);                      /*-> "^@" */

		// ft_printf("%s %s\n", NULL, "string");             /*-> "(null) string" */
		// printf("%s %s\n", NULL, "string");             /*-> "(null) string" */

		// ft_printf("%c\n", 42);                          /*-> "*" */
		// printf("%c\n", 42);                          /*-> "*" */

		// ft_printf("%5c\n", 42);                         /*-> "    *" */
		// printf("%5c\n", 42);                         /*-> "    *" */

		// ft_printf("%-5c\n", 42);                        /*-> "*    " */
		// printf("%-5c\n", 42);                        /*-> "*    " */

		// ft_printf("@moulitest: %c\n", 0);               /*-> "@moulitest: ^@" */
		// printf("@moulitest: %c\n", 0);               /*-> "@moulitest: ^@" */

		// ft_printf("%2c\n", 0);                          /*-> " ^@" */
		// printf("%2c\n", 0);                          /*-> " ^@" */

		// ft_printf("null %c and text\n", 0);             /*-> "null ^@ and text" */
		// printf("null %c and text\n", 0);             /*-> "null ^@ and text" */

		// ft_printf("%c\n", 0);                          /*-> "^@" */
		// printf("%c\n", 0);                          /*-> "^@" */

		// ft_printf("%o\n", 40);                          /*-> "50" */
		// printf("%o\n", 40);                          /*-> "50" */

		// ft_printf("%5o\n", 41);                         /*-> "   51" */
		// printf("%5o\n", 41);                         /*-> "   51" */

		// ft_printf("%05o\n", 42);                        /*-> "00052" */
		// printf("%05o\n", 42);                        /*-> "00052" */

		// ft_printf("%-5o\n", 2500);                      /*-> "4704 " */
		// printf("%-5o\n", 2500);                      /*-> "4704 " */

		// ft_printf("%#6o\n", 2500);                      /*-> " 04704" */
		// printf("%#6o\n", 2500);                      /*-> " 04704" */

		// ft_printf("%-#6o\n", 2500);                     /*-> "04704 " */
		// printf("%-#6o\n", 2500);                     /*-> "04704 " */

		// ft_printf("%-5o\n", 2500);                     /*-> "4704 " */
		// printf("%-5o\n", 2500);                     /*-> "4704 " */

		// ft_printf("%-5.10o\n", 2500);                   /*-> "0000004704" */
		// printf("%-5.10o\n", 2500);                   /*-> "0000004704" */

		// ft_printf("%-10.5o\n", 2500);                   /*-> "04704     " */
		// printf("%-10.5o\n", 2500);                   /*-> "04704     " */

		// ft_printf("@moulitest: %o\n", 0);               /*-> "@moulitest: 0" */
		// printf("@moulitest: %o\n", 0);               /*-> "@moulitest: 0" */

		// ft_printf("@moulitest: %.o %.0o\n", 0, 0);      /*-> "@moulitest:  " */
		// printf("@moulitest: %.o %.0o\n", 0, 0);      /*-> "@moulitest:  " */

		// ft_printf("@moulitest: %5.o %5.0o\n", 0, 0);    /*-> "@moulitest:            " */
		// printf("@moulitest: %5.o %5.0o\n", 0, 0);    /*-> "@moulitest:            " */

		// ft_printf("@moulitest: %#.o %#.0o\n", 0, 0);    /*-> "@moulitest: 0 0" */
		// printf("@moulitest: %#.o %#.0o\n", 0, 0);    /*-> "@moulitest: 0 0" */

		// ft_printf("@moulitest: %.10o\n", 42);           /*-> "@moulitest: 0000000052" */
		// printf("@moulitest: %.10o\n", 42);           /*-> "@moulitest: 0000000052" */

		// ft_printf("%d\n", 1);                           /*-> "1" */
		// printf("%d\n", 1);                           /*-> "1" */

		// ft_printf("the %d\n", 1);                       /*-> "the 1" */
		// printf("the %d\n", 1);                       /*-> "the 1" */

		// ft_printf("%d is one\n", 1);                    /*-> "1 is one" */
		// printf("%d is one\n", 1);                    /*-> "1 is one" */

		// ft_printf("%d\n", -1);                          /*-> "-1" */
		// printf("%d\n", -1);                          /*-> "-1" */

		// ft_printf("%d\n", 4242);                        /*-> "4242" */
		// printf("%d\n", 4242);                        /*-> "4242" */

		// ft_printf("%d\n", -4242);                       /*-> "-4242" */
		// printf("%d\n", -4242);                       /*-> "-4242" */

		// ft_printf("%d\n", 2147483647);                  /*-> "2147483647" */
		// printf("%d\n", 2147483647);                  /*-> "2147483647" */

		// ft_printf("%d\n", (int)2147483648);                  /*-> "-2147483648" */
		// printf("%d\n", (int)2147483648);                  /*-> "-2147483648" */

		// ft_printf("%ld\n", (long)-2147483648);                 /*-> "-2147483648" */
		// printf("%ld\n", (long)-2147483648);                 /*-> "-2147483648" */

		// ft_printf("%ld\n", (long)-2147483649);                 /*-> "2147483647" */
		// printf("%ld\n", (long)-2147483649);                 /*-> "2147483647" */

		// ft_printf("% d\n", 42);                         /*-> " 42" */
		// printf("% d\n", 42);                         /*-> " 42" */

		// ft_printf("% d\n", -42);                        /*-> "-42" */
		// printf("% d\n", -42);                        /*-> "-42" */

		// ft_printf("%+d\n", 42);                         /*-> "+42" */
		// printf("%+d\n", 42);                         /*-> "+42" */

		// ft_printf("%+d\n", -42);                        /*-> "-42" */
		// printf("%+d\n", -42);                        /*-> "-42" */

		// ft_printf("%+d\n", 0);                          /*-> "+0" */
		// printf("%+d\n", 0);                          /*-> "+0" */

		// // ft_printf("%+d\n", 4242424242424242424242);     /*-> "-1" */
		// // printf("%+d\n", 4242424242424242424242);     /*-> "-1" */

		// // ft_printf("% +d\n", 42);                        /*-> "+42" */
		// // printf("% +d\n", 42);                        /*-> "+42" */

		// // ft_printf("% +d\n", -42);                       /*-> "-42" */
		// // printf("% +d\n", -42);                       /*-> "-42" */

		// // ft_printf("%+ d\n", 42);                        /*-> "+42" */
		// // printf("%+ d\n", 42);                        /*-> "+42" */

		// // ft_printf("%+ d\n", -42);                       /*-> "-42" */
		// // printf("%+ d\n", -42);                       /*-> "-42" */

		// // ft_printf("%  +d\n", 42);                       /*-> "+42" */
		// // printf("%  +d\n", 42);                       /*-> "+42" */

		// // ft_printf("%  +d\n", -42);                      /*-> "-42" */
		// // printf("%  +d\n", -42);                      /*-> "-42" */

		// // ft_printf("%+  d\n", 42);                       /*-> "+42" */
		// // printf("%+  d\n", 42);                       /*-> "+42" */

		// // ft_printf("%+  d\n", -42);                      /*-> "-42" */
		// // printf("%+  d\n", -42);                      /*-> "-42" */

		// // ft_printf("% ++d\n", 42);                       /*-> "+42" */
		// // printf("% ++d\n", 42);                       /*-> "+42" */

		// // ft_printf("% ++d\n", -42);                      /*-> "-42" */
		// // printf("% ++d\n", -42);                      /*-> "-42" */

		// // ft_printf("%++ d\n", 42);                       /*-> "+42" */
		// // printf("%++ d\n", 42);                       /*-> "+42" */

		// // ft_printf("%++ d\n", -42);                      /*-> "-42" */
		// // printf("%++ d\n", -42);                      /*-> "-42" */

		// ft_printf("%0d\n", -42);                        /*-> "-42" */
		// printf("%0d\n", -42);                        /*-> "-42" */

		// ft_printf("%00d\n", -42);                       /*-> "-42" */
		// printf("%00d\n", -42);                       /*-> "-42" */

		// ft_printf("%5d\n", 42);                         /*-> "   42" */
		// printf("%5d\n", 42);                         /*-> "   42" */

		// ft_printf("%05d\n", 42);                        /*-> "00042" */
		// printf("%05d\n", 42);                        /*-> "00042" */

		// ft_printf("%0+5d\n", 42);                       /*-> "+0042" */
		// printf("%0+5d\n", 42);                       /*-> "+0042" */

		// ft_printf("%5d\n", -42);                        /*-> "  -42" */
		// printf("%5d\n", -42);                        /*-> "  -42" */

		// ft_printf("%05d\n", -42);                       /*-> "-0042" */
		// printf("%05d\n", -42);                       /*-> "-0042" */

		// ft_printf("%0+5d\n", -42);                      /*-> "-0042" */
		// printf("%0+5d\n", -42);                      /*-> "-0042" */

		// ft_printf("%-5d\n", 42);                        /*-> "42   " */
		// printf("%-5d\n", 42);                        /*-> "42   " */

		// ft_printf("%-5d\n", (int)42);                       /*-> "42   " */
		// printf("%-5d\n", (int)42);                       /*-> "42   " */

		// ft_printf("%-5d\n", -42);                       /*-> "-42  " */
		// printf("%-5d\n", -42);                       /*-> "-42  " */

		// ft_printf("%-5d\n", -42);                      /*-> "-42  " */
		// printf("%-5d\n", -42);                      /*-> "-42  " */

		// ft_printf("%hd\n", (short)32767);                      /*-> "32767" */
		// printf("%hd\n", (short)32767);                      /*-> "32767" */

		// // ft_printf("%hd\n", (short)−32768);                   /*-> "0" */
		// // printf("%hd\n", (short)−32768);                   /*-> "0" */

		// ft_printf("%hd\n", (short)32768);                      /*-> "-32768" */
		// printf("%hd\n", (short)32768);                      /*-> "-32768" */

		// // ft_printf("%hd\n", (short)−32769);                   /*-> "0" */
		// // printf("%hd\n", (short)−32769);                   /*-> "0" */

		// ft_printf("%hhd\n", (signed char)127);                       /*-> "127" */
		// printf("%hhd\n", (signed char)127);                       /*-> "127" */

		// ft_printf("%hhd\n", (signed char)128);                       /*-> "-128" */
		// printf("%hhd\n", (signed char)128);                       /*-> "-128" */

		// ft_printf("%hhd\n", (signed char)-128);                      /*-> "-128" */
		// printf("%hhd\n", (signed char)-128);                      /*-> "-128" */

		// ft_printf("%hhd\n", (signed char)-129);                      /*-> "127" */
		// printf("%hhd\n", (signed char)-129);                      /*-> "127" */

		// ft_printf("%ld\n", (long)2147483647);                 /*-> "2147483647" */
		// printf("%ld\n", (long)2147483647);                 /*-> "2147483647" */

		// ft_printf("%ld\n", -2147483648);                /*-> "-2147483648" */
		// printf("%ld\n", -2147483648);                /*-> "-2147483648" */

		// ft_printf("%ld\n", 2147483648);                 /*-> "2147483648" */
		// printf("%ld\n", 2147483648);                 /*-> "2147483648" */

		// ft_printf("%ld\n", -2147483649);                /*-> "-2147483649" */
		// printf("%ld\n", -2147483649);                /*-> "-2147483649" */

		// ft_printf("%lld\n", (long long)9223372036854775807);       /*-> "9223372036854775807" */
		// printf("%lld\n", (long long)9223372036854775807);       /*-> "9223372036854775807" */

		// // ft_printf("%lld\n", (long long)-9223372036854775808);      /*-> "-9223372036854775808" */
		// // printf("%lld\n", (long long)-9223372036854775808);      /*-> "-9223372036854775808" */

		// ft_printf("%jd\n", 9223372036854775807);        /*-> "9223372036854775807" */
		// printf("%jd\n", 9223372036854775807);        /*-> "9223372036854775807" */

		// // ft_printf("%jd\n", -9223372036854775808);       /*-> "-9223372036854775808" */
		// // printf("%jd\n", -9223372036854775808);       /*-> "-9223372036854775808" */

		// ft_printf("%zd\n", 4294967295);                 /*-> "4294967295" */
		// printf("%zd\n", 4294967295);                 /*-> "4294967295" */

		// ft_printf("%zd\n", 4294967296);                 /*-> "4294967296" */
		// printf("%zd\n", 4294967296);                 /*-> "4294967296" */

		// ft_printf("%zd\n", (long)-0);                         /*-> "0" */
		// printf("%zd\n", (long)-0);                         /*-> "0" */

		// ft_printf("%zd\n", (long)-1);                         /*-> "-1" */
		// printf("%zd\n", (long)-1);                         /*-> "-1" */

		// ft_printf("%d\n", 1);                           /*-> "1" */
		// printf("%d\n", 1);                           /*-> "1" */

		// ft_printf("%d %d\n", 1, -2);                    /*-> "1 -2" */
		// printf("%d %d\n", 1, -2);                    /*-> "1 -2" */

		// ft_printf("%d %d %d\n", 1, -2, 33);             /*-> "1 -2 33" */
		// printf("%d %d %d\n", 1, -2, 33);             /*-> "1 -2 33" */

		// ft_printf("%d %d %d %d\n", 1, -2, 33, 42);      /*-> "1 -2 33 42" */
		// printf("%d %d %d %d\n", 1, -2, 33, 42);      /*-> "1 -2 33 42" */

		// ft_printf("%d %d %d %d gg!\n", 1, -2, 33, 42); /*-> "1 -2 33 42 gg!" */
		// printf("%d %d %d %d gg!\n", 1, -2, 33, 42); /*-> "1 -2 33 42 gg!" */

		// ft_printf("%4.15d\n", 42);                      /*-> "000000000000042" */
		// printf("%4.15d\n", 42);                      /*-> "000000000000042" */

		// ft_printf("%.2d\n", 4242);                      /*-> "4242" */
		// printf("%.2d\n", 4242);                      /*-> "4242" */

		// ft_printf("%.10d\n", 4242);                     /*-> "0000004242" */
		// printf("%.10d\n", 4242);                     /*-> "0000004242" */

		// ft_printf("%10.5d\n", 4242);                    /*-> "     04242" */
		// printf("%10.5d\n", 4242);                    /*-> "     04242" */

		// ft_printf("%-10.5d\n", 4242);                   /*-> "04242     " */
		// printf("%-10.5d\n", 4242);                   /*-> "04242     " */

		// ft_printf("% 10.5d\n", 4242);                   /*-> "     04242" */
		// printf("% 10.5d\n", 4242);                   /*-> "     04242" */

		// ft_printf("%+10.5d\n", 4242);                   /*-> "    +04242" */
		// printf("%+10.5d\n", 4242);                   /*-> "    +04242" */

		// ft_printf("%-+10.5d\n", 4242);                  /*-> "+04242    " */
		// printf("%-+10.5d\n", 4242);                  /*-> "+04242    " */

		// ft_printf("%03.2d\n", 0);                       /*-> " 00" */
		// printf("%03.2d\n", 0);                       /*-> " 00" */

		// ft_printf("%03.2d\n", 1);                       /*-> " 01" */
		// printf("%03.2d\n", 1);                       /*-> " 01" */

		// ft_printf("%03.2d\n", -1);                      /*-> "-01" */
		// printf("%03.2d\n", -1);                      /*-> "-01" */

		// ft_printf("@moulitest: %.10d\n", -42);          /*-> "@moulitest: -0000000042" */
		// printf("@moulitest: %.10d\n", -42);          /*-> "@moulitest: -0000000042" */

		// ft_printf("@moulitest: %.d %.0d\n", 42, 43);    /*-> "@moulitest: 42 43" */
		// printf("@moulitest: %.d %.0d\n", 42, 43);    /*-> "@moulitest: 42 43" */

		// ft_printf("@moulitest: %.d %.0d\n", 0, 0);      /*-> "@moulitest:  " */
		// printf("@moulitest: %.d %.0d\n", 0, 0);      /*-> "@moulitest:  " */

		// ft_printf("@moulitest: %5.d %5.0d\n", 0, 0);    /*-> "@moulitest:            " */
		// printf("@moulitest: %5.d %5.0d\n", 0, 0);    /*-> "@moulitest:            " */

		// ft_printf("%u\n", 0);                           /*-> "0" */
		// printf("%u\n", 0);                           /*-> "0" */

		// ft_printf("%u\n", 1);                           /*-> "1" */
		// printf("%u\n", 1);                           /*-> "1" */

		// ft_printf("%u\n", -1);                          /*-> "4294967295" */
		// printf("%u\n", -1);                          /*-> "4294967295" */

		// ft_printf("%lu\n", (long)4294967295);                  /*-> "4294967295" */
		// printf("%lu\n", (long)4294967295);                  /*-> "4294967295" */

		// ft_printf("%lu\n", (long)4294967296);                  /*-> "0" */
		// printf("%lu\n", (long)4294967296);                  /*-> "0" */

		// ft_printf("%5lu\n", 4294967295);                 /*-> "4294967295" */
		// printf("%5lu\n", 4294967295);                 /*-> "4294967295" */

		// ft_printf("%15lu\n", 4294967295);                /*-> "     4294967295" */
		// printf("%15lu\n", 4294967295);                /*-> "     4294967295" */

		// ft_printf("%-15lu\n", 4294967295);               /*-> "4294967295     " */
		// printf("%-15lu\n", 4294967295);               /*-> "4294967295     " */

		// ft_printf("%015u\n", (unsigned int)4294967295);               /*-> "000004294967295" */
		// printf("%015u\n", (unsigned int)4294967295);               /*-> "000004294967295" */

		// // ft_printf("% lu\n", (long)4294967295);                 /*-> "4294967295" */
		// // printf("% lu\n", (long)4294967295);                 /*-> "4294967295" */

		// // ft_printf("%+lu\n", (long)4294967295);                 /*-> "4294967295" */
		// // printf("%+lu\n", (long)4294967295);                 /*-> "4294967295" */

		// ft_printf("%lu\n", 4294967295);                 /*-> "4294967295" */
		// printf("%lu\n", 4294967295);                 /*-> "4294967295" */

		// ft_printf("%lu\n", 4294967296);                 /*-> "4294967296" */
		// printf("%lu\n", 4294967296);                 /*-> "4294967296" */

		// ft_printf("%lu\n", (long)-42);                        /*-> "18446744073709551574" */
		// printf("%lu\n", (long)-42);                        /*-> "18446744073709551574" */

		// ft_printf("%llu\n", (long long)4999999999);                /*-> "4999999999" */
		// printf("%llu\n", (long long)4999999999);                /*-> "4999999999" */

		// ft_printf("%ju\n", 4999999999);                 /*-> "4999999999" */
		// printf("%ju\n", 4999999999);                 /*-> "4999999999" */

		// ft_printf("%ju\n", 4294967296);                 /*-> "4294967296" */
		// printf("%ju\n", 4294967296);                 /*-> "4294967296" */

		// ft_printf("%lu\n", (long)4294967295);                  /*-> "4294967295" */
		// printf("%lu\n", (long)4294967295);                  /*-> "4294967295" */

		// ft_printf("%hU\n", (unsigned short)4294967296);                 /*-> "4294967296" */
		// printf("%hU\n", (unsigned short)4294967296);                 /*-> "4294967296" */

		// ft_printf("%U\n", (unsigned int)4294967296);                  /*-> "4294967296" */
		// printf("%U\n", (unsigned int)4294967296);                  /*-> "4294967296" */

		// ft_printf("@moulitest: %.5u\n", 42);            /*-> "@moulitest: 00042" */
		// printf("@moulitest: %.5u\n", 42);            /*-> "@moulitest: 00042" */


/* — — — — – – – – – – – – – – – – – – – – – – – – – –  */

	// i  =  ft_printf("%s %% %c %%ro, %% %d %% years ago %% %p %% %x %% %s %%\n", "Hello", 'b', -23, &free, 90, "came");
	// j  =     printf("%s %% %c %%ro, %% %d %% years ago %% %p %% %x %% %s %%\n", "Hello", 'b', -23, &free, 90, "came");

	// i  =  ft_printf("%.p, %.p\n", (void *)0, (void *)0);
	// j  =     printf("%.p, %.p\n", (void *)0, (void *)0);

	// i  =  ft_printf("%30.p, %.p\n", (void *)0, (void *)0);
	// j  =     printf("%30.p, %.p\n", (void *)0, (void *)0);

	// i  =  ft_printf("%-30.p, %.p\n", &free, &malloc);
	// j  =     printf("%-30.p, %.p\n", &free, &malloc);

	// i  =  ft_printf("%-30p\n", &main);
	// j  =     printf("%-30p\n", &main);

	int i;
	int j;

/* — — — — – – – – – – – – – – – – – – – – – – – – – –  */

	// j  =     printf("%0*zi\n", 31, (intmax_t)99999999999);
	// i  =  ft_printf("%0*zi\n", 31, (intmax_t)99999999999);

/* — — — — – – – – – – – – – – – – – – – – – – – – – –  */

	// i  =  ft_printf("%o, %ho, %hho\n", (unsigned short)-42, (unsigned short)-42, (unsigned char)-42);
	// j  =     printf("%o, %ho, %hho\n", (unsigned short)-42, (unsigned short)-42, (unsigned char)-42);

/* — — — — – – – – – – – – – – – – – – – – – – – – – –  */

	// i  =  ft_printf("{%-c}\n", 0);
	// j  =     printf("{%-c}\n", 0);

	// i  =  ft_printf("{%c}\n", 0);
	// j  =     printf("{%c}\n", 0);

	// i  =  ft_printf("{%-23c}\n", 0);
	// j  =     printf("{%-23c}\n", 0);

	// i  =  ft_printf("{%23c}\n", 0);
	// j  =     printf("{%23c}\n", 0);

	// i  =  ft_printf("hello {%c} bro\n", 0);
	// j  =     printf("hello {%c} bro\n", 0);

	// i  =  ft_printf("hello {%-c} bro\n", 0);
	// j  =     printf("hello {%-c} bro\n", 0);

	// i  =  ft_printf("hello {%20c} bro\n", 0);
	// j  =     printf("hello {%20c} bro\n", 0);

	// i  =  ft_printf("hello {%-20c} bro\n", 0);
	// j  =     printf("hello {%-20c} bro\n", 0);

	// i  =  ft_printf("hello {%*c} bro\n", 20, 0);
	// j  =     printf("hello {%*c} bro\n", 20, 0);

	// i  =  ft_printf("hello {%*c} bro\n", -20, 0);
	// j  =     printf("hello {%*c} bro\n", -20, 0);

/* — — — — – – – – – – – – – – – – – – – – – – – – – –  */

	// i  =  ft_printf("{%-30.2f}{%-30.2f}\n", 1.42, -1.42);
	// j  =     printf("{%-30.2f}{%-30.2f}\n", 1.42, -1.42);

	// i  =  ft_printf("{%.30f}{%-30.2f}\n", 1.9237423482394729384729384234923027364283, -1.42);
	// j  =     printf("{%.30f}{%-30.2f}\n", 1.9237423482394729384729384234923027364283, -1.42);

	// i  =  ft_printf("{%f}{%f}\n", 21.0123456789012345678901234, -21.0123456789012345678901234);
	// j  =     printf("{%f}{%f}\n", 21.0123456789012345678901234, -21.0123456789012345678901234);

	// i  =  ft_printf("{%f}{%.6f}\n", 21.0123456789012345678901234, -21.01234);
	// j  =     printf("{%f}{%.6f}\n", 21.0123456789012345678901234, -21.01234);

	// i  =  ft_printf("{%0.21f}{%0.21f}\n", 9237623.23723245232342, -9237623.23723245232342);
	// j  =     printf("{%0.21f}{%0.21f}\n", 9237623.23723245232342, -9237623.23723245232342);

	i  =  ft_printf("{%.543Lf}\n{%.543Lf}\n\n", (long double)2387.23723245232342923724923462347289341203612312030120312301241032349028402384234238423842304230423423428340229384923429342304720423400234237420374872342039472390440234230423894283402834823094829034829038490238409823094809238490234802385325892309293582039852903580238523058203582305823053902348239489203840238509752348293047203592835027408322370592357023752082035820395230, (long double)-2387.23723245232342923724923462347289341203612312030120312301241032349028402384234238423842304230423423428340229384923429342304720423400234237420374872342039472390440234230423894283402834823094829034829038490238409823094809238490234802385325892309293582039852903580238523058203582305823053902348239489203840238509752348293047203592835027408322370592357023752082035820395230);
	j  =     printf("{%.543Lf}\n{%.543Lf}\n\n", (long double)2387.23723245232342923724923462347289341203612312030120312301241032349028402384234238423842304230423423428340229384923429342304720423400234237420374872342039472390440234230423894283402834823094829034829038490238409823094809238490234802385325892309293582039852903580238523058203582305823053902348239489203840238509752348293047203592835027408322370592357023752082035820395230, (long double)-2387.23723245232342923724923462347289341203612312030120312301241032349028402384234238423842304230423423428340229384923429342304720423400234237420374872342039472390440234230423894283402834823094829034829038490238409823094809238490234802385325892309293582039852903580238523058203582305823053902348239489203840238509752348293047203592835027408322370592357023752082035820395230);

	// i  =  ft_printf("{%+0.500Lf}\n", (long double)1 / 0);
	// j  =     printf("{%+0.500Lf}\n", (long double)1 / 0);

	printf("\n------------------------------\n");
	printf("[%i] vs [%i]\n", i, j);

	(void)ac;
	(void)av;
	(void)i;
	(void)j;

	return (0);
}
