/* billing.h - menghitung biaya, mencetak struk, hentikan sesi, cek waktu yang tersisa. */
#ifndef BILLING_H
#define BILLING_H

#include "types.h"

long hitung_biaya_postpaid(long detik);
void selesai_sesi(komputer *k, int otomatis);   /* cetak struk + kosongkan PC */
void cek_sesi(void);                            /* peringatan 3 menit tersisa & auto-lock */
// void stop_sewa(void);                          /* hentikan sesi post-paid */
#endif
