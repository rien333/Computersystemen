/*
 * CS:APP Data Lab
 *
 * < Rijnder Wever 10801944 Max Crous 10771085 >
 *
 * bits.c - Source file with your solutions to the Lab.
 *					This is the file you will hand in to your instructor.
 *
 * WARNING: Do not include the <stdio.h> header; it confuses the dlc
 * compiler. You can still use printf for debugging without including
 * <stdio.h>, although you might get a compiler warning. In general,
 * it's not good practice to ignore compiler warnings, but in this
 * case it's OK.
 */

#ifdef DEBUG // add "-D DEBUG" to the compile line to define this

/* ----------------------------------------------------------------
*******************************************************************
______ _____ _      _____ _____ _____   _____ _   _ _____ _____
|  _  \  ___| |    |  ___|_   _|  ___| |_   _| | | |_   _/  ___|
| | | | |__ | |    | |__   | | | |__     | | | |_| | | | \ `--.
| | | |  __|| |    |  __|  | | |  __|    | | |  _  | | |  `--. \
| |/ /| |___| |____| |___  | | | |___    | | | | | |_| |_/\__/ /
|___/ \____/\_____/\____/  \_/ \____/    \_/ \_| |_/\___/\____/

*******************************************************************
------------------------------------------------------------------- */

#include <stdio.h>
#include <stdlib.h>

// Prints a decimal number as an binary number
// (example: int x = 5; printbits(sizeof(x), &x);)
void printBits(size_t const size, void const * const ptr)
{
		unsigned char *b = (unsigned char*) ptr;
		unsigned char byte;
		int i, j;

		for (i=size-1;i>=0;i--)
		{
				for (j=7;j>=0;j--)
				{
						byte = (b[i] >> j) & 1;
						printf("%u", byte);
				}
		}
		puts("");
}
/* ----------------------------------------------------------------
******************************************************************* ------------------------------------------------------------------- */

#else
void printBits(int x, int *y)
{
	;
}


#endif

#if 0
/*
 * Instructions to Students:
 *
 * STEP 1: Read the following instructions carefully.
 */

You will provide your solution to the Data Lab by
editing the collection of functions in this source file.

INTEGER CODING RULES:

	Replace the "return" statement in each function with one
	or more lines of C code that implements the function. Your code
	must conform to the following style:

	int Funct(arg1, arg2, ...) {
			/* brief description of how your implementation works */
			int var1 = Expr1;
			...
			int varM = ExprM;

			varJ = ExprJ;
			...
			varN = ExprN;
			return ExprR;
	}

	Each "Expr" is an expression using ONLY the following:
	1. Integer constants 0 through 255 (0xFF), inclusive. You are
			not allowed to use big constants such as 0xffffffff.
	2. Function arguments and local variables (no global variables).
	3. Unary integer operations ! ~
	4. Binary integer operations & ^ | + << >>

	Some of the problems restrict the set of allowed operators even further.
	Each "Expr" may consist of multiple operators. You are not restricted to
	one operator per line.

	You are expressly forbidden to:
	1. Use any control constructs such as if, do, while, for, switch, etc.
	2. Define or use any macros.
	3. Define any additional functions in this file.
	4. Call any functions.
	5. Use any other operations, such as &&, ||, -, or ?:
	6. Use any form of casting.
	7. Use any data type other than int.	This implies that you
		 cannot use arrays, structs, or unions.


	You may assume that your machine:
	1. Uses 2s complement, 32-bit representations of integers.
	2. Performs right shifts arithmetically.
	3. Has unpredictable behavior when shifting an integer by more
		 than the word size.

EXAMPLES OF ACCEPTABLE CODING STYLE:
	/*
	 * pow2plus1 - returns 2^x + 1, where 0 <= x <= 31
	 */
	int pow2plus1(int x) {
		 /* exploit ability of shifts to compute powers of 2 */
		 return (1 << x) + 1;
	}

	/*
	 * pow2plus4 - returns 2^x + 4, where 0 <= x <= 31
	 */
	int pow2plus4(int x) {
		 /* exploit ability of shifts to compute powers of 2 */
		 int result = (1 << x);
		 result += 4;
		 return result;
	}

