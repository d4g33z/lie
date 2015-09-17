/* Boolean operations */
#include "lie.h"

#ifdef __STDC__
object int_eq_mat_mat(object a,object b);
object int_ne_mat_mat(object a,object b);
object Int_search_mat_vec(matrix* m,vector* v,_index low,_index up);
#endif

extern int	chunks;

/*
object
int_and_int_int(a)
    symblst	     a;
{
    symblst b=a->next;
    eval_value(a);
    if (Integer(a->data.val)) eval_value(b);
	else return (object) bool_false;
    if (Integer(b->data.val)) return (object) bool_true;
    return (object) bool_false;
}
*/
/*
object
int_or_int_int(a)
    symblst	     a;
{
    symblst b=a->next;
    eval_value(a);
    if (Integer(a->data.val)) return (object) bool_true;
	eval_value(b);
    if (Integer(b->data.val)) return (object) bool_true;
    return (object) bool_false;
}
*/
/*
object
int_not_int(a)
    object	    a;
{
    object	    result;
    result=(object) mkintcel(!a->i.intval);
    return (result);
}
*/
object int_eq_mat_mat(a,b) object a,b;
{
    _index    i=0,
    m=a->m.nrows,
    n=a->m.ncols;
    if (a->m.nrows != b->m.nrows)
	return (object) bool_false;
    if (a->m.ncols != b->m.ncols)
	return (object) bool_false;
    while (i < m && eqrow(*(a->m.elm+i),*(b->m.elm+i),n))
	i++;
    if (i == m) return (object) bool_true;
    return (object) bool_false;
}

object
int_eq_pol_pol(a, b)
    object	    a, b;
{
    _index i=0, nrows;
    if (!issorted(a)) a=(object) Reduce_pol((poly*) a);
    if (!issorted(b)) b=(object) Reduce_pol((poly*) b);
    if (int_eq_mat_mat(a, b) == (object) bool_false) 
	return (object) bool_false;
    nrows=a->m.nrows;
    while (i < nrows && !cmp(a->pl.coef[i],b->pl.coef[i])) i++;
    if (i == nrows) return (object) bool_true;
    return (object) bool_false;
}

object int_ne_mat_mat(a,b) object a,b;
{
    _index i=0,
    m=a->m.nrows,
    n=a->m.ncols;
    if (a->m.nrows != b->m.nrows)
	return (object) bool_true;
    if (a->m.ncols != b->m.ncols)
	return (object) bool_true;
    while (i < m && eqrow(*(a->m.elm+i),*(b->m.elm+i),n))
	i++;
    if (i != m) return (object) bool_true;
    return (object) bool_false;
}

object
int_ne_pol_pol(a, b)
    object	    a, b;
{
    _index i=0, nrows;
    if (!issorted(a)) a=(object) Reduce_pol((poly*) a);
    if (!issorted(b)) b=(object) Reduce_pol((poly*) b);
    if (int_ne_mat_mat(a, b) == (object) bool_true) 
	return (object) bool_true;
    nrows=a->m.nrows;
    while (i < nrows && !cmp(a->pl.coef[i],b->pl.coef[i])) i++;
    if (i == nrows) return (object) bool_false;
    return (object) bool_true;
}

object
int_eq_vec_vec(a, b)
    object	    a, b;
{
    _index	      i, n;
    if (a->v.ncomp != b->v.ncomp)
	return (object) bool_false;
    n=a->v.ncomp;
    i=0;
    while (i < n && *(a->v.compon + i) == *(b->v.compon + i))
	i++;
    if (i == n) return (object) bool_true;
    return (object) bool_false;
}

object
int_ne_vec_vec(a, b)
    object	    a, b;
{
    _index	      i, n;
    if (a->v.ncomp != b->v.ncomp)
	return (object) bool_true;
    n=a->v.ncomp;
    i=0;
    while (i < n && *(a->v.compon + i) == *(b->v.compon + i))
	i++;
    if (i != n) return (object) bool_true;
    return (object) bool_false;
}
/*
object
vec_addelm_vec_int(a, b)
    object	    a, b;
{
    index	       i, n; 
    entry  k;
    object	    result;
    n=a->v.ncomp;
    k=Integer(b);
    if (isshared(a) || a->v.size == n) {
	result=(object) mkvector(2 * n + 1);
	for (i=0; i < n; i++)
	    result->v.compon[i]=a->v.compon[i];
    } else
	result=a;
    result->v.compon[n]=k;
    result->v.ncomp=n + 1;
    return (result);
}
*/

