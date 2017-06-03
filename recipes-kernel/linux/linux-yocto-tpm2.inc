FILESEXTRAPATHS_prepend := "${THISDIR}/linux-yocto-tpm2:"

SRC_URI += " \
    ${@base_contains('MACHINE_FEATURES', 'tpm2','file://tpm2.scc','', d)} \
    ${@base_contains('MACHINE_FEATURES', 'tpm2','file://tpm2.cfg','', d)} \
"
