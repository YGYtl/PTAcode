struct ListNode *readlist()
{
	struct ListNode *h, *p, *L;
	int a[100];
	int i, n;
	i = 0;
	scanf("%d", &a[i]);
	while(a[i]!=-1)
	{
		i++;
		scanf("%d", &a[i]);
	}
	n = i;
	L = (struct ListNode*)malloc(sizeof(struct ListNode));
	L->data = a[0];
	L->next = NULL;
	h = p = L;
	for(i=1; i<n; i++)
	{
		p = (struct ListNode*)malloc(sizeof(struct ListNode));
		p->data = a[i];
		p->next = NULL;
		h->next = p;
		h = p;
	}
	h->next = NULL;
	
	return L;
}

struct ListNode *getodd( struct ListNode **L )//1, 3, 5
{
	struct ListNode *head, *p, *d, *oddhead;
	int a[100], i, k, o;
	i = 0;
	head = *L;
	while(head->data%2!=0)
	{
		a[i] = head->data;
		i++;
		if(head->next==NULL)
		{
			break;
		}
		d = head->next;
		free(head);
		head = d;
	}
	p = head;
	d = head->next;
	while(d)
	{
		if(d->data%2!=0)
		{
			a[i] = d->data;
			i++;
			p->next = d->next;
			free(d);
			d = p->next;
			continue;
		}
		p = d;
		d = p->next;
	}
	if(head->data%2==0)
	{
		*L = head;
	}
	else{
		*L = NULL; 
	} 
	k = i;
	if(k>0)
	{
		oddhead = (struct ListNode*)malloc(sizeof(struct ListNode));
		oddhead->data = a[0];
		oddhead->next = NULL;
		d = oddhead;
		for(i=1; i<k; i++)
		{
			p = (struct ListNode*)malloc(sizeof(struct ListNode));
			p->data = a[i];
			p->next = NULL;
			d->next = p;
			d = p;
		}
		return oddhead;
	}
	
	return NULL;
}
