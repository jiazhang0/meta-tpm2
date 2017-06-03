DESCRIPTION = "Packagegroup for TPM2 TCG TSS userspace and utilities."
LICENSE = "MIT"
PR = "r0"

inherit packagegroup

RRECOMMENDS_${PN} = "\
    kernel-module-tpm-tis \
    kernel-module-tpm-crb \
"
