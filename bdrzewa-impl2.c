struct intnode {
	K ks[DM];
	unsigned kn : EM;
	void* s[DMP];
};
union either {
	struct intnode i;
	V l;
};
struct node {
	unsigned is_leaf : 1;
	union either n;
};