FLOATING POINT CODING RULES

For the problems that require you to implent floating-point operations,
the coding rules are less strict.	You are allowed to use looping and
conditional control.	You are allowed to use both ints and unsigneds.
You can use arbitrary integer and unsigned constants.

You are expressly forbidden to:
	1. Define or use any macros.
	2. Define any additional functions in this file.
	3. Call any functions.
	4. Use any form of casting.
	5. Use any data type other than int or unsigned.	This means that you
		 cannot use arrays, structs, or unions.
	6. Use any floating point data types, operations, or constants.


NOTES:
	1. Use the dlc (data lab checker) compiler (described in the handout) to
		 check the legality of your solutions.
	2. Each function has a maximum number of operators (! ~ & ^ | + << >>)
		 that you are allowed to use for your implementation of the function.
		 The max operator count is checked by dlc. Note that '=' is not
		 counted; you may use as many of these as you want without penalty.
	3. Use the btest test harness to check your functions for correctness.
	4. Use the BDD checker to formally verify your functions
	5. The maximum number of ops for each function is given in the
		 header comment for each function. If there are any inconsistencies
		 between the maximum ops in the writeup and in this file, consider
		 this file the authoritative source.

/*
 * STEP 2: Modify the following functions according the coding rules.
 *
 *	 IMPORTANT. TO AVOID GRADING SURPRISES:
 *	 1. Use the dlc compiler to check that your solutions conform
 *			to the coding rules.
 *	 2. Use the BDD checker to formally verify that your solutions produce
 *			the correct answers.
 */


#endif

/*
 * CS:APP Data Lab @ Universiteit van Amsterdam
 *
 * Modification to original Data Lab:
 *
 * the collection of puzzles is automatically generated for each
 * programming pair.
 *
 * Augustus 2016: A.Visser@uva.nl
 *
 */


/* Global ID to identify the combination of puzzles */
int lab_id = 49;
/*
 * bitAnd - x&y using only ~ and |
 *	 Example: bitAnd(6, 5) = 4
 *	 Legal ops: ~ |
 *	 Max ops: 8
 *	 Rating: 1
 */
int bitAnd(int x, int y) {
	return ~(~x|~y);
}
/*
 * fitsShort - return 1 if x can be represented as a
 *	 16-bit, two's complement integer.
 *	 Examples: fitsShort(33000) = 0, fitsShort(-32768) = 1
 *	 Legal ops: ! ~ & ^ | + << >>
 *	 Max ops: 8
 *	 Rating: 1
 */
int fitsShort(int x) {
	int signed_flag = x >> 31; // Either all zeros or all ones depending on the sign
	int absolute_value = (x ^ signed_flag);	// Flip bytes iff signed
	// "unsigned_number >> 15" should equal zero to fit in a short
	return !(absolute_value >> 15);
}
/*
 * fitsBits - return 1 if x can be represented as an
 *	n-bit, two's complement integer.
 *	 1 <= n <= 32
 *	 Examples: fitsBits(5,3) = 0, fitsBits(-4,3) = 1
 *	 Legal ops: ! ~ & ^ | + << >>
 *	 Max ops: 15
 *	 Rating: 2
 */

int fitsBits(int x, int n) {

 int signed_flag = x >> 31; // Either all zeros or all ones depending on the sign
 int unsigned_number = (x ^ signed_flag);	// Flip bytes iff signed
 int neg_one = ~(0);
 int bits_shift = neg_one + n; // Shift depends on the desired amount of bits
 // "unsigned_number >> bits_shift" will equal zero if the number fits in the bits
 int shifted = unsigned_number >> bits_shift;
 return !(shifted);
}


/*
 * isAsciiDigit - return 1 if 0x30 <= x <= 0x39 (ASCII codes for characters '0' to '9')
 *	 Example: isAsciiDigit(0x35) = 1.
 *						isAsciiDigit(0x3a) = 0.
 *						isAsciiDigit(0x05) = 0.
 *	 Legal ops: ! ~ & ^ | + << >>
 *	 Max ops: 15
 *	 Rating: 3
 */
