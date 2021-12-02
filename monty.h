#ifndef MONTY_H
#define MONTY_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct stack_s
{
        int n;
        struct stack_s *prev;
        struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcoode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO Holberton project
 */

typedef struct instruction_s
{
        char *opcode;
        void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

typedef struct global_s
{
	char *ipt;
	int iptint;
	char *tokop;
} glo_t;

extern glo_t *glo;

void opcodecompare(stack_t **stack, unsigned int line_number, char *opcode);
void push(stack_t **stack, unsigned int line_number);
void pall(stack_t **stack, unsigned int line_number);
void pint(stack_t **stack, unsigned int line_number);
void pop(stack_t **stack, unsigned int line_number);
void swap(stack_t **stack, unsigned int line_number);
void add(stack_t **stack, unsigned int line_number);
void nop(stack_t **stack, unsigned int line_number);
void sub(stack_t **stack, unsigned int line_number);
void divide(stack_t **stack, unsigned int line_number);
void mul(stack_t **stack, unsigned int line_number);
void mod(stack_t **stack, unsigned int line_number);
void pchar(stack_t **stack, unsigned int line_number);
int _strcmp(char *s1, char *s2);
char *getopcode(void);
void free_stack(stack_t *stack);
void free_exit(stack_t *stack, unsigned int lnum, char *mssg);

char *read_file(int fd);
void push_check(int toklenx, char *tok, stack_t *stack, int lnum);
bool comment_check(unsigned int *lnum, int i, char **tok);

int bc_exe(char *ipt, stack_t **stack)
void free_stack(stack_t *head);
size_t print_stack(const stack_t *h);
void free_exit_ui(stack_t *stack, unsigned int lnum, char *mssg);
int nl_count(char *tok);
char *tokop_init(char *tok, int tok_offset);

#endif /* MONTY_H */
