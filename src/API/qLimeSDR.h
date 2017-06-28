/*
 * File:   qLimeSDR.h
 * Author: Ignas J
 *
 * Created on April 27, 2018
 */

#ifndef QLIMESDR_H
#define	QLIMESDR_H
#include "lms7_device.h"

class LMS7_qLimeSDR : public LMS7_Device
{
public:
    LMS7_qLimeSDR(LMS7_Device *obj = nullptr);
    size_t GetNumChannels(const bool tx = false) const override;
    double GetRate(bool tx, unsigned chan, double *rf_rate_Hz = NULL) override;
    int SetRate(unsigned ch, double rxRate, double txRate, unsigned oversample = 0) override;
private:
    double dacRate;
    double adcRate;
};

#endif	/* QLIMESDR_H */