int isAsciiDigit(int x) {

	int ascii_prefix = x>>4;
	int ascii_suffix = x&15;

	int has_ascii_prefix = (~ascii_prefix) + 4;

	int ascii_suffix_2th = (ascii_suffix&2)>>1;
	int ascii_suffix_3th = (ascii_suffix&4)>>2;
	int ascii_suffix_4th = ascii_suffix>>3;

	int has_ascii_suffix = ascii_suffix_4th & (ascii_suffix_2th | ascii_suffix_3th);

	// De morgan was applied to this
	return !(has_ascii_prefix | has_ascii_suffix);
}


/*
 * isPower2 - returns 1 if x is a power of 2, and 0 otherwise
 *	 Examples: isPower2(5) = 0, isPower2(8) = 1, isPower2(0) = 0
 *	 Note that no negative number is a power of 2.
 *	 Legal ops: ! ~ & ^ | + << >>
 *	 Max ops: 20
 *	 Rating: 4
 */

int isPower2(int x) {
	int is_nul = !x; // If x is zero, is_nul will be positive
	int sign = x >> 31; // if the number is negative, sign will contain a chain of 1's
	int ones = x + ~(0); // any power of 2 will leave a trail of ones if it is subtacted by one
	// example 1000 - 0001 = 0111
	int result = x & ones; // this should equal zero for every x that is a power of 2
	int real_result = result | sign | is_nul;
	return !(real_result);
}


/*
 * float_half - Return bit-level equivalent of expression 0.5*f for
 *	 floating point argument f.
 *	 Both the argument and result are passed as unsigned int's, but
 *	 they are to be interpreted as the bit-level representation of
 *	 single-precision floating point values.
 *	 When argument is NaN, return argument
 *	 Legal ops: Any integer/unsigned operations incl. ||, &&. also if, while
 *	 Max ops: 30
 *	 Rating: 4
 */
unsigned float_half(unsigned uf) {
//	printf("%u \n", (signed)uf);
//	if((uf & 0x7fffffff) >= 0x7f800001 || uf == 2139095040 || uf ==-8388608) // Check for nan
//	{
//			return uf;
//	}
	if(!uf)
	{
		return 0;
	}

	int exp_shifted = uf >> 23;

	int exp = exp_shifted & 0xff; // This captures the exponent
	if(!(exp ^ 0xff)) { // NaNCheck
		return uf;
	}
	int exp_minus_1 = exp + ~0;
	// We only have to shift one to the right if the new exponent is zero or already zero
	if(!(exp_minus_1 & exp)) // de Moore
	{	
		int bias = 0;
		if((uf & 3)  == 3)
		{
			bias = 1;
		}
//
//		if(uf ==3)
//		{
//			return 2;
//		}
//		if(uf ==2147483651)
//		{
//			return -2147483646;
//		}
//		if(uf == 8388611)
//		{
//			return 4194306;
//		}
//		if(2155872259 == uf)
//		{
//			return -2143289342;
//		}


		int sign = 1<<31;
		int sign_mask = ~(sign);
		int uf_u = uf & sign_mask; // Destroy the sign
		int a = uf_u>>1; // 0.5 * uf
		int a_signed = (sign & uf) ^ a; // Bring the sign back if it was present
		return a_signed + bias;
	}
	int exp_minus_1_s = exp_minus_1<<23;
	int kill_exp_mask = ~ (0xff << 23); // Ones everywhere, except where the exp is
	int new_exp = (uf & kill_exp_mask) | exp_minus_1_s;
//	printBits(sizeof(uf), &uf);
//	printBits(sizeof(exp), &exp);
//	printBits(sizeof(exp_minus_1), &exp_minus_1);
//	printBits(sizeof(test), &test);
//	printBits(sizeof(new_exp), &new_exp);
	return new_exp;	
}

#ifdef DEBUG

int main()
{
	int x = -8388608;
	printBits(sizeof(x), &x);
	int y = 2139095040;
	printBits(sizeof(y), &y);
	int z = 2130706432;
	printBits(sizeof(z), &z);
	float_half(-8388608);
//	int x1 = 8388603;
//	printBits(sizeof(x1), &x1);
	
}

#endif
