struct traversal begin_traversal(	struct traversal t,
					unsigned copy	) {
	struct traversal r = t;
	size_t much = sizeof(struct location)*r.depth;
	struct location l = r.loc[r.depth-1];
	if(!((struct node*)(l.which->s[l.where]))->is_leaf) {
		if(copy) { 	r.loc = malloc(much);
				memcpy(r.loc, t.loc, much);	}
		much+=sizeof(struct location);
		r.loc = realloc(r.loc, much);
		r.loc[r.depth].which = l.which->s[l.where];
		r.loc[r.depth].where = 0;
		r.depth+=1;
		r = begin_traversal(r, 0);	}
	return r;
}