object vec_startaddelm_int_vec(entry a, object b) {
    _index	      i, n, k;
    object	    result;
    n=b->v.ncomp;
    k=a;
    result=(object) mkvector(n + 1);
    result->v.compon[0]=k;
    for (i=0; i < n; i++)
	result->v.compon[i + 1]=b->v.compon[i];
    return (result);
}

object vec_subelm_vec_int(object a, entry b) {
    _index	      i, n, k;
    object	    result;
    n=a->v.ncomp;
    k=b - 1;
    if (n <= 0)
	error("Cannot delete from an empty vector.\n");
    if (k < 0 || k >= n)
	error("Index for deletion of vector component out of range.\n");
    result=(object) mkvector(n - 1);
    for (i=0; i < k; i++)
	result->v.compon[i]=a->v.compon[i];
    for (i=k + 1; i < n; i++)
	result->v.compon[i - 1]=a->v.compon[i];
    return (result);
}
/*
object int_select_vec_int(vector *t, entry n) {
    object	    result;
    index	      index1;
    index1=n;
    if (index1 < 1 || index1 > t->ncomp)
	error("Index (%ld) into vector out of range \n", (long)index1);
    result=(object) mkintcel(t->compon[index1 - 1]);
    return (result);
}
*/
object vec_select_mat_int(object m, entry indexobj) {
    _index	      index1;
    object	    result;
    _index	      n, i;
    index1=indexobj;
    if (index1 < 1 || index1 > m->m.nrows)
	error("Row index (%ld) into matrix out of range \n", (long)index1);
    result=(object) mkvector(m->m.ncols);
    n=m->m.ncols;
    index1--;
    for (i=0; i < n; i++)
	result->v.compon[i]=m->m.elm[index1][i];
    return (result);
}
/*
object pol_select_pol_int(poly *m, entry indexobj) {
    index	      index1;
    poly	  *result;
    index	      n, i;
    entry *elm, *melm;
    index1=indexobj - 1;
    if (index1 < 0 || index1 >= m->nrows)
	error("Index (%ld) into polynomial out of range \n", (long)(index1+1));
    if (!issorted(m)) m= Reduce_pol(m);
    result=mkpoly(1,m->ncols);
    elm=result->elm[0];
    n=m->ncols;
    result->coef[0]=m->coef[index1];
    setshared(result->coef[0]);
    melm=m->elm[index1];
    for (i=0; i < n; i++)
	    elm[i]=melm[i];
    return (object) result;
}
*/
object vec_select_pol_int(poly *m, entry indexobj) {
    _index	      index1;
    vector	    *result;
    _index	      n;
    entry *elm, *melm;
    index1=indexobj - 1;
    if (index1 < 0 || index1 >= m->nrows)
	error("Index (%ld) into polynomial out of range \n", (long)(index1+1));
    if (!issorted(m)) m= Reduce_pol(m);
    result=mkvector(m->ncols);
    elm=result->compon;
    n=m->ncols;
    melm=m->elm[index1]; copyrow(melm,elm,n);
    return (object) result;
}

object bin_select_pol_vec(poly *p, vector *v) {
    _index nvars=p->ncols;
    entry *compon=v->compon;
    _index index1;
    if (v->ncomp != nvars) 
    error("%ld indices were required - %ld were present.\n"
	     , (long)nvars, (long)v->ncomp);
    index1=searchterm(p, compon);
    if (index1 < 0) return (object) null;
    return (object) p->coef[index1];
}

object Int_search_mat_vec(m,v,low,up)
  matrix* m; vector* v; _index low,up;
{

/***************************************************************
*  Returns the first index of vector v in matrix m	       *
***************************************************************/

	_index nrows=(m->nrows<up?m->nrows:up);
	_index ncols=m->ncols;
	_index i=(low<0?0:low);
	entry **elm=m->elm;
	entry *compon=v->compon;

/***************************************************************
*  Lineair search					       *
***************************************************************/

    if (v->ncomp != ncols) 
	error("%ld entries were required - %ld entries present.\n"
	     , (long)ncols, (long)v->ncomp);
    while (i < nrows && !eqrow(elm[i],compon,ncols)) i++;
    if (i < nrows) return (object) mkintcel(i+1);
    return (object) bool_false;
}

object int_search_mat_vec(m,v)
    matrix *m; vector *v;
{
    return Int_search_mat_vec(m,v,0,m->nrows);
}

object int_search_mat_vec_int_int(m,v,low,up)
    matrix *m; vector *v;
    entry up, low;
{
    return Int_search_mat_vec(m,v,low-1, up);
}

