struct ListNode *readlist()
{
	int a[100], i, n;
	scanf("%d", &a[0]);
	while(a[i]!=-1)
	{
		i++;
		scanf("%d", &a[i]);
	}
	n = i;
	
	struct ListNode *head, *p, *d, *L;
	
	L = (struct ListNode*)malloc(sizeof(struct ListNode));
	L->data = a[0];
	L->next = NULL;
	d = p = L;
	for(i=1; i<n; i++)
	{
		p = (struct ListNode*)malloc(sizeof(struct ListNode));
		p->data = a[i];
		p->next = NULL;
		d->next = p;
		d = p;
	}
	return L;
}

struct ListNode *deletem( struct ListNode *L, int m )
{
	struct ListNode *p, *a, *b, *k;
	p = L;
	while(p->data==m)
	{
		if(p->next==NULL)
		{
			break;
		}
		b = p->next;
		free(p);
		p = b;
	}
	a = p;
	k = p->next;
	while(k)
	{
		if(k->data==m)
		{
			a->next = k->next;
			free(k);
			k = a->next;
			continue;
		}
		a = k;
		k = a->next;
	}
	if(p->data!=m)
	{
		return p;
	}
	else{
		return NULL;
	}
}
