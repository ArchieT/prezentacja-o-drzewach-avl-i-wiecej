struct location {
	struct intnode *which;
	unsigned where : EM;
};
struct traversal {
	struct location *loc;
    long unsigned depth;
};