object
int_select_mat_int_int(m, n1, n2) 
    matrix *m; entry n1, n2;
{
    _index index1;
    _index index2;
    index1=n1 - 1;
    index2=n2 - 1;
    if (index1 < 0 || index1 >= m->nrows)
	error("Row index (%ld) into matrix out of range \n",(long)(index1+1));

    if (index2 < 0 || index2 >= m->ncols)
	error("Column index (%ld) into matrix out of range \n",(long)(index2+1));

    return (object) mkintcel(m->elm[index1][index2]);
}
/*
object
int_used()
{
    return ((object) mkintcel(chunks));
}

object
arg_break_arg(a) object
a;
{
    stop_loop=a;
    return a;
}

object
arg_return_arg(a) object
a;
{
    stop_fun=a;
    return nothing;
}

object
vid_break()
{
    stop_loop=nothing;
    return nothing;
}

object
vid_return()
{
    stop_fun=nothing;
    return nothing;
}

object
apply(funsym) symblst
funsym;
{
    entry	    size;
    index   i;
    symblst sizesym=funsym->next;
    symblst unitsym=funsym->arglst;
    symbrec f[1];
    strtype  fun_name_old=fun_name;
    object stop_later=stop_loop;
    stop_loop=NULL;
    eval_value( sizesym);
    size=Integer(sizesym->data.val);
    if (size < 0)
	error("IAPPLY cannot repeat a negative number of times.\n");
    eval_value( unitsym);
    fun_name=funsym->a.label->name;
    for (i=0; i < size; i++) {
	evalbl_value_dup(f,funsym);
	assignsym(unitsym,f);
	if (stop_loop!=NULL) break;
    }
    fun_name=fun_name_old;
    stop_loop=stop_later;
    return unitsym->data.val;
}

object
vec_apply_int_int(funsym) symblst
funsym;
{
    index size, n;
    index i;
    object	    result, unitobj;
    object stop_later=stop_loop;
    symblst sizesym=funsym->next;
    symblst unitsym=funsym->arglst;
    symbrec f[1];
    strtype  fun_name_old=fun_name;
    stop_loop=false;
    eval_value( sizesym);
    size=Integer(sizesym->data.val);
    if (size < 0)
	error("VAPPLY cannot make a vector of negative size \n");
    eval_value( unitsym);
    if (type_of(unitsym) == BIGINT) {
	unitsym->data.val=(object)(*bin2int)(&unitsym->data.val->b);
	unitsym->type=type_of(unitsym->data.val);
    }
    if (type_of(unitsym) != VECTOR && !is_int(type_of(unitsym)))
	error("vapply: Illegal unit.\n");
    unitobj=unitsym->data.val;
    n=(is_int(type_of(unitsym)) ? 1 : unitobj->v.ncomp);
    result=(object) mkvector(size + n);
    addstaynode(result);
    result->v.ncomp=n;
    if (is_int(type_of(unitsym)))
		result->v.compon[0]=Integer(unitobj);
    else {
		for (i=0; i < n; i++)
		result->v.compon[i]=unitobj->v.compon[i];
		unitsym->data.val=result;
    }
    fun_name=funsym->a.label->name;
    for (i=0; i < size; i++) {
		evalbl_value_dup(f,funsym);
		result->v.compon[result->v.ncomp++]=Integer(f->data.val);
		if (is_int(type_of(unitsym)))
			assignsym(unitsym,f);
		if (stop_loop!=NULL)  break;
    }
    fun_name=fun_name_old;
    stop_loop=stop_later;
    return result;
}
*/
object vec_join_mat(object a)
{
    object result;
    _index i,j, n=a->m.nrows, m=a->m.ncols;
    result=(object) mkvector(a->m.nrows * a->m.ncols);
    for (i=0; i < n; i++)
	for (j=0; j < m; j++)
	    result->v.compon[m * i + j]=a->m.elm[i][j];
    return result;
}
object
vec_diag_mat(a)
    object	    a;
{
    object	    result;
    _index    i;
    _index	      n=a->m.nrows, m=a->m.ncols;
    _index	      size;
    if (n > m)
	size=m;
    else
	size=n;
    result=(object) mkvector(size);
    for (i=0; i < size; i++) {
	result->v.compon[i]=*(*(a->m.elm + i) + i);
    }
    return (result);
}

poly* pol_monom_vec(v) vector *v;
{
    poly *result;
    int i;
    result=mkpoly(1,v->ncomp);
    result->coef[0]=one;
    for (i=0; i<v->ncomp; i++)
	result->elm[0][i]=v->compon[i];
    return result;
}

