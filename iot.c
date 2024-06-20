#include <msp430.h>
#include <stdlib.h>
#include <stdio.h>
#include <lcd.h>
volatile int temp[50];
volatile int diff[50];
volatile unsigned int p=0;
volatile unsigned int q=0;
volatile int hh = 0;
volatile int hl = 0;
volatile int th = 0;
volatile int tl = 0;
volatile int check = 0;
volatile int checksum = 0;
volatile int dataok;
#define LED_GREEN BIT2
