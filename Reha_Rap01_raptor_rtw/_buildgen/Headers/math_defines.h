#ifndef __MATH_DEFINES
#define __MATH_DEFINES
#define abs(n)                         fabsf((n))
#define fabs(n)                        fabsf((n))
#define mod(n,m)                       fmodf((n),(m))
#define fmod(n,m)                      fmodf((n),(m))
#define sqrt(n)                        sqrtf((n))
#define floor(n)                       floorf((n))
#define ceil(n)                        ceilf((n))
#define atan(n)                        atanf((n))
#define atan2(n, m)                    atan2f((n),(m))
#define acos(n)                        acosf((n))
#ifdef sin
#undef sin
#endif

#define sin(n)                         sinf((n))
#define asin(n)                        asinf((n))
#ifdef cos
#undef cos
#endif

#define cos(n)                         cosf((n))
#define tan(n)                         tanf((n))
#define tanh(n)                        tanhf((n))
#define pow(n,m)                       powf((n),(m))
#define exp(n)                         expf((n))
#define fmax(n,m)                      fmaxf((n),(m))
#define fmin(n,m)                      fminf((n),(m))
#ifdef log
#undef log
#endif

#define log(n)                         logf(n)
#ifdef log10
#undef log10
#endif

#define log10(n)                       log10f(n)
#endif