object pol_polynom_bin_mat(d,p) object p; bigint* d;
{ poly *result; _index i; _index nr=p->pl.rowsize,nc=p->pl.ncols;
  if (!isshared(p)) /* space for coef's already reserved in p, so use it: */
  { p->pl.type=POLY;
    p->pl.coef=(bigint**)
      ((char*)p + sizeof(poly) + nr*sizeof(entry*) + nr*(nc*sizeof(entry)));
    if (nr == 0) { p->pl.coef[0]=null; p->pl.nrows=1; }
    else for (i=0; i<nr; i++) { p->pl.coef[i]=d; setshared(d); }
    return p;
  }
  result=mkpoly(p->m.nrows,p->m.ncols);
  for (i=0; i<p->m.nrows; i++)
  { copyrow(p->m.elm[i],result->elm[i],nc); result->coef[i]=d; setshared(d); }
  return (object) result;
}

poly* pol_polynom_mat(p) matrix* p;
{ return &pol_polynom_bin_mat(one,(object)p)->pl; }

/*
poly* pol_polynom_bin(k) bigint *k;
{
    poly *result=mkpoly(1,0);
    result->coef[0]=k;
    setshared(k);
    return result;
}
*/

poly* pol_polynom_int(entry k)
{
    bigint *b;
    entry d=k;
    poly *result=mkpoly(1,0);
    b= d==0? null : d==1 ? one : entry2bigint(d);
    result->coef[0]=b;
    setshared(b);
    return result;
}

matrix* mat_polynom_pol(p) poly *p;
{
    matrix *m;
    entry i, nrows=p->nrows;
    if (!issorted(p)) p=Reduce_pol(p);
    if (nrows==1 && p->coef[0]->size==0)
    { _index ncols=p->ncols; freepol(p); return(mkmatrix(0,ncols)); }
    m=(matrix*)p;
    if (!isshared(m)) {
	m->type=MATRIX;
	for (i=0;i<nrows;i++) { clrshared(p->coef[i]); freemem(p->coef[i]); }
	p->coef=(bigint**) NULL;
    }
    else m=copymatrix(m);
    return m;
}

object pol_polynom_bin_vec(d,v) vector* v; bigint* d;
{
    object result=(object) mkpoly(1,v->ncomp);
    entry i, ncomp=v->ncomp;
    result->pl.coef[0]=d;
    setshared(d);
    for (i=0; i<ncomp; i++) result->pl.elm[0][i]=v->compon[i];
    return result;
}

object pol_polynom_vec(v)
vector *v;
{
    return pol_polynom_bin_vec(one,v);
}
/*
object pol_polynom_bin_int(bigint *d, entry k) {
    object result=(object) mkpoly(1,1);
    result->pl.coef[0]=d;
    setshared(d);
    result->pl.elm[0][0]=k;
    return result;
}

object pol_polynom_one_int(k)
entry k;
{
    return pol_polynom_bin_int(one,k);
}
*/
/*
object bin_coef_pol_int(p,k)
poly *p;entry k;
{
    _index i=k - 1;
    if (i < 0 || i >= p->nrows)
      error("Index (%ld) into polynomial out of range.\n",(long)(i+1));
    return (object) p->coef[i];
}
*/

object
pol_min_pol(a)
    poly	  *a;
{
    poly	  *result;
    _index n=a->nrows;
    int i;
    if (isshared(a)) 
	result=copypoly(a);
    else
	result=a;
    for (i=0;i<n;i++){
	bigint *c=a->coef[i];
	if (isshared(c)){ 
	    c=copybigint(c, NULL);
	    setshared(c);
	}
	c->size=-c->size;
	result->coef[i]=c;
    }
    return (object) result;
}
/*
object pol_add_pol_pol (a,b) 
    object a,b;
{
    return (object) Add_pol_pol((poly*) a, (poly*) b, false);
}

object pol_sub_pol_pol (a,b) 
    object a,b;
{
    return (object) Add_pol_pol((poly*) a, (poly*) b, true);
}

object 
pol_mul_bin_pol(a,b)
       object a,b;
{
    return (object) Mul_bin_pol((bigint*) a, (poly*) b);
}

object 
pol_mul_pol_int(a,b)
       object a,b;
{
    return (object) Mul_pol_int((poly*) a, (intcel*) b);
}

object 
pol_div_pol_bin(a,b)
       object a,b;
{
    return (object) Div_pol_bin(&a->pl,&b->b);
}

object 
pol_div_pol_vec(a,b)
       object a,b;
{
    return (object) Div_pol_vec((poly*) a, (vector*) b);
}

object pol_mod_pol_bin(a,b) object a,b;
{
    return (object) Mod_pol_bin(&a->pl,&b->b);
}

object 
pol_mod_pol_vec(a,b)
       object a,b;
{
    return (object) Mod_pol_vec((poly*) a, (vector*) b);
}

object 
pol_mul_pol_pol(a,b)
       object a,b;
{
    return (object) Mul_pol_pol((poly*) a, (poly*) b);
}

object 
int_deg_pol(p)
    object p;
{
    return (object) mkintcel(Degree_pol((poly*) p));
}

object 
int_len_pol(p)
    object p;
{
    entry l=p->pl.nrows;
    if (l == 1 && p->pl.coef[0]->size == 0) l--;
    return (object) mkintcel(l);
}

object 
int_len_tek(t)
    tekst *t;
{
    entry l=t->len;
    return (object) mkintcel(l);
}
*/

