
#ifndef UTILS_MINMAX_H
#define UTILS_MINMAX_H

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

#define NOMINMAX

#define TIMAX_MIN(x, y)  ((x) <= (y) ? (x) : (y))
#define TIMAX_MAX(x, y)  ((x) >= (y) ? (x) : (y))

namespace math {

template <typename _Ty>
_Ty (min)(const _Ty & x, const _Ty & y) {
    return (x <= y) ? x : y;
}

template <typename _Ty>
_Ty min2(const _Ty x, const _Ty y) {
    return (x <= y) ? x : y;
}

template <typename _Ty>
_Ty (max)(const _Ty & x, const _Ty & y) {
    return (x >= y) ? x : y;
}

template <typename _Ty>
_Ty max2(const _Ty x, const _Ty y) {
    return (x >= y) ? x : y;
}

template <typename T, T M, T N>
struct mininum {
    enum { value = ((M <= N) ? M : N) };
};

template <typename T, T M, T N>
struct maxinum {
    enum { value = ((M >= N) ? M : N) };
};

} // namespace math

#endif  /* UTILS_MINMAX_H */
