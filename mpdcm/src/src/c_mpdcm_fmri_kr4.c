/* aponteeduardo@gmail.com */
/* copyright (C) 2014 */

#include "c_mpdcm.h"

void mexFunction(int nlhs, mxArray *plhs[], int nrhs, const mxArray *prhs[])
{

    if (nlhs > 1)
    {
        mexErrMsgIdAndTxt("CUDA_DCM:cuda_check_theta:input",
            "Only one output supported");
    }

    if (nrhs != 3)
    {
        mexErrMsgIdAndTxt("CUDA_DCM:cuda_check_theta:input",
            "Only three arguments supported");        
    }


    if ( nlhs == 1 )
    {
        int nx, ny, nu, dp, nt, nb;
 
        c_mpdcm_fmri_kr4(plhs, prhs, prhs+1, prhs+2);
    }

}
 
