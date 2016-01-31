#ifndef OSSL_EXPORT_H_INCLUDE
#define OSSL_EXPORT_H_INCLUDE

#include "define.h"
#include "scoped_ssl.h"

Handle<ScopedBIO> KEY_export_spki(EVP_PKEY *pkey);
Handle<ScopedBIO> KEY_export_pkcs8(EVP_PKEY *pkey);
Handle<ScopedEVP_PKEY> KEY_import_spki(BIO *in);
Handle<ScopedEVP_PKEY> KEY_import_pkcs8(BIO *in);

#endif // OSSL_EXPORT_H_INCLUDE