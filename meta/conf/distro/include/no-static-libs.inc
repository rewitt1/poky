DISABLE_STATIC = " --disable-static"
# qemu aborts on unrecognised option
DISABLE_STATIC_pn-qemu = ""
DISABLE_STATIC_pn-qemu-native = ""
DISABLE_STATIC_pn-nativesdk-qemu = ""
# pciutils fails build
DISABLE_STATIC_pn-pciutils = ""
# libcap aborts on unrecognised option
DISABLE_STATIC_pn-libcap = ""
DISABLE_STATIC_pn-libcap-native = ""
# libpcap aborts on unrecognised option
DISABLE_STATIC_pn-libpcap = ""
# needed by gdb
DISABLE_STATIC_pn-readline = ""
# needed by pseudo
DISABLE_STATIC_pn-sqlite3 = ""
DISABLE_STATIC_pn-sqlite3-native = ""
DISABLE_STATIC_pn-nativesdk-sqlite3 = ""
# openjade/sgml-common have build issues without static libs
DISABLE_STATIC_pn-sgml-common-native = ""
DISABLE_STATIC_pn-openjade-native = ""
# openssl has build issues without static libs
DISABLE_STATIC_pn-openssl = ""
DISABLE_STATIC_pn-openssl-native = ""
DISABLE_STATIC_pn-nativesdk-openssl = ""
# waf aborts on unknown option
DISABLE_STATIC_pn-eglinfo-x11 = ""
DISABLE_STATIC_pn-eglinfo-fb = ""
# libssp-static-dev included in build-appliance
DISABLE_STATIC_pn-gcc-runtime = ""
EXTRA_OECONF_append = "${DISABLE_STATIC}"

EXTRA_OECMAKE_append_pn-libical = "-DSHARED_ONLY=True"
