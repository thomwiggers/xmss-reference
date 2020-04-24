#include "params.h"
#include <stdio.h>
#include <string.h>


int main(void) {
    xmss_params params;
    uint32_t oid = 0;

    xmss_str_to_oid(&oid, "XMSS-SHA2_10_256");
    xmss_parse_oid(&params, oid);
/*
    params.func = 1;
    params.n = 32;
    params.d = 1;
    params.wots_w = 16;
    params.full_height = 10,
    params.bds_k = 0;
    xmss_xmssmt_initialize_params(&params);
*/

#define printparam(param) \
    printf(#param ": %d,\n", params.param)

    printparam(func);
    printparam(n);
    printparam(wots_w);
    printparam(wots_log_w);
    printparam(wots_len1);
    printparam(wots_len2);
    printparam(wots_len);
    printparam(wots_sig_bytes);
    printparam(full_height);
    printparam(tree_height);
    printparam(d);
    printparam(index_bytes);
    printparam(sig_bytes);
    printparam(pk_bytes);
    printf("sk_bytes: %llu,\n", params.sk_bytes);
    printparam(bds_k);

    return 0;
}
