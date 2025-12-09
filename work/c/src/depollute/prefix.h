#ifndef PREFIX_H
#define PREFIX_H 1

#define CAT(a,b) a##b
#define PASTE(a,b) CAT(a,b)
#define JOIN(prefix,name) PASTE(prefix,PASTE(_,name))

/* Choose long ugly names for your actual library
 * functions.  Ensure that these names have a small
 * likelihood of conflicting with anything else.
 * Then allow the user to specify a shorthand prefix
 * that *they* know will not conflict with their
 * own and other linked code.
 */

void long_ugly_name_init();
void long_ugly_name_print();
void long_ugly_name_free();

#ifdef STR_PREFIX

/* Style 1 of de-conflicting the namespace
 * Each function is renamed as prefix_*
 * So, each function wraps the original, ugly named
 * function. There is overhead here in an extra
 * layer of function calls.
 */

void JOIN(STR_PREFIX,init)()  { long_ugly_name_init(); }
void JOIN(STR_PREFIX,print)() { long_ugly_name_print(); }
void JOIN(STR_PREFIX,free)()  { long_ugly_name_free(); }

#undef STR_PREFIX
#endif

#ifdef OBJ_PREFIX

/* Style 2 of de-conflicting the namespace
 * Each function is a member of a struct prefix_t
 * So, each function is just a lookup in the struct.
 * Need to see if compiler optimizes this lookup away.
 */

struct JOIN(OBJ_PREFIX,t) {
  void (*init)();
  void (*print)();
  void (*free)();
};

struct JOIN(OBJ_PREFIX,t) OBJ_PREFIX = {
  long_ugly_name_init,
  long_ugly_name_print,
  long_ugly_name_free
};

#undef OBJ_PREFIX
#endif

#endif
