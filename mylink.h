#pragma once
#ifndef __MYSTDLINK_H__
#define __MYSTTDLINK_H__

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define LEN(VAR) sizeof(VAR)
#define ElementType int

typedef struct link {
	ElementType data;
	struct link * next;

}Link;

Link* linkCreate(int n);
void linkTraverse(Link* head);
Link* seqFind(Link* head, unsigned int seq);
Link* insert(Link* head, unsigned int seq, ElementType key);
Link *delSeqNode(Link* head, unsigned int seq);
void addNode(Link* head, ElementType key);
void deleteNode(Link* head);

#endif __MYSTDLINK_H__
