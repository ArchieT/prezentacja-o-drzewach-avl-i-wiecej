struct traversal walk(struct traversal t, unsigned copy) {
	struct traversal r = t;
	size_t much = sizeof(struct location)*r.depth;
	if(copy) {    r.loc = malloc(much);
	              memcpy(r.loc, t.loc, much);	}
	struct location l = r.loc[r.depth-1];
	do {    if(l.which->kn>l.where) {
	        	r.loc[r.depth-1].where++;
	        	break;          }
	        r.depth--;
	        l = r.loc[r.depth-1];
	} while (r.depth>0);
	r = begin_traversal(r, 0);
	return r;
}
