

bigint* fac(_index n);

bigint* n_tableaux(entry* lambda, _index l);

bigint* Classord(entry* kappa, _index l);

_index check_part(entry* lambda, _index l);

vector* check_tabl(vector* v);

boolean Nextperm(entry* w, _index n);

boolean Nextpart(entry* lambda, _index l);

boolean Nexttableau(entry* t, _index n);

matrix* Permutations(entry* v,_index n);

matrix* Partitions(_index n);

matrix* Tableaux(entry* lambda, _index l);

vector* Trans_part(entry* lambda, _index l);

entry Sign_part(entry* lambda, _index l);

void Robinson_Schensted (entry* P, entry* Q, _index n, entry* sigma);

void Schensted_Robinson (entry* sigma, _index n, entry* P, entry* Q);

poly* MN_char(entry* lambda, _index l);

bigint* MN_char_val(entry* lambda, entry* mu, _index l, _index m);


