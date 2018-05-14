struct location {
	struct intnode *which;
	unsigned where : EM;
};
struct traversal {
	struct location *loc;
	size_t depth;
};
struct traversal new_traversal(struct intnode *w) {
	struct traversal r;
	r.depth = 1;
	r.loc = malloc(sizeof(struct location));
	r.loc->which = w;
	r.loc->where = 0;
	return r;
}
