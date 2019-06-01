#include "strFuncs.h"
#include "linkedList.h"
#include "linkedListFuncs.h"
#include "tddFuncs.h"
#include "recLinkedListFuncs.h"
#include <string>
#include <iostream>

int main(){

string s1 = "abc", s2="acb", s4="Pizza", s5="pizza";

startTestGroup("IS_ANAGRAM");
assertTrue(isAnagram(s1,s2), "abc || acb");
assertTrue(isAnagram(s4,s5),"Pizza || pizza");
assertTrue(!isAnagram(s2,s4),"acb || Pizza");
assertTrue(!isAnagram(s1,s5),"abc || pizza");


string sp1="redivide", sp2="madam", sp3="food";

startTestGroup("IS_PALINDROME");
assertTrue(!isPalindrome(sp1),"redivide");
assertTrue(isPalindrome(sp2),"madam");
assertTrue(!isPalindrome(sp3),"food");


Node *a = new Node;
Node *b = new Node;
Node *c = new Node;
a->data = 2;
a->next = b;
b->data = 3;
b->next = c;
c->data = 4;
c-> next = NULL;
LinkedList link = {a,c};

Node *d = new Node;
Node *e = new Node;
Node *f = new Node;
d->data = 9;
d->next = e;
e->data = 3;
e->next = f;
f->data = 4;
f->next = NULL;
LinkedList link2 = {e,f};

Node *g = new Node;
Node *h =new Node;
Node *j = new Node;
g->data = 13;
g->next = h;
h->data = 14;
h->next = j;
j->data = 15;
j->next = NULL;
LinkedList link3 = {g, j};

startTestGroup("RECURSIVE_SUM");
assertEquals(recursiveSum(link.head), 9, "2+3+4");
assertEquals(recursiveSum(link2.head), 16, "9+3+4");
assertEquals(recursiveSum(link3.head), 42, "15+14+13");

startTestGroup("RECURSIVE_LARGEST_VALUE");
assertEquals(recursiveSum(link.head), 4, "{2,3,4} -> 4");
assertEquals(recursiveSum(link2.head), 9, "{9,3,4} -> 9");
assertEquals(recursiveSum(link3.head), 15, "{13,14,15} -> 15");

freeLinkedList(&link);
freeLinkedList(&link2);
freeLinkedList(&link3);








return 0;	
}




