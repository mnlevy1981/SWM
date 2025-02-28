#ifndef MYFUNC_F_H_
#define MYFUNC_F_H_

#include <AMReX_BLFort.H>

#ifdef __cplusplus
extern "C"
{
#endif

    void UpdateNewVariablesSub(const int* lo, const int* hi,
                      const double* pold, const int* pold_lo, const int* pold_hi,
                      const double* uold, const int* uold_lo, const int* uold_hi,
                      const double* vold, const int* vold_lo, const int* vold_hi,
                      const amrex_real* cu, const int* cu_lo, const int* cu_hi,
                      const amrex_real* cv, const int* cv_lo, const int* cv_hi,
                      const amrex_real* h, const int*   h_lo, const int*  h_hi,
                      const amrex_real* z, const int*   z_lo, const int*  z_hi,

                      amrex_real* pnew, const int* pnew_lo, const int* pnew_hi,
                      amrex_real* unew, const int* unew_lo, const int* unew_hi,
                      amrex_real* vnew, const int* vnew_lo, const int* vnew_hi,
                      const amrex_real& tdtsdx, const amrex_real& tdtsdy, const amrex_real& tdts8);

#ifdef __cplusplus
}
#endif

#endif