object 
pol_atensor_pol_pol(p1,p2)
    object p1, p2;
{
    setshared(p1);
    setshared(p2);
    return (object) Disjunct_mul_pol_pol((poly*) p1, (poly*) p2);;
}
    /*
     * Write here the interfaces above defined operations.
     */

#ifndef NOSAVEMAT

void rank_of_group_okay(group* g)
{ if (!simpgroup((object)g))
    error("No subgroup data available for composite groups.\n");
  if (Lierank((object)g)>RANKMAXSUB)
    error("No subgroup data available for groups of rank>%ld.\n"
       ,(long)RANKMAXSUB);
  if (Lierank((object)g)<2)
    error("Type A1 groups have no maximal subgroups.\n");
}

object tex_maxsub_grp(g)
group *g;
{
    rank_of_group_okay(g);
    return Objectread(g,"MAXSUB");
}


group* create_group(string s)
{ int i=0,count=0; object result; string t;
  for (t=s; *t; t++) if (isalpha(*t) && *t!='T') count++; /* counting */
  result=(object) mkgroup(count);
  while (*s)
  { if (isalpha(*s)) /* this skips numbers after letter */
      if (*s!='T')
      { char lietype= *s++;
	Liecomp(result,i++)=mksimpgrp(lietype,(_index)atoi(s));
      }
      else result->g.toraldim=(_index)atoi(++s);
    s++;
  }
  if (i!=count)
     error("System error creating group %ld %ld\n",(long)i,(long)count);
  return (group*) result;
}

object grp_maxsub_grp_int(nobj,g)
group *g; entry nobj;
{
    char *s;
    int i=0, start=0;
    int seq =0;
    object result= (object) NULL;
    entry n=nobj;
    rank_of_group_okay(g);
    if (n<=0) error("Index < 0");
    s=Objectread(g,"MAXSUB")->t.string;
    while (s[i]) { 
	if (s[i]==',') {
	    s[i]='\0';
	    seq++;
	    if (seq == n) {
		result=(object) create_group(s+start);
	    }
	    start=i + 1;
	}
	i++;
    }
    /* The last one */
    seq++;
    if (s[0] && (seq == n)) {
	result=(object) create_group(s+start);
    }
    if (!result) return (object) g;
    return result;
}

object mat_resmat_grp_grp(g1,g2)
group *g1,*g2;
{
    string t;
    char *buf;
    object result;
    rank_of_group_okay(g2);
    buf=grp2str(g1);
    t=malloc(strlen(buf)+4);
    strcpy(t,buf);
    t=strcat(t,".1");
    freem(buf);
    result= Objectread(g2,t); free(t);
    if (result==NULL)
    { Printf("Group "); printgrp((object)g2);
      Printf(" has no maximal subgroup of type "); printgrp((object)g1);
      error(".\n");
    }
    return result;
}

object mat_resmat_grp_int_grp(g1,d,g2)
group *g1,*g2;
entry d;
{
    string t;
    object result;
    int n=d;
    char* buf=grp2str(g1);
    t=malloc(strlen(buf)+4);
    sprintf(t,"%s.%d",buf,n);
    freem(buf);
    result= Objectread(g2,t); free(t);
    if (result==NULL)
    { Printf("Group "); printgrp((object)g2);
      Printf(" has less than %d maximal subgroups of type ",n);
      printgrp((object)g1); error(".\n");
    }
    return result;
}

#endif

/*poly*   (*mat2pol) (matrix*)=pol_polynom_mat;*/
/*matrix* (*pol2mat) (poly*)  =mat_polynom_pol;*/
/*poly*   (*vec2pol) (vector*)=pol_monom_vec;*/
/*poly*   (*bin2pol) (bigint*)=pol_polynom_bin;*/
/*poly*   (*int2pol) (intcel*)=pol_polynom_int;*/
