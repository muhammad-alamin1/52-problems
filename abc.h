#define stpcpy(dest, src) \
  ((__ssp_bos (dest) != (size_t) -1)					\
   ? __builtin___stpcpy_chk (dest, src, __ssp_bos (dest))		\
   : __stpcpy_ichk (dest, src))
static inline __attribute__((__always_inline__)) char *
__stpcpy_ichk (char *__restrict__ __dest, const char *__restrict__ __src)
{
  return __builtin___stpcpy_chk (__dest, __src, __ssp_bos (__dest));
}
