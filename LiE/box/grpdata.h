

boolean wronggroup(char lietype,_index rank);

boolean simpgroup(object g);
_index Lierank(object grp);
_index Ssrank(object g);

matrix* simp_Cartan(simpgrp* g);
matrix* Cartan(void);
entry simp_detcart(simpgrp* g);
entry Detcartan(void);
matrix* simp_icart(simpgrp* g);
matrix* Icartan(void);

vector* Exponents(object grp);

_index simp_numproots(simpgrp* g);
_index Numproots(object grp);
matrix* simp_proots(simpgrp* g);
matrix* Posroots(object grp);
vector* Highroot(simpgrp* g);
vector* Simproot_norms(object grp);

poly* Adjoint(object grp);
entry Dimgrp(object grp);
matrix* Center(object grp);

_index find_root(entry* alpha, entry level, simpgrp* g);
boolean isroot(entry* alpha);
void checkroot(entry* alpha);
boolean isposroot(entry* alpha);


