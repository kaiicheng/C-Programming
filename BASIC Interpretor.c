#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <stdlib.h>
 
#define VAR 100
#define NAMELENGTH 80
#define LINE 200
 
#define STOP 0
#define IF 1
#define GOTO 2
#define PRINT 3
#define ASSIGN 4
 
#define ADD 0
#define SUB 1
#define MUL 2
#define DIV 3
#define MOD 4
 
#define EQL 5
#define NOTEQL 6
#define SMALLER 7
#define LARGER 8
#define SMALLEREQL 9
#define LARGEREQL 10
 
int oprToComp(char name[])
{
  char *operators[11] = {"+", "-", "*", "/", "%", 
			 "==", "!=", "<", ">", "<=", ">="};
  int opNum = 11;
 
  for (int i = 0; i < opNum; i++)
    if (strcmp(name, operators[i]) == 0)
      return i;
 
  printf("invalid op %s", name);
  exit(-1);
}
 
int nameToIndex(char *name, char varNames[][NAMELENGTH], int varNum)
{
  for (int i = 0; i < varNum; i++)
    if (strcmp(varNames[i], name) == 0)
      return i;
 
  printf("undefined variable %s\n", name);
  exit(-1);
}
 
int findFirst(char *first)
{
  char *codeString[4] = {"STOP", "IF", "GOTO", "PRINT"};
  for (int i = 0; i < 4; i++)
    if (strcmp(first, codeString[i]) == 0)
      return i;
 
  return ASSIGN;
}
 
void processIF(int lineNum, char varName[][NAMELENGTH], int varNum, 
	       int code[], int opd1[], int opd2[], int compopr[], 
	       int gotoLine[])
{
  char gotoStr[NAMELENGTH];
  char opd[NAMELENGTH], opr[NAMELENGTH];
 
  code[lineNum] = IF;
  scanf("%s", opd);
  opd1[lineNum] = nameToIndex(opd, varName, varNum);
  scanf("%s", opr);
  compopr[lineNum] = oprToComp(opr);
  scanf("%s", opd);
  opd2[lineNum] = nameToIndex(opd, varName, varNum);
  scanf("%s", gotoStr);
  assert(strcmp(gotoStr, "GOTO") == 0);
  scanf("%d", &(gotoLine[lineNum]));
}
 
void processASSIGN(int lineNum, char *first, char varName[][NAMELENGTH], 
		   int varNum, int code[], int opd1[], int opd2[], 
		   int compopr[], int target[])
{
  char opd[NAMELENGTH], opr[NAMELENGTH];
  code[lineNum] = ASSIGN;
  target[lineNum] = nameToIndex(first, varName, varNum);
  char assignStr[NAMELENGTH];
  scanf("%s", assignStr);
  assert(strcmp(assignStr, "=") == 0);
  scanf("%s", opd);
  opd1[lineNum] = nameToIndex(opd, varName, varNum);
  scanf("%s", opr);
  compopr[lineNum] = oprToComp(opr);
  scanf("%s", opd);
  opd2[lineNum] = nameToIndex(opd, varName, varNum);
}
 
void processCode(char varName[][NAMELENGTH], int varNum, 
		 int code[], int opd1[], int opd2[], int compopr[], 
		 int gotoLine[], int target[])
{
  char first[NAMELENGTH];
  char opd[NAMELENGTH];
  int lineNum = 1;
 
  while (scanf("%s", first) != EOF) {
    switch (findFirst(first)) {
    case GOTO:
      code[lineNum] = GOTO;
      scanf("%d", &(gotoLine[lineNum]));
      break;
    case STOP:
      code[lineNum] = STOP;
      break;
    case IF:
      processIF(lineNum, varName, varNum, code, opd1, opd2, compopr, gotoLine);
      break;
    case PRINT:
      code[lineNum] = PRINT;
      scanf("%s", opd);
      target[lineNum] = nameToIndex(opd, varName, varNum);
      break;
    case ASSIGN:
      processASSIGN(lineNum, first, varName, varNum, code, opd1, opd2, 
		    compopr, target);
      break;
    }
    lineNum++;
  }
}
 
int compare(int operand1, int operand2, int operator)
{
  switch (operator) {
  case EQL:
    return (operand1 == operand2);
  case NOTEQL:
    return (operand1 != operand2);
  case SMALLER:
    return (operand1 < operand2);
  case LARGER:
    return (operand1 > operand2);
  case SMALLEREQL:
    return (operand1 <= operand2);
  case LARGEREQL:
    return (operand1 >= operand2);
  default:
    printf("invalid comp %d\n", operator);
    exit(-1);
  }
}
 
int arithemetic(int operand1, int operand2, int operator)
{
  switch (operator) {
  case ADD:
    return (operand1 + operand2);
  case SUB:
    return (operand1 - operand2);
  case MUL:
    return (operand1 * operand2);
  case DIV:
    return (operand1 / operand2);
  case MOD:
    return (operand1 % operand2);
  default:
    printf("invalid comp %d\n", operator);
    exit(-1);
  }
}
 
void runCode(char varName[][NAMELENGTH], int varValue[], int varNum, 
	     int code[], int opd1[], int opd2[], int compopr[], 
	     int gotoLine[], int target[])
{
  int line = 1;
 
  while (code[line] != STOP) {
    switch (code[line]) {
    case IF:
      if (compare(varValue[opd1[line]], varValue[opd2[line]], compopr[line]))
	line = gotoLine[line];
      else
	line++;
      break;
    case GOTO:
      line = gotoLine[line];
      break;
    case ASSIGN:
      varValue[target[line]] = 
	arithemetic(varValue[opd1[line]], varValue[opd2[line]], compopr[line]);
      line++;
      break;
    case PRINT:
      printf("%d\n", varValue[target[line]]);
      line++;
      break;
    default:
      printf("invalid code %d\n", code[line]);
      exit(-1);
    }
  }
}
 
int readVariable(char varName[][NAMELENGTH], int varValue[])
{  
  int count = 0;
  char name[NAMELENGTH];
 
  scanf("%s", name);
  while (strcmp(name, "END") != 0) {
    char assignStr[NAMELENGTH];
    strcpy(varName[count], name);
    scanf("%s", assignStr);
    assert(strcmp(assignStr, "=") == 0);
    scanf("%d", &(varValue[count]));
    count++;
    scanf("%s", name);
  } 
  return count;
}
 
int main ()
{
  /* get all variables */
  char varName[VAR][NAMELENGTH];
  int varValue[VAR];
  int varNum = readVariable(varName, varValue);
 
  /* process code */
  int code[LINE];    /* code for each line */
  int opd1[LINE], compopr[LINE], opd2[LINE], gotoLine[LINE]; /* IF */
  int target[LINE];  /* both PRINT and ASSIGN use this */
  processCode(varName, varNum, code, opd1, opd2, compopr, gotoLine, target);
 
  /* run code */
  runCode(varName, varValue, varNum, code, opd1, opd2, compopr, gotoLine, 
	  target);
 
  return 0;
}